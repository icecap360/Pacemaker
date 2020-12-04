#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 0
#include "board.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE Freescale FRDM-K64F
#define MW_CONNECTIONINFO_SERIAL_BAUDRATE codertarget.freedomk64f.internal.uartActionCallback
#define MW_CONNECTIONINFO_SERIAL_COMPORT codertarget.freedomk64f.internal.getSerialPortName('-noThrow')
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION Serial
#define MW_EXTMODE_UART 0.000000
#define MW_EXTMODE_SERIALPORT 
#define MW_RTOS CMSIS-RTOS RTX
#define MW_RTOSBASERATETASKPRIORITY 40
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_CLOCKING_CPUCLOCKRATEMHZ 120
#define MW_DAC_REFVOLTAGE 0
#define MW_UART0_BAUDRATE 115200
#define MW_UART0_TX_PINSELECTION 0
#define MW_UART0_RX_PINSELECTION 0
#define MW_UART0_DATABITS 0
#define MW_UART0_PARITY 0
#define MW_UART0_STOPBIT 0
#define MW_UART1_BAUDRATE 115200
#define MW_UART1_TX_PINSELECTION 0
#define MW_UART1_RX_PINSELECTION 0
#define MW_UART1_DATABITS 0
#define MW_UART1_PARITY 0
#define MW_UART1_STOPBIT 0
#define MW_UART2_BAUDRATE 115200
#define MW_UART2_TX_PINSELECTION 0
#define MW_UART2_RX_PINSELECTION 0
#define MW_UART2_DATABITS 0
#define MW_UART2_PARITY 0
#define MW_UART2_STOPBIT 0
#define MW_UART3_BAUDRATE 115200
#define MW_UART3_TX_PINSELECTION 0
#define MW_UART3_RX_PINSELECTION 0
#define MW_UART3_DATABITS 0
#define MW_UART3_PARITY 0
#define MW_UART3_STOPBIT 0
#define MW_ETHERNET_HOSTNAME FRDM_K64F
#define MW_ETHERNET_MACADDR 00-CF-52-35-00-01
#define MW_ETHERNET_DHCPENABLED 1
#define MW_ETHERNET_LOCALIPADDRESS 192.168.1.102
#define MW_ETHERNET_SUBNETMASK 255.255.255.0
#define MW_ETHERNET_GATEWAY 192.168.1.1
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
