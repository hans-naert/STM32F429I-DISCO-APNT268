#include "cmsis_os2.h"                          // CMSIS RTOS header file
 
volatile int a = 0; 
 
/*----------------------------------------------------------------------------
 *      Semaphore creation & usage
 *---------------------------------------------------------------------------*/
 
osSemaphoreId_t sid_Semaphore;                  // semaphore id
 
osThreadId_t tid_Thread_Semaphore;              // thread id
 
void Thread_Semaphore (void *argument);         // thread function
 
int Init_Semaphore (void) {
 
  sid_Semaphore = osSemaphoreNew(1U, 1U, NULL);
  if (sid_Semaphore == NULL) {
    ; // Semaphore object not created, handle failure
  }
 
  tid_Thread_Semaphore = osThreadNew(Thread_Semaphore, NULL, NULL);
  if (tid_Thread_Semaphore == NULL) {
    return(-1);
  }
 
  return(0);
}
 
void Thread_Semaphore (void *argument) {
  int32_t val;
 
  for(int i=0; i<100;i++) {
		
		
    ; // Insert thread code here...	
		
    val = osSemaphoreAcquire(sid_Semaphore, osWaitForever);       // wait Forever
    switch (val) {
      case osOK:
			{
        int b=a;
				osThreadYield(); 
				b++;
				osThreadYield();                                    // suspend thread
				a=b;
				; // Use protected code here...
        osSemaphoreRelease(sid_Semaphore);              // return a token back to a semaphore
			}
        break;
      case osErrorResource:
				while(1);
        break;
      case osErrorParameter:
				while(1);
        break;
      default:
				while(1);
        break;
    }    
  }
}
