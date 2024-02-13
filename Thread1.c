#include <stdio.h>
#include "cmsis_os2.h"                          // CMSIS RTOS header file
 
extern volatile int a;
extern osSemaphoreId_t sid_Semaphore;                  // semaphore id

/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
osThreadId_t tid_Thread1;                        // thread id
 
void Thread1 (void *argument);                   // thread function
 
int Init_Thread1 (void) {
 
  tid_Thread1 = osThreadNew(Thread1, NULL, NULL);
  if (tid_Thread1 == NULL) {
    return(-1);
  }
 
  return(0);
}
 
void Thread1 (void *argument) {
 
   for(int i=0; i<100;i++) {
		if(osSemaphoreAcquire(sid_Semaphore, osWaitForever)!=osOK)
		{
			printf("error\n");
			while(1)
				;
		}
		
		int b=a;
		osThreadYield(); 
		b++;
		 
		
    ; // Insert thread code here...	
		
/*    val = osSemaphoreAcquire(sid_Semaphore, 10U);       // wait 10 mSec
    switch (val) {
      case osOK:
        ; // Use protected code here...
        osSemaphoreRelease(sid_Semaphore);              // return a token back to a semaphore
        break;
      case osErrorResource:
        break;
      case osErrorParameter:
        break;
      default:
        break;
    }
 */
    osThreadYield();                                    // suspend thread
		a=b;
		osSemaphoreRelease(sid_Semaphore); 
  }
	
	osDelay(1000);
	printf("a is %d\n",a);
	
}
