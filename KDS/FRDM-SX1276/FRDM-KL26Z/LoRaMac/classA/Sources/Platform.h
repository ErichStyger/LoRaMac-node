/*
 * Platform.h
 *
 *  Created on: 23.06.2014
 *      Author: tastyger
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#define USE_BAND_433

#include <stdint.h>
#include "PE_Types.h"
#include "gpio.h"
#include "WAIT1.h"

#ifndef false
#define false FALSE
#endif

#ifndef true
#define true TRUE
#endif

/* from CMSIS-CORE: */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */

#define __enable_irq()    __asm("CPSIE i")
#define __disable_irq()   __asm ("CPSID i")

#define __WFI()   __asm("wfi")

#endif /* PLATFORM_H_ */
