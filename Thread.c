#include "cmsis_os2.h"                          // CMSIS RTOS header file
#include "Board_LED.h"                  // Board Support:LED
 
/*----------------------------------------------------------------------------
 *      Thread 1 'Thread_Name': Sample thread
 *---------------------------------------------------------------------------*/
 
osThreadId_t tid_Thread;                        // thread id
 
void Thread (void *argument);                   // thread function
extern int Init_Timers (void);

int Init_Thread (void) {
 
  tid_Thread = osThreadNew(Thread, NULL, NULL);
  if (tid_Thread == NULL) {
    return(-1);
  }
 
  return(0);
}
 
void Thread (void *argument) {
	
	LED_Initialize(); 	
	Init_Timers();
	
  while (1) {
    ; // Insert thread code here...
    osThreadYield();                            // suspend thread
  }
}
