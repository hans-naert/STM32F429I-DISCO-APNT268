
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'aspnt268' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "stm32f4xx.h"

/* ARM::CMSIS-Compiler:STDIN:Custom@1.0.0 */
#define RTE_CMSIS_Compiler_STDIN                 /* CMSIS-Compiler STDIN */
        #define RTE_CMSIS_Compiler_STDIN_Custom          /* CMSIS-Compiler STDIN: Custom */
/* ARM::CMSIS-Compiler:STDOUT:Custom@1.0.0 */
#define RTE_CMSIS_Compiler_STDOUT                /* CMSIS-Compiler STDOUT */
        #define RTE_CMSIS_Compiler_STDOUT_Custom         /* CMSIS-Compiler STDOUT: Custom */
/* ARM::CMSIS-View:Event Recorder&DAP@1.5.3 */
#define RTE_CMSIS_View_EventRecorder
        #define RTE_CMSIS_View_EventRecorder_DAP
/* ARM::CMSIS:RTOS2:Keil RTX5&Source@5.8.0 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* Keil::CMSIS Driver:I2C@2.12 */
#define RTE_Drivers_I2C1                /* Driver I2C1 */
        #define RTE_Drivers_I2C2                /* Driver I2C2 */
        #define RTE_Drivers_I2C3                /* Driver I2C3 */
/* Keil::CMSIS Driver:SPI@2.18 */
#define RTE_Drivers_SPI1                /* Driver SPI1 */
        #define RTE_Drivers_SPI2                /* Driver SPI2 */
        #define RTE_Drivers_SPI3                /* Driver SPI3 */
        #define RTE_Drivers_SPI4                /* Driver SPI4 */
        #define RTE_Drivers_SPI5                /* Driver SPI5 */
        #define RTE_Drivers_SPI6                /* Driver SPI6 */
/* Keil::CMSIS Driver:USART@2.16 */
#define RTE_Drivers_USART1              /* Driver USART1 */
        #define RTE_Drivers_USART2              /* Driver USART2 */
        #define RTE_Drivers_USART3              /* Driver USART3 */
        #define RTE_Drivers_USART4              /* Driver USART4 */
        #define RTE_Drivers_USART5              /* Driver USART5 */
        #define RTE_Drivers_USART6              /* Driver USART6 */
        #define RTE_Drivers_USART7              /* Driver USART7 */
        #define RTE_Drivers_USART8              /* Driver USART8 */
        #define RTE_Drivers_USART9              /* Driver USART9 */
        #define RTE_Drivers_USART10             /* Driver USART10 */
/* Keil::CMSIS Driver:USB Host:High-speed@2.25 */
#define RTE_Drivers_USBH1               /* Driver USBH1 */
/* Keil::CMSIS-Compiler:File Interface:MDK-MW File System@1.0.0 */
#define RTE_CMSIS_Compiler_File_Interface        /* CMSIS-Compiler File Interface */
        #define RTE_CMSIS_Compiler_File_Interface_MDK_MW /* CMSIS-Compiler File Interface: MDK-Middleware File System */
/* Keil::Device:STM32Cube Framework:Classic@1.8.1 */
#define RTE_DEVICE_FRAMEWORK_CLASSIC
/* Keil::Device:STM32Cube HAL:Common@1.8.1 */
#define RTE_DEVICE_HAL_COMMON
/* Keil::Device:STM32Cube HAL:Cortex@1.8.1 */
#define RTE_DEVICE_HAL_CORTEX
/* Keil::Device:STM32Cube HAL:DMA2D@1.8.1 */
#define RTE_DEVICE_HAL_DMA2D
/* Keil::Device:STM32Cube HAL:DMA@1.8.1 */
#define RTE_DEVICE_HAL_DMA
/* Keil::Device:STM32Cube HAL:GPIO@1.8.1 */
#define RTE_DEVICE_HAL_GPIO
/* Keil::Device:STM32Cube HAL:I2C@1.8.1 */
#define RTE_DEVICE_HAL_I2C
/* Keil::Device:STM32Cube HAL:LTDC@1.8.1 */
#define RTE_DEVICE_HAL_LTDC
/* Keil::Device:STM32Cube HAL:PWR@1.8.1 */
#define RTE_DEVICE_HAL_PWR
/* Keil::Device:STM32Cube HAL:RCC@1.8.1 */
#define RTE_DEVICE_HAL_RCC
/* Keil::Device:STM32Cube HAL:SDRAM@1.8.1 */
#define RTE_DEVICE_HAL_SDRAM
/* Keil::Device:STM32Cube HAL:SPI@1.8.1 */
#define RTE_DEVICE_HAL_SPI
/* Keil::Device:STM32Cube HAL:UART@1.8.1 */
#define RTE_DEVICE_HAL_UART
/* Keil::Device:STM32Cube HAL:USART@1.8.1 */
#define RTE_DEVICE_HAL_USART
/* Keil::Device:Startup@2.6.3 */
#define RTE_DEVICE_STARTUP_STM32F4XX    /* Device Startup for STM32F4 */
/* Keil::File System&MDK-Pro:CORE&LFN@6.16.6 */
#define RTE_FileSystem_Core             /* File System Core */
          #define RTE_FileSystem_LFN              /* File System with Long Filename support */
          #define RTE_FileSystem_Release          /* File System Release Version */
/* Keil::File System&MDK-Pro:Drive:USB@6.16.6 */
#define RTE_FileSystem_Drive_USB_0      /* File System USB Drive 0 */

/* Keil::USB&MDK-Pro:CORE&Release@6.17.0 */
#define RTE_USB_Core                    /* USB Core */
          #define RTE_USB_Core_Release            /* USB Core Release Version */
/* Keil::USB&MDK-Pro:Host:MSC@6.17.0 */
#define RTE_USB_Host_MSC                /* USB Host MSC */
/* Keil::USB&MDK-Pro:Host@6.17.0 */
#define RTE_USB_Host_0                  /* USB Host 0 */

/* Segger::Graphics&MDK-Pro:CORE@6.32.3 */
#define RTE_Graphics_Core               /* Graphics Core */
/* Segger::Graphics&MDK-Pro:Input Device:Touchscreen@6.32.3 */
#define RTE_Graphics_Touchscreen        /* Graphics Input Device Touchscreen */


#endif /* RTE_COMPONENTS_H */
