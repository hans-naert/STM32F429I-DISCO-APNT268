#include <stdio.h>
#include "cmsis_os2.h"                          // CMSIS RTOS header file
#include "Board_LED.h"                  // Board Support:LED
#include "USBH_MSC.h"            // USB:Host:MSC
#include "stm32f429i_discovery_sdram.h" // Board Support:Drivers:SDRAM
 

char fbuf[200] = { 0 };
extern int Init_Timers (void);
extern int Init_GUIThread (void); 
extern int Init_Thread1 (void);
extern int Init_Thread2 (void);
extern int Init_Semaphore (void);
int sum=0;

/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
osThreadId_t tid_Thread;                        // thread id
 
void Thread (void *argument);                   // thread function

int Init_Thread (void) {
 
  tid_Thread = osThreadNew(Thread, NULL, NULL);
  if (tid_Thread == NULL) {
    return(-1);
  }
 
  return(0);
}
 
void Thread (void *argument) {
	static unsigned int result;
  static FILE *f;

		
	LED_Initialize();
	Init_Timers();	
	USBH_Initialize(0);
	BSP_SDRAM_Init();
	Init_GUIThread();
	Init_Semaphore();
	Init_Thread2();
	Init_Thread1();
	
	osDelay(1000);
	printf("sum is %d\n",sum);
 
  while (1) {
    result = USBH_MSC_DriveMount ("U0:");
    if (result == USBH_MSC_OK)  {
      f = fopen ("Test.txt", "r");
      if (f) {
        fread (fbuf, sizeof (fbuf), 1, f);
        fclose (f);
      }
    }
    osDelay (1000);
	}
}
