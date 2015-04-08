/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */
#ifndef _RECV_ReadRadioPacket15_H_
#define _RECV_ReadRadioPacket15_H_

#include "kcg_types.h"
#include "RECV_ExtractDataFromRadio.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* RECV_ReadRadioPacket15::StartAddress */ StartAddress;
  kcg_int /* RECV_ReadRadioPacket15::EndAddress */ EndAddress;
  CompressedBaliseData /* RECV_ReadRadioPacket15::PacketData */ PacketData;
} inC_RECV_ReadRadioPacket15;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_200 /* RECV_ReadRadioPacket15::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ExtractDataFromRadio /* 1 */ Context_1[200];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseData /* RECV_ReadRadioPacket15::_L3 */ _L3;
  kcg_int /* RECV_ReadRadioPacket15::_L4 */ _L4;
  kcg_int /* RECV_ReadRadioPacket15::_L5 */ _L5;
  array_int_200 /* RECV_ReadRadioPacket15::_L6 */ _L6;
  array_int_200 /* RECV_ReadRadioPacket15::_L7 */ _L7;
  kcg_bool /* RECV_ReadRadioPacket15::_L8 */ _L8;
  array_int_200 /* RECV_ReadRadioPacket15::_L10 */ _L10;
  kcg_int /* RECV_ReadRadioPacket15::_L16 */ _L16;
  array_int_200_200 /* RECV_ReadRadioPacket15::_L18 */ _L18;
} outC_RECV_ReadRadioPacket15;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioPacket15 */
extern void RECV_ReadRadioPacket15(
  inC_RECV_ReadRadioPacket15 *inC,
  outC_RECV_ReadRadioPacket15 *outC);

extern void RECV_ReadRadioPacket15_reset(outC_RECV_ReadRadioPacket15 *outC);

#endif /* _RECV_ReadRadioPacket15_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacket15.h
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

