/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _SIM_SEND_WriteRadioMessageData_H_
#define _SIM_SEND_WriteRadioMessageData_H_

#include "kcg_types.h"
#include "SIM_SEND_WriteBaliseDataE.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageData::DataOut */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SIM_SEND_WriteBaliseDataE /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageData::_L1 */ _L1;
  kcg_int /* SIM_SEND_WriteRadioMessageData::_L402 */ _L402;
  kcg_bool /* SIM_SEND_WriteRadioMessageData::_L403 */ _L403;
  CompressedPacketData_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageData::_L404 */ _L404;
  array_int_500 /* SIM_SEND_WriteRadioMessageData::_L406 */ _L406;
  kcg_int /* SIM_SEND_WriteRadioMessageData::_L407 */ _L407;
  kcg_int /* SIM_SEND_WriteRadioMessageData::_L408 */ _L408;
  array_int_500_500 /* SIM_SEND_WriteRadioMessageData::_L413 */ _L413;
  array_int_500 /* SIM_SEND_WriteRadioMessageData::_L414 */ _L414;
  array_int_500 /* SIM_SEND_WriteRadioMessageData::_L415 */ _L415;
} outC_SIM_SEND_WriteRadioMessageData;

/* ===========  node initialization and cycle functions  =========== */
/* SIM_SEND_WriteRadioMessageData */
extern void SIM_SEND_WriteRadioMessageData(
  /* SIM_SEND_WriteRadioMessageData::StartAddress */kcg_int StartAddress,
  /* SIM_SEND_WriteRadioMessageData::EndAddress */kcg_int EndAddress,
  /* SIM_SEND_WriteRadioMessageData::DataElementIn */CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  /* SIM_SEND_WriteRadioMessageData::DataIn */CompressedPacketData_T_Common_Types_Pkg *DataIn,
  outC_SIM_SEND_WriteRadioMessageData *outC);

extern void SIM_SEND_WriteRadioMessageData_reset(
  outC_SIM_SEND_WriteRadioMessageData *outC);

#endif /* _SIM_SEND_WriteRadioMessageData_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteRadioMessageData.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

