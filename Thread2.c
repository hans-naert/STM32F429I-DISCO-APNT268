#include "cmsis_os2.h"                          // CMSIS RTOS header file
 
/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
osThreadId_t tid_Thread2;                        // thread id
 
void Thread2 (void *argument);                   // thread function
 
int Init_Thread2 (void) {
 
  tid_Thread2 = osThreadNew(Thread2, NULL, NULL);
  if (tid_Thread2 == NULL) {
    return(-1);
  }
 
  return(0);
}

extern int sum;
extern osSemaphoreId_t sid_Semaphore; 
 
void Thread2 (void *argument) {
 
	for(int i=0;i<100;i++)
	{
		osSemaphoreAcquire(sid_Semaphore, osWaitForever); 
		int sum_local=sum;
		osThreadYield();                            // suspend thread
		sum_local++;
		sum=sum_local;
		osSemaphoreRelease(sid_Semaphore);
		osThreadYield();
	}
	osDelay(osWaitForever);
}
