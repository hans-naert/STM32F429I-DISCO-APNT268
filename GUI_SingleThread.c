#include <stdio.h>
#include <string.h>
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

int busy = 0;
int pause_status = 0;

uint32_t cnt=0;

void start()
{
	//busy=1
	printf("start\n");
	busy=1;
}

void pause()
{
	//busy=0, pause=1
	printf("pause\n");
	busy=0;
	pause_status=1;
}

void stop() 
{
	//busy=0
	printf("stop\n");
	busy=0;
	pause_status=0;
}


__NO_RETURN static void GUIThread (void *argument) {
  (void)argument;
	uint32_t startTickCount=0;
	uint32_t cnt_prev, cnt_pause=0;
	int pause_prev=0;
	int busy_prev=0;

  GUI_Init();           /* Initialize the Graphics Component */

  /* Add GUI setup code here */

	//GUI_DispString("Hello Vives");
	WM_HWIN hWin = CreateLogVIEWER();
	WM_HWIN hItem = WM_GetDialogItem(hWin, ID_MULTIEDIT_0);
  MULTIEDIT_SetText(hItem, "Singlethread");
	
  while (1) {
    
		if((busy_prev==0)&&(busy==1))
		{
			if(pause_status==0)
				cnt_pause=0;
			startTickCount=osKernelGetTickCount();
		}
		
		busy_prev=busy;
		
		if((pause_prev==0)&&(pause_status==1))
			cnt_pause=cnt;
		
		pause_prev=pause_status;
		
    /* All GUI related activities might only be called from here */
		if(busy==1)
			cnt=cnt_pause+(osKernelGetTickCount()-startTickCount)/1000;
		
		if(cnt!=cnt_prev)
		{
			cnt_prev=cnt;
			char buf[20];
			sprintf(buf,"time: %d",cnt);
			MULTIEDIT_SetText(hItem, buf);
		}
    GUI_Exec();         /* Execute all GUI jobs ... Return 0 if nothing was done. */
    GUI_X_ExecIdle();   /* Nothing left to do for the moment ... Idle processing */
		GUI_TOUCH_Exec();
		
  }
}
