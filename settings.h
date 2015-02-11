/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

#define IDENT_STR "JLEE-ROACH;AMS-ENC;"

/////// Radio settings ///////
/////// Radio settings ///////
#define RADIO_CHANNEL       0x14
#define RADIO_PAN_ID        0x2170
#define RADIO_SRC_ADDR      0x2102

//#define RADIO_DEST_ADDR       0x2101

#define RADIO_TXPQ_MAX_SIZE   10
#define RADIO_RXPQ_MAX_SIZE   10

//Telemetry type setup
#define TELEM_TYPE vrTelemStruct_t
#define TELEM_INCLUDE "vr_telem.h"
#define TELEMPACKFUNC(x) vrTelemGetData(x)

// Encoders Setup
#define AMS_ENC_OFFSET_0 -8052/4
#define AMS_ENC_OFFSET_1 2580/4

#endif //_SETTINGS_H