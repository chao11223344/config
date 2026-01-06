/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        CROSSRACE_PRO
#define MANUFACTURER_ID   RALI

#define USE_GYRO
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_ACCGYRO_BMI270
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25N01G
#define USE_MAX7456

#define BEEPER_PIN           PA15

#define MOTOR1_PIN           PE9
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE14
#define MOTOR5_PIN           PD12
#define MOTOR6_PIN           PD13
#define MOTOR7_PIN           PD14
#define MOTOR8_PIN           PD15
#define MOTOR9_PIN           PC6
#define MOTOR10_PIN          PC7
#define MOTOR11_PIN          PC8
#define MOTOR12_PIN          PC9

//UART2 for TELEM2 
//UART3 for TELEM1
//UART5 for 电调回传
//UART4 fot GPS
//UART7 for 数字图传
#define UART2_TX_PIN         PD5
#define UART3_TX_PIN         PD8
#define UART4_TX_PIN         PA0
#define UART7_TX_PIN         PB4
#define UART2_RX_PIN         PD6
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PA1
#define UART5_RX_PIN         PB5
#define UART7_RX_PIN         PB3

#define I2C1_SCL_PIN         PB8
#define I2C2_SCL_PIN         PB10
#define I2C1_SDA_PIN         PB9
#define I2C2_SDA_PIN         PB11

#define LED0_PIN             PE12
#define LED1_PIN             PC5

#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI1_SDI_PIN         PA6
#define SPI2_SDI_PIN         PB14
#define SPI1_SDO_PIN         PA7
#define SPI2_SDO_PIN         PB15

#define ESCSERIAL_PIN        PB5

#define ADC_VBAT_PIN         PA2
#define ADC_RSSI_PIN         PC1
#define ADC_CURR_PIN         PA3

#define PINIO1_PIN           PA8

#define FLASH_CS_PIN         PC2
#define MAX7456_SPI_CS_PIN   PD10
#define GYRO_1_EXTI_PIN      PC14
#define GYRO_1_CS_PIN        PC15

#define MOTOR1_PIN           PE9
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE14
#define MOTOR5_PIN           PD12
#define MOTOR6_PIN           PD13
#define MOTOR7_PIN           PD14
#define MOTOR8_PIN           PD15
#define MOTOR9_PIN           PC6
#define MOTOR10_PIN          PC7
#define MOTOR11_PIN          PC8
#define MOTOR12_PIN          PC9

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PE9 , 1,  0) \
    TIMER_PIN_MAP( 1, PE11 , 1,  1) \
    TIMER_PIN_MAP( 2, PE13 , 1,  2) \
    TIMER_PIN_MAP( 3, PE14 , 1,  3) \
    TIMER_PIN_MAP( 4, PD12 , 1,  4) \
    TIMER_PIN_MAP( 5, PD13 , 1,  5) \
    TIMER_PIN_MAP( 6, PD14 , 1,  6) \
    TIMER_PIN_MAP( 7, PD15 , 1,  7) \
    TIMER_PIN_MAP( 8, PC6, 1,  8) \
    TIMER_PIN_MAP( 9, PC7, 1, 9) \
    TIMER_PIN_MAP(10, PC8, 1, 10) \
    TIMER_PIN_MAP(11, PC9 , 1,  11) 

#define MAG_I2C_INSTANCE (I2CDEV_2)
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE 500
#define BEEPER_INVERTED
#define MAX7456_SPI_INSTANCE SPI2
#define PINIO1_CONFIG 129
#define PINIO1_BOX 39
#define FLASH_SPI_INSTANCE SPI2
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_1_ALIGN_YAW 900
