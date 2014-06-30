/*
 * UID.c
 *
 *  Created on: Dec 18, 2013
 *      Author: tastyger
 */

#include "Platform.h"
#include "UID.h"
#include "Cpu.h" /* SIM and UID register map */

uint8_t UID_GetID(UID_Id id) {
  id[0] = (SIM_UIDMH>>8)&0xff;
  id[1] = SIM_UIDMH&0xff;
  id[2] = (SIM_UIDML>>24)&0xff;
  id[3] = (SIM_UIDML>>16)&0xff;
  id[4] = (SIM_UIDML>>8)&0xff;
  id[5] = SIM_UIDML&0xff;
  id[6] = (SIM_UIDL>>24)&0xff;
  id[7] = (SIM_UIDL>>16)&0xff;
  id[8] = (SIM_UIDL>>8)&0xff;
  id[9] = SIM_UIDL&0xff;
  return ERR_OK;
}
