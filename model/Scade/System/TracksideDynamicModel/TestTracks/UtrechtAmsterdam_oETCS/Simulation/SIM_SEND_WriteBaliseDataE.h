/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */
#ifndef _SIM_SEND_WriteBaliseDataE_H_
#define _SIM_SEND_WriteBaliseDataE_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SIM_SEND_WriteBaliseDataElement::Cont */ Cont;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::DataOut */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L1 */ _L1;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L2 */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* SIM_SEND_WriteBaliseDataElement::_L3 */ _L3;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L4 */ _L4;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L5 */ _L5;
  kcg_bool /* SIM_SEND_WriteBaliseDataElement::_L6 */ _L6;
  kcg_bool /* SIM_SEND_WriteBaliseDataElement::_L7 */ _L7;
  kcg_bool /* SIM_SEND_WriteBaliseDataElement::_L8 */ _L8;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L9 */ _L9;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L10 */ _L10;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L14 */ _L14;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L16 */ _L16;
  kcg_int /* SIM_SEND_WriteBaliseDataElement::_L17 */ _L17;
} outC_SIM_SEND_WriteBaliseDataE;

/* ===========  node initialization and cycle functions  =========== */
/* SIM_SEND_WriteBaliseDataElement */
extern void SIM_SEND_WriteBaliseDataE(
  /* SIM_SEND_WriteBaliseDataElement::Index */kcg_int Index,
  /* SIM_SEND_WriteBaliseDataElement::DataIn */kcg_int DataIn,
  /* SIM_SEND_WriteBaliseDataElement::ElementIn */CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* SIM_SEND_WriteBaliseDataElement::StartAddress */kcg_int StartAddress,
  /* SIM_SEND_WriteBaliseDataElement::EndAddress */kcg_int EndAddress,
  outC_SIM_SEND_WriteBaliseDataE *outC);

extern void SIM_SEND_WriteBaliseDataE_reset(
  outC_SIM_SEND_WriteBaliseDataE *outC);

#endif /* _SIM_SEND_WriteBaliseDataE_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteBaliseDataE.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */

