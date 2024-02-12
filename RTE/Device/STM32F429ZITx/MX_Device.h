/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 12/02/2024 19:57:33
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     168000000
#define MX_SYSCLKFreq_VALUE                     168000000
#define MX_HCLKFreq_Value                       168000000
#define MX_FCLKCortexFreq_Value                 168000000
#define MX_CortexFreq_Value                     168000000
#define MX_AHBFreq_Value                        168000000
#define MX_APB1Freq_Value                       42000000
#define MX_APB2Freq_Value                       84000000
#define MX_APB1TimFreq_Value                    84000000
#define MX_APB2TimFreq_Value                    168000000
#define MX_48MHZClocksFreq_Value                48000000
#define MX_EthernetFreq_Value                   168000000
#define MX_LCDTFTFreq_Value                     6000000
#define MX_I2SClocksFreq_Value                  96000000
#define MX_SAI_AClocksFreq_Value                48000000
#define MX_SAI_BClocksFreq_Value                48000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    168000000

/*-------------------------------- DMA2D      --------------------------------*/

#define MX_DMA2D                                1

/* GPIO Configuration */

/*-------------------------------- FMC        --------------------------------*/

#define MX_FMC                                  1

/* GPIO Configuration */

/* Pin PE11 */
#define MX_FMC_D8_DA8_Pin                       PE11
#define MX_FMC_D8_DA8_GPIOx                     GPIOE
#define MX_FMC_D8_DA8_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D8_DA8_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D8_DA8_GPIO_Pin                  GPIO_PIN_11
#define MX_FMC_D8_DA8_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D8_DA8_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PB5 */
#define MX_FMC_SDCKE1_Pin                       PB5
#define MX_FMC_SDCKE1_GPIOx                     GPIOB
#define MX_FMC_SDCKE1_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_SDCKE1_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDCKE1_GPIO_Pin                  GPIO_PIN_5
#define MX_FMC_SDCKE1_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_SDCKE1_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PF0 */
#define MX_FMC_A0_Pin                           PF0
#define MX_FMC_A0_GPIOx                         GPIOF
#define MX_FMC_A0_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A0_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A0_GPIO_Pin                      GPIO_PIN_0
#define MX_FMC_A0_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A0_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PF1 */
#define MX_FMC_A1_Pin                           PF1
#define MX_FMC_A1_GPIOx                         GPIOF
#define MX_FMC_A1_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A1_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A1_GPIO_Pin                      GPIO_PIN_1
#define MX_FMC_A1_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A1_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PF2 */
#define MX_FMC_A2_Pin                           PF2
#define MX_FMC_A2_GPIOx                         GPIOF
#define MX_FMC_A2_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A2_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A2_GPIO_Pin                      GPIO_PIN_2
#define MX_FMC_A2_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A2_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PF11 */
#define MX_FMC_SDNRAS_Pin                       PF11
#define MX_FMC_SDNRAS_GPIOx                     GPIOF
#define MX_FMC_SDNRAS_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_SDNRAS_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDNRAS_GPIO_Pin                  GPIO_PIN_11
#define MX_FMC_SDNRAS_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_SDNRAS_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PD1 */
#define MX_FMC_D3_DA3_Pin                       PD1
#define MX_FMC_D3_DA3_GPIOx                     GPIOD
#define MX_FMC_D3_DA3_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D3_DA3_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D3_DA3_GPIO_Pin                  GPIO_PIN_1
#define MX_FMC_D3_DA3_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D3_DA3_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PF3 */
#define MX_FMC_A3_Pin                           PF3
#define MX_FMC_A3_GPIOx                         GPIOF
#define MX_FMC_A3_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A3_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A3_GPIO_Pin                      GPIO_PIN_3
#define MX_FMC_A3_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A3_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PF4 */
#define MX_FMC_A4_Pin                           PF4
#define MX_FMC_A4_GPIOx                         GPIOF
#define MX_FMC_A4_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A4_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A4_GPIO_Pin                      GPIO_PIN_4
#define MX_FMC_A4_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A4_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PB6 */
#define MX_FMC_SDNE1_Pin                        PB6
#define MX_FMC_SDNE1_GPIOx                      GPIOB
#define MX_FMC_SDNE1_GPIO_PuPd                  GPIO_NOPULL
#define MX_FMC_SDNE1_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDNE1_GPIO_Pin                   GPIO_PIN_6
#define MX_FMC_SDNE1_GPIO_AF                    GPIO_AF12_FMC
#define MX_FMC_SDNE1_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PF5 */
#define MX_FMC_A5_Pin                           PF5
#define MX_FMC_A5_GPIOx                         GPIOF
#define MX_FMC_A5_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A5_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A5_GPIO_Pin                      GPIO_PIN_5
#define MX_FMC_A5_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A5_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PC0 */
#define MX_FMC_SDNWE_Pin                        PC0
#define MX_FMC_SDNWE_GPIOx                      GPIOC
#define MX_FMC_SDNWE_GPIO_PuPd                  GPIO_NOPULL
#define MX_FMC_SDNWE_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDNWE_GPIO_Pin                   GPIO_PIN_0
#define MX_FMC_SDNWE_GPIO_AF                    GPIO_AF12_FMC
#define MX_FMC_SDNWE_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PF12 */
#define MX_FMC_A6_Pin                           PF12
#define MX_FMC_A6_GPIOx                         GPIOF
#define MX_FMC_A6_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A6_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A6_GPIO_Pin                      GPIO_PIN_12
#define MX_FMC_A6_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A6_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PG0 */
#define MX_FMC_A10_Pin                          PG0
#define MX_FMC_A10_GPIOx                        GPIOG
#define MX_FMC_A10_GPIO_PuPd                    GPIO_NOPULL
#define MX_FMC_A10_GPIO_Speed_High_Default      GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A10_GPIO_Pin                     GPIO_PIN_0
#define MX_FMC_A10_GPIO_AF                      GPIO_AF12_FMC
#define MX_FMC_A10_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PF13 */
#define MX_FMC_A7_Pin                           PF13
#define MX_FMC_A7_GPIOx                         GPIOF
#define MX_FMC_A7_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A7_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A7_GPIO_Pin                      GPIO_PIN_13
#define MX_FMC_A7_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A7_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PD9 */
#define MX_FMC_D14_DA14_Pin                     PD9
#define MX_FMC_D14_DA14_GPIOx                   GPIOD
#define MX_FMC_D14_DA14_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D14_DA14_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D14_DA14_GPIO_Pin                GPIO_PIN_9
#define MX_FMC_D14_DA14_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D14_DA14_GPIO_Mode               GPIO_MODE_AF_PP

/* Pin PF14 */
#define MX_FMC_A8_Pin                           PF14
#define MX_FMC_A8_GPIOx                         GPIOF
#define MX_FMC_A8_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A8_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A8_GPIO_Pin                      GPIO_PIN_14
#define MX_FMC_A8_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A8_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PF15 */
#define MX_FMC_A9_Pin                           PF15
#define MX_FMC_A9_GPIOx                         GPIOF
#define MX_FMC_A9_GPIO_PuPd                     GPIO_NOPULL
#define MX_FMC_A9_GPIO_Speed_High_Default       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A9_GPIO_Pin                      GPIO_PIN_15
#define MX_FMC_A9_GPIO_AF                       GPIO_AF12_FMC
#define MX_FMC_A9_GPIO_Mode                     GPIO_MODE_AF_PP

/* Pin PG1 */
#define MX_FMC_A11_Pin                          PG1
#define MX_FMC_A11_GPIOx                        GPIOG
#define MX_FMC_A11_GPIO_PuPd                    GPIO_NOPULL
#define MX_FMC_A11_GPIO_Speed_High_Default      GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A11_GPIO_Pin                     GPIO_PIN_1
#define MX_FMC_A11_GPIO_AF                      GPIO_AF12_FMC
#define MX_FMC_A11_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PE14 */
#define MX_FMC_D11_DA11_Pin                     PE14
#define MX_FMC_D11_DA11_GPIOx                   GPIOE
#define MX_FMC_D11_DA11_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D11_DA11_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D11_DA11_GPIO_Pin                GPIO_PIN_14
#define MX_FMC_D11_DA11_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D11_DA11_GPIO_Mode               GPIO_MODE_AF_PP

/* Pin PE7 */
#define MX_FMC_D4_DA4_Pin                       PE7
#define MX_FMC_D4_DA4_GPIOx                     GPIOE
#define MX_FMC_D4_DA4_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D4_DA4_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D4_DA4_GPIO_Pin                  GPIO_PIN_7
#define MX_FMC_D4_DA4_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D4_DA4_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PE10 */
#define MX_FMC_D7_DA7_Pin                       PE10
#define MX_FMC_D7_DA7_GPIOx                     GPIOE
#define MX_FMC_D7_DA7_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D7_DA7_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D7_DA7_GPIO_Pin                  GPIO_PIN_10
#define MX_FMC_D7_DA7_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D7_DA7_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PG5 */
#define MX_FMC_A15_BA1_Pin                      PG5
#define MX_FMC_A15_BA1_GPIOx                    GPIOG
#define MX_FMC_A15_BA1_GPIO_PuPd                GPIO_NOPULL
#define MX_FMC_A15_BA1_GPIO_Speed_High_Default  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A15_BA1_GPIO_Pin                 GPIO_PIN_5
#define MX_FMC_A15_BA1_GPIO_AF                  GPIO_AF12_FMC
#define MX_FMC_A15_BA1_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PE1 */
#define MX_FMC_NBL1_Pin                         PE1
#define MX_FMC_NBL1_GPIOx                       GPIOE
#define MX_FMC_NBL1_GPIO_PuPd                   GPIO_NOPULL
#define MX_FMC_NBL1_GPIO_Speed_High_Default     GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_NBL1_GPIO_Pin                    GPIO_PIN_1
#define MX_FMC_NBL1_GPIO_AF                     GPIO_AF12_FMC
#define MX_FMC_NBL1_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PE0 */
#define MX_FMC_NBL0_Pin                         PE0
#define MX_FMC_NBL0_GPIOx                       GPIOE
#define MX_FMC_NBL0_GPIO_PuPd                   GPIO_NOPULL
#define MX_FMC_NBL0_GPIO_Speed_High_Default     GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_NBL0_GPIO_Pin                    GPIO_PIN_0
#define MX_FMC_NBL0_GPIO_AF                     GPIO_AF12_FMC
#define MX_FMC_NBL0_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PD14 */
#define MX_FMC_D0_DA0_Pin                       PD14
#define MX_FMC_D0_DA0_GPIOx                     GPIOD
#define MX_FMC_D0_DA0_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D0_DA0_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D0_DA0_GPIO_Pin                  GPIO_PIN_14
#define MX_FMC_D0_DA0_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D0_DA0_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PE8 */
#define MX_FMC_D5_DA5_Pin                       PE8
#define MX_FMC_D5_DA5_GPIOx                     GPIOE
#define MX_FMC_D5_DA5_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D5_DA5_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D5_DA5_GPIO_Pin                  GPIO_PIN_8
#define MX_FMC_D5_DA5_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D5_DA5_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PE13 */
#define MX_FMC_D10_DA10_Pin                     PE13
#define MX_FMC_D10_DA10_GPIOx                   GPIOE
#define MX_FMC_D10_DA10_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D10_DA10_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D10_DA10_GPIO_Pin                GPIO_PIN_13
#define MX_FMC_D10_DA10_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D10_DA10_GPIO_Mode               GPIO_MODE_AF_PP

/* Pin PD8 */
#define MX_FMC_D13_DA13_Pin                     PD8
#define MX_FMC_D13_DA13_GPIOx                   GPIOD
#define MX_FMC_D13_DA13_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D13_DA13_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D13_DA13_GPIO_Pin                GPIO_PIN_8
#define MX_FMC_D13_DA13_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D13_DA13_GPIO_Mode               GPIO_MODE_AF_PP

/* Pin PG4 */
#define MX_FMC_A14_BA0_Pin                      PG4
#define MX_FMC_A14_BA0_GPIOx                    GPIOG
#define MX_FMC_A14_BA0_GPIO_PuPd                GPIO_NOPULL
#define MX_FMC_A14_BA0_GPIO_Speed_High_Default  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_A14_BA0_GPIO_Pin                 GPIO_PIN_4
#define MX_FMC_A14_BA0_GPIO_AF                  GPIO_AF12_FMC
#define MX_FMC_A14_BA0_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PG8 */
#define MX_FMC_SDCLK_Pin                        PG8
#define MX_FMC_SDCLK_GPIOx                      GPIOG
#define MX_FMC_SDCLK_GPIO_PuPd                  GPIO_NOPULL
#define MX_FMC_SDCLK_GPIO_Speed_High_Default    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDCLK_GPIO_Pin                   GPIO_PIN_8
#define MX_FMC_SDCLK_GPIO_AF                    GPIO_AF12_FMC
#define MX_FMC_SDCLK_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PE15 */
#define MX_FMC_D12_DA12_Pin                     PE15
#define MX_FMC_D12_DA12_GPIOx                   GPIOE
#define MX_FMC_D12_DA12_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D12_DA12_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D12_DA12_GPIO_Pin                GPIO_PIN_15
#define MX_FMC_D12_DA12_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D12_DA12_GPIO_Mode               GPIO_MODE_AF_PP

/* Pin PD15 */
#define MX_FMC_D1_DA1_Pin                       PD15
#define MX_FMC_D1_DA1_GPIOx                     GPIOD
#define MX_FMC_D1_DA1_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D1_DA1_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D1_DA1_GPIO_Pin                  GPIO_PIN_15
#define MX_FMC_D1_DA1_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D1_DA1_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PG15 */
#define MX_FMC_SDNCAS_Pin                       PG15
#define MX_FMC_SDNCAS_GPIOx                     GPIOG
#define MX_FMC_SDNCAS_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_SDNCAS_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_SDNCAS_GPIO_Pin                  GPIO_PIN_15
#define MX_FMC_SDNCAS_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_SDNCAS_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PE12 */
#define MX_FMC_D9_DA9_Pin                       PE12
#define MX_FMC_D9_DA9_GPIOx                     GPIOE
#define MX_FMC_D9_DA9_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D9_DA9_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D9_DA9_GPIO_Pin                  GPIO_PIN_12
#define MX_FMC_D9_DA9_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D9_DA9_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PE9 */
#define MX_FMC_D6_DA6_Pin                       PE9
#define MX_FMC_D6_DA6_GPIOx                     GPIOE
#define MX_FMC_D6_DA6_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D6_DA6_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D6_DA6_GPIO_Pin                  GPIO_PIN_9
#define MX_FMC_D6_DA6_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D6_DA6_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PD0 */
#define MX_FMC_D2_DA2_Pin                       PD0
#define MX_FMC_D2_DA2_GPIOx                     GPIOD
#define MX_FMC_D2_DA2_GPIO_PuPd                 GPIO_NOPULL
#define MX_FMC_D2_DA2_GPIO_Speed_High_Default   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D2_DA2_GPIO_Pin                  GPIO_PIN_0
#define MX_FMC_D2_DA2_GPIO_AF                   GPIO_AF12_FMC
#define MX_FMC_D2_DA2_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PD10 */
#define MX_FMC_D15_DA15_Pin                     PD10
#define MX_FMC_D15_DA15_GPIOx                   GPIOD
#define MX_FMC_D15_DA15_GPIO_PuPd               GPIO_NOPULL
#define MX_FMC_D15_DA15_GPIO_Speed_High_Default GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FMC_D15_DA15_GPIO_Pin                GPIO_PIN_10
#define MX_FMC_D15_DA15_GPIO_AF                 GPIO_AF12_FMC
#define MX_FMC_D15_DA15_GPIO_Mode               GPIO_MODE_AF_PP

/*-------------------------------- I2C3       --------------------------------*/

#define MX_I2C3                                 1

/* GPIO Configuration */

/* Pin PC9 */
#define MX_I2C3_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C3_SDA_Pin                         PC9
#define MX_I2C3_SDA_GPIOx                       GPIOC
#define MX_I2C3_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C3_SDA_GPIO_AF                     GPIO_AF4_I2C3
#define MX_I2C3_SDA_GPIO_Pu                     GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PA8 */
#define MX_I2C3_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C3_SCL_Pin                         PA8
#define MX_I2C3_SCL_GPIOx                       GPIOA
#define MX_I2C3_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C3_SCL_GPIO_AF                     GPIO_AF4_I2C3
#define MX_I2C3_SCL_GPIO_Pu                     GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* NVIC Configuration */

/* NVIC I2C3_EV_IRQn */
#define MX_I2C3_EV_IRQn_interruptPremptionPriority 0
#define MX_I2C3_EV_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_4
#define MX_I2C3_EV_IRQn_Subriority              0

/* NVIC I2C3_ER_IRQn */
#define MX_I2C3_ER_IRQn_interruptPremptionPriority 0
#define MX_I2C3_ER_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_4
#define MX_I2C3_ER_IRQn_Subriority              0

/*-------------------------------- LTDC       --------------------------------*/

#define MX_LTDC                                 1

/* GPIO Configuration */

/* Pin PG7 */
#define MX_LTDC_CLK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_LTDC_CLK_Pin                         PG7
#define MX_LTDC_CLK_GPIOx                       GPIOG
#define MX_LTDC_CLK_GPIO_PuPd                   GPIO_NOPULL
#define MX_LTDC_CLK_GPIO_Pin                    GPIO_PIN_7
#define MX_LTDC_CLK_GPIO_AF                     GPIO_AF14_LTDC
#define MX_LTDC_CLK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB8 */
#define MX_LTDC_B6_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_B6_Pin                          PB8
#define MX_LTDC_B6_GPIOx                        GPIOB
#define MX_LTDC_B6_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_B6_GPIO_Pin                     GPIO_PIN_8
#define MX_LTDC_B6_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_B6_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB9 */
#define MX_LTDC_B7_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_B7_Pin                          PB9
#define MX_LTDC_B7_GPIOx                        GPIOB
#define MX_LTDC_B7_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_B7_GPIO_Pin                     GPIO_PIN_9
#define MX_LTDC_B7_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_B7_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PG12 */
#define MX_LTDC_B4_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_B4_Pin                          PG12
#define MX_LTDC_B4_GPIOx                        GPIOG
#define MX_LTDC_B4_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_B4_GPIO_Pin                     GPIO_PIN_12
#define MX_LTDC_B4_GPIO_AF                      GPIO_AF9_LTDC
#define MX_LTDC_B4_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PA3 */
#define MX_LTDC_B5_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_B5_Pin                          PA3
#define MX_LTDC_B5_GPIOx                        GPIOA
#define MX_LTDC_B5_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_B5_GPIO_Pin                     GPIO_PIN_3
#define MX_LTDC_B5_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_B5_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PC6 */
#define MX_LTDC_HSYNC_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_LTDC_HSYNC_Pin                       PC6
#define MX_LTDC_HSYNC_GPIOx                     GPIOC
#define MX_LTDC_HSYNC_GPIO_PuPd                 GPIO_NOPULL
#define MX_LTDC_HSYNC_GPIO_Pin                  GPIO_PIN_6
#define MX_LTDC_HSYNC_GPIO_AF                   GPIO_AF14_LTDC
#define MX_LTDC_HSYNC_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PD3 */
#define MX_LTDC_G7_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G7_Pin                          PD3
#define MX_LTDC_G7_GPIOx                        GPIOD
#define MX_LTDC_G7_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G7_GPIO_Pin                     GPIO_PIN_3
#define MX_LTDC_G7_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_G7_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PG11 */
#define MX_LTDC_B3_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_B3_Pin                          PG11
#define MX_LTDC_B3_GPIOx                        GPIOG
#define MX_LTDC_B3_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_B3_GPIO_Pin                     GPIO_PIN_11
#define MX_LTDC_B3_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_B3_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB11 */
#define MX_LTDC_G5_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G5_Pin                          PB11
#define MX_LTDC_G5_GPIOx                        GPIOB
#define MX_LTDC_G5_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G5_GPIO_Pin                     GPIO_PIN_11
#define MX_LTDC_G5_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_G5_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PC7 */
#define MX_LTDC_G6_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G6_Pin                          PC7
#define MX_LTDC_G6_GPIOx                        GPIOC
#define MX_LTDC_G6_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G6_GPIO_Pin                     GPIO_PIN_7
#define MX_LTDC_G6_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_G6_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PG10 */
#define MX_LTDC_G3_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G3_Pin                          PG10
#define MX_LTDC_G3_GPIOx                        GPIOG
#define MX_LTDC_G3_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G3_GPIO_Pin                     GPIO_PIN_10
#define MX_LTDC_G3_GPIO_AF                      GPIO_AF9_LTDC
#define MX_LTDC_G3_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PA4 */
#define MX_LTDC_VSYNC_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_LTDC_VSYNC_Pin                       PA4
#define MX_LTDC_VSYNC_GPIOx                     GPIOA
#define MX_LTDC_VSYNC_GPIO_PuPd                 GPIO_NOPULL
#define MX_LTDC_VSYNC_GPIO_Pin                  GPIO_PIN_4
#define MX_LTDC_VSYNC_GPIO_AF                   GPIO_AF14_LTDC
#define MX_LTDC_VSYNC_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PB10 */
#define MX_LTDC_G4_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G4_Pin                          PB10
#define MX_LTDC_G4_GPIOx                        GPIOB
#define MX_LTDC_G4_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G4_GPIO_Pin                     GPIO_PIN_10
#define MX_LTDC_G4_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_G4_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PA6 */
#define MX_LTDC_G2_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_G2_Pin                          PA6
#define MX_LTDC_G2_GPIOx                        GPIOA
#define MX_LTDC_G2_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_G2_GPIO_Pin                     GPIO_PIN_6
#define MX_LTDC_G2_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_G2_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB1 */
#define MX_LTDC_R6_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_R6_Pin                          PB1
#define MX_LTDC_R6_GPIOx                        GPIOB
#define MX_LTDC_R6_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_R6_GPIO_Pin                     GPIO_PIN_1
#define MX_LTDC_R6_GPIO_AF                      GPIO_AF9_LTDC
#define MX_LTDC_R6_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PG6 */
#define MX_LTDC_R7_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_R7_Pin                          PG6
#define MX_LTDC_R7_GPIOx                        GPIOG
#define MX_LTDC_R7_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_R7_GPIO_Pin                     GPIO_PIN_6
#define MX_LTDC_R7_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_R7_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PA11 */
#define MX_LTDC_R4_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_R4_Pin                          PA11
#define MX_LTDC_R4_GPIOx                        GPIOA
#define MX_LTDC_R4_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_R4_GPIO_Pin                     GPIO_PIN_11
#define MX_LTDC_R4_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_R4_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PA12 */
#define MX_LTDC_R5_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_R5_Pin                          PA12
#define MX_LTDC_R5_GPIOx                        GPIOA
#define MX_LTDC_R5_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_R5_GPIO_Pin                     GPIO_PIN_12
#define MX_LTDC_R5_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_R5_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PF10 */
#define MX_LTDC_DE_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_DE_Pin                          PF10
#define MX_LTDC_DE_GPIOx                        GPIOF
#define MX_LTDC_DE_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_DE_GPIO_Pin                     GPIO_PIN_10
#define MX_LTDC_DE_GPIO_AF                      GPIO_AF14_LTDC
#define MX_LTDC_DE_GPIO_Mode                    GPIO_MODE_AF_PP

/* Pin PB0 */
#define MX_LTDC_R3_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_LTDC_R3_Pin                          PB0
#define MX_LTDC_R3_GPIOx                        GPIOB
#define MX_LTDC_R3_GPIO_PuPd                    GPIO_NOPULL
#define MX_LTDC_R3_GPIO_Pin                     GPIO_PIN_0
#define MX_LTDC_R3_GPIO_AF                      GPIO_AF9_LTDC
#define MX_LTDC_R3_GPIO_Mode                    GPIO_MODE_AF_PP

/*-------------------------------- SPI5       --------------------------------*/

#define MX_SPI5                                 1

/* GPIO Configuration */

/* Pin PF7 */
#define MX_SPI5_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_SCK_Pin                         PF7
#define MX_SPI5_SCK_GPIOx                       GPIOF
#define MX_SPI5_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI5_SCK_GPIO_Pin                    GPIO_PIN_7
#define MX_SPI5_SCK_GPIO_AF                     GPIO_AF5_SPI5
#define MX_SPI5_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PF8 */
#define MX_SPI5_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_MISO_Pin                        PF8
#define MX_SPI5_MISO_GPIOx                      GPIOF
#define MX_SPI5_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MISO_GPIO_Pin                   GPIO_PIN_8
#define MX_SPI5_MISO_GPIO_AF                    GPIO_AF5_SPI5
#define MX_SPI5_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PF9 */
#define MX_SPI5_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI5_MOSI_Pin                        PF9
#define MX_SPI5_MOSI_GPIOx                      GPIOF
#define MX_SPI5_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI5_MOSI_GPIO_Pin                   GPIO_PIN_9
#define MX_SPI5_MOSI_GPIO_AF                    GPIO_AF5_SPI5
#define MX_SPI5_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- USB_OTG_HS --------------------------------*/

#define MX_USB_OTG_HS                           1

#define MX_USB_OTG_HS_HOST                      1

/* GPIO Configuration */

/* Pin PB14 */
#define MX_USB_OTG_HS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_DM_Pin                    PB14
#define MX_USB_OTG_HS_DM_GPIOx                  GPIOB
#define MX_USB_OTG_HS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DM_GPIO_Pin               GPIO_PIN_14
#define MX_USB_OTG_HS_DM_GPIO_AF                GPIO_AF12_OTG_HS_FS
#define MX_USB_OTG_HS_DM_GPIO_Mode              GPIO_MODE_AF_PP

/* Pin PB15 */
#define MX_USB_OTG_HS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_DP_Pin                    PB15
#define MX_USB_OTG_HS_DP_GPIOx                  GPIOB
#define MX_USB_OTG_HS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DP_GPIO_Pin               GPIO_PIN_15
#define MX_USB_OTG_HS_DP_GPIO_AF                GPIO_AF12_OTG_HS_FS
#define MX_USB_OTG_HS_DP_GPIO_Mode              GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC OTG_HS_EP1_IN_IRQn */
#define MX_OTG_HS_EP1_IN_IRQn_interruptPremptionPriority 0
#define MX_OTG_HS_EP1_IN_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_OTG_HS_EP1_IN_IRQn_Subriority        0

/* NVIC OTG_HS_EP1_OUT_IRQn */
#define MX_OTG_HS_EP1_OUT_IRQn_interruptPremptionPriority 0
#define MX_OTG_HS_EP1_OUT_IRQn_PriorityGroup    NVIC_PRIORITYGROUP_4
#define MX_OTG_HS_EP1_OUT_IRQn_Subriority       0

/* NVIC OTG_HS_IRQn */
#define MX_OTG_HS_IRQn_interruptPremptionPriority 0
#define MX_OTG_HS_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_OTG_HS_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PC4 */
#define MX_PC4_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC4_Pin                              PC4
#define MX_PC4_GPIOx                            GPIOC
#define MX_PC4_PinState                         GPIO_PIN_RESET
#define MX_PC4_GPIO_PuPd                        GPIO_NOPULL
#define MX_USB_OTG_HS_VBUS_Power                PC4
#define MX_PC4_GPIO_Pin                         GPIO_PIN_4
#define MX_PC4_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC5 */
#define MX_PC5_Pin                              PC5
#define MX_PC5_GPIOx                            GPIOC
#define MX_PC5_GPIO_PuPd                        GPIO_NOPULL
#define MX_USB_OTG_HS_Overcurrent               PC5
#define MX_PC5_GPIO_Pin                         GPIO_PIN_5
#define MX_PC5_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */

