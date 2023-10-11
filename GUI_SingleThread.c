
#include "cmsis_os2.h"
#include "GUI.h"
#include "DIALOG.h"

#define ID_FRAMEWIN_0            (GUI_ID_USER + 0x00)
#define ID_BUTTON_0            (GUI_ID_USER + 0x01)
#define ID_MULTIEDIT_0           (GUI_ID_USER + 0x02)

extern WM_HWIN CreateLogVIEWER(void);

/*----------------------------------------------------------------------------
 *      GUIThread: GUI Thread for Single-Task Execution Model
 *---------------------------------------------------------------------------*/
#define GUI_THREAD_STK_SZ    (2048U)

static void         GUIThread (void *argument);         /* thread function */
static osThreadId_t GUIThread_tid;                      /* thread id */
static uint64_t     GUIThread_stk[GUI_THREAD_STK_SZ/8]; /* thread stack */

static const osThreadAttr_t GUIThread_attr = {
  .stack_mem  = &GUIThread_stk[0],
  .stack_size = sizeof(GUIThread_stk),
  .priority   = osPriorityIdle 
};

int Init_GUIThread (void) {

  GUIThread_tid = osThreadNew(GUIThread, NULL, &GUIThread_attr);
  if (GUIThread_tid == NULL) {
    return(-1);
  }

  return(0);
}

__NO_RETURN static void GUIThread (void *argument) {
  (void)argument;

  GUI_Init();           /* Initialize the Graphics Component */

  /* Add GUI setup code here */

	//GUI_DispString("Hello Vives");
	WM_HWIN hWin = CreateLogVIEWER();
	WM_HWIN hItem = WM_GetDialogItem(hWin, ID_MULTIEDIT_0);
  MULTIEDIT_SetText(hItem, "Singlethread");
	
  while (1) {
    
    /* All GUI related activities might only be called from here */

    GUI_Exec();         /* Execute all GUI jobs ... Return 0 if nothing was done. */
    GUI_X_ExecIdle();   /* Nothing left to do for the moment ... Idle processing */
		GUI_TOUCH_Exec();
  }
}
