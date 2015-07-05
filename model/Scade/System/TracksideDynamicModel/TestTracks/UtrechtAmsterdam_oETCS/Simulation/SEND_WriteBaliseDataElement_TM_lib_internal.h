/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */
#ifndef _SEND_WriteBaliseDataElement_TM_lib_internal_H_
#define _SEND_WriteBaliseDataElement_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseDataElement::Cont */ Cont;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::DataOut */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L1 */ _L1;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L2 */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteBaliseDataElement::_L3 */ _L3;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L4 */ _L4;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L5 */ _L5;
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseDataElement::_L6 */ _L6;
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseDataElement::_L7 */ _L7;
  kcg_bool /* TM_lib_internal::SEND_WriteBaliseDataElement::_L8 */ _L8;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L9 */ _L9;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L10 */ _L10;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L14 */ _L14;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L16 */ _L16;
  kcg_int /* TM_lib_internal::SEND_WriteBaliseDataElement::_L17 */ _L17;
} outC_SEND_WriteBaliseDataElement_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_WriteBaliseDataElement */
extern void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */kcg_int EndAddress,
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC);

extern void SEND_WriteBaliseDataElement_reset_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC);

#endif /* _SEND_WriteBaliseDataElement_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WriteBaliseDataElement_TM_lib_internal.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

