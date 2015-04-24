/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _SIM_SEND_WriteRadioMessag_H_
#define _SIM_SEND_WriteRadioMessag_H_

#include "kcg_types.h"
#include "SEND_FindSlot.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::HeadersOut */ HeadersOut;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::NewStartAddr */ NewStartAddr;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::NewEndAddr */ NewEndAddr;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_FindSlot /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L1 */ _L1;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L3 */ _L3;
  kcg_bool /* SIM_SEND_WriteRadioMessageHeader::_L4 */ _L4;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L5 */ _L5;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L7 */ _L7;
  Metadata_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L8 */ _L8;
  MetadataElement_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L9 */ _L9;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L16 */ _L16;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L17 */ _L17;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L18 */ _L18;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L22 */ _L22;
  Metadata_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L23 */ _L23;
  Metadata_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L24 */ _L24;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L31 */ _L31;
  kcg_bool /* SIM_SEND_WriteRadioMessageHeader::_L32 */ _L32;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L33 */ _L33;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L34 */ _L34;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L35 */ _L35;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L36 */ _L36;
  kcg_int /* SIM_SEND_WriteRadioMessageHeader::_L37 */ _L37;
  MetadataElement_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L43 */ _L43;
  MetadataElement_T_Common_Types_Pkg /* SIM_SEND_WriteRadioMessageHeader::_L44 */ _L44;
} outC_SIM_SEND_WriteRadioMessag;

/* ===========  node initialization and cycle functions  =========== */
/* SIM_SEND_WriteRadioMessageHeader */
extern void SIM_SEND_WriteRadioMessag(
  /* SIM_SEND_WriteRadioMessageHeader::HeadersIn */Metadata_T_Common_Types_Pkg *HeadersIn,
  /* SIM_SEND_WriteRadioMessageHeader::NewHeader */MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SIM_SEND_WriteRadioMessag *outC);

extern void SIM_SEND_WriteRadioMessag_reset(
  outC_SIM_SEND_WriteRadioMessag *outC);

#endif /* _SIM_SEND_WriteRadioMessag_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteRadioMessag.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

