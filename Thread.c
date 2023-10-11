#include "cmsis_os2.h"                          // CMSIS RTOS header file
#include "USBH_MSC.h"
#include <stdio.h>
char fbuf[200] = { 0};

 int Init_Timers (void);
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
	 Init_Timers();
 
	 USBH_Initialize(0);
	
  while (1) {
		result = USBH_MSC_DriveMount("U0:");
		if(result==USBH_MSC_OK) {
			f = fopen("Test.txt","r");
			if(f) {
				fread(fbuf, sizeof(fbuf),1,f);
				fclose(f);
			}
		}
		osDelay(1000);
    ; // Insert thread code here...
    osThreadYield();                            // suspend thread
  }
}
