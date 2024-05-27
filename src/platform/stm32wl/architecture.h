#pragma once

#define ARCH_STM32WL

//
// defaults for STM32WL architecture
//

#ifndef HAS_RADIO
#define HAS_RADIO 1
#endif

//
// set HW_VENDOR
//

#ifndef HW_VENDOR
#define HW_VENDOR meshtastic_HardwareModel_PRIVATE_HW
#endif

/* virtual pins */
#define SX126X_CS 1000
#define SX126X_DIO1 1001
#define SX126X_RESET 1003
#define SX126X_BUSY 1004

/* #include "SEGGER_RTT.h"

#define SEGGER_STDOUT_CH 0

#define SEGGER_MSG(...) SEGGER_RTT_printf(SEGGER_STDOUT_CH, __VA_ARGS__) */