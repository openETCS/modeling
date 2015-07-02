/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */
#ifndef _SEND_MessageData_TM_lib_internal_H_
#define _SEND_MessageData_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::DataOut */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_WriteBaliseDataElement_TM_lib_internal /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L1 */ _L1;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L402 */ _L402;
  kcg_bool /* TM_lib_internal::SEND_MessageData::_L403 */ _L403;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_MessageData::_L404 */ _L404;
  array_int_500 /* TM_lib_internal::SEND_MessageData::_L406 */ _L406;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L407 */ _L407;
  kcg_int /* TM_lib_internal::SEND_MessageData::_L408 */ _L408;
  array_int_500_500 /* TM_lib_internal::SEND_MessageData::_L413 */ _L413;
  array_int_500 /* TM_lib_internal::SEND_MessageData::_L414 */ _L414;
  array_int_500 /* TM_lib_internal::SEND_MessageData::_L415 */ _L415;
} outC_SEND_MessageData_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_MessageData */
extern void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC);

extern void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC);

#endif /* _SEND_MessageData_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MessageData_TM_lib_internal.h
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

