
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'apnt268' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "stm32f4xx.h"

/* ARM::CMSIS:RTOS2:Keil RTX5:Library:5.5.4 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
/* Keil.ARM Compiler::Compiler:Event Recorder:DAP:1.5.1 */
#define RTE_Compiler_EventRecorder
          #define RTE_Compiler_EventRecorder_DAP
/* Keil.ARM Compiler::Compiler:I/O:File:File System:1.2.0 */
#define RTE_Compiler_IO_File            /* Compiler I/O: File */
          #define RTE_Compiler_IO_File_FS         /* Compiler I/O: File (File System) */
/* Keil.MDK-Plus::File System:CORE:LFN Debug:6.15.3 */
#define RTE_FileSystem_Core             /* File System Core */
          #define RTE_FileSystem_LFN              /* File System with Long Filename support */
          #define RTE_FileSystem_Debug            /* File System Debug Version */
/* Keil.MDK-Plus::File System:Drive:USB:6.15.3 */
#define RTE_FileSystem_Drive_USB_0      /* File System USB Drive 0 */

/* Keil.MDK-Pro::USB:CORE:Release:6.16.1 */
#define RTE_USB_Core                    /* USB Core */
          #define RTE_USB_Core_Release            /* USB Core Release Version */
/* Keil.MDK-Pro::USB:Host:6.16.1 */
#define RTE_USB_Host_0                  /* USB Host 0 */

/* Keil.MDK-Pro::USB:Host:CDC:6.16.1 */
#define RTE_USB_Host_CDC                /* USB Host CDC */
/* Keil.MDK-Pro::USB:Host:Custom Class:6.16.1 */
#define RTE_USB_Host_CustomClass        /* USB Host Custom Class */
/* Keil.MDK-Pro::USB:Host:HID:6.16.1 */
#define RTE_USB_Host_HID                /* USB Host HID */
/* Keil.MDK-Pro::USB:Host:MSC:6.16.1 */
#define RTE_USB_Host_MSC                /* USB Host MSC */
/* Keil::CMSIS Driver:USB Host:High-speed:2.25 */
#define RTE_Drivers_USBH1               /* Driver USBH1 */
/* Keil::Device:STM32Cube Framework:Classic:1.8.1 */
#define RTE_DEVICE_FRAMEWORK_CLASSIC
/* Keil::Device:STM32Cube HAL:Common:1.8.1 */
#define RTE_DEVICE_HAL_COMMON
/* Keil::Device:STM32Cube HAL:Cortex:1.8.1 */
#define RTE_DEVICE_HAL_CORTEX
/* Keil::Device:STM32Cube HAL:GPIO:1.8.1 */
#define RTE_DEVICE_HAL_GPIO
/* Keil::Device:STM32Cube HAL:PWR:1.8.1 */
#define RTE_DEVICE_HAL_PWR
/* Keil::Device:STM32Cube HAL:RCC:1.8.1 */
#define RTE_DEVICE_HAL_RCC
/* Keil::Device:Startup:2.6.3 */
#define RTE_DEVICE_STARTUP_STM32F4XX    /* Device Startup for STM32F4 */


#endif /* RTE_COMPONENTS_H */