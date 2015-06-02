/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
#ifndef _SIM_SEND_WriteBaliseMessa_DRAFTS_H_
#define _SIM_SEND_WriteBaliseMessa_DRAFTS_H_

#include "kcg_types.h"
#include "SEND_FindSlot_DRAFTS.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::HeadersOut */ HeadersOut;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::NewStartAddr */ NewStartAddr;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::NewEndAddr */ NewEndAddr;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_FindSlot_DRAFTS /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L1 */ _L1;
  kcg_bool /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L4 */ _L4;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L5 */ _L5;
  Metadata_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L8 */ _L8;
  MetadataElement_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L9 */ _L9;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L16 */ _L16;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L17 */ _L17;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L18 */ _L18;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L22 */ _L22;
  Metadata_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L23 */ _L23;
  Metadata_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L24 */ _L24;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L31 */ _L31;
  kcg_bool /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L32 */ _L32;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L33 */ _L33;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L34 */ _L34;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L35 */ _L35;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L36 */ _L36;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L37 */ _L37;
  MetadataElement_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L43 */ _L43;
  MetadataElement_T_Common_Types_Pkg /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L44 */ _L44;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L7 */ _L7;
  kcg_int /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::_L3 */ _L3;
} outC_SIM_SEND_WriteBaliseMessa_DRAFTS;

/* ===========  node initialization and cycle functions  =========== */
/* DRAFTS::SIM_SEND_WriteBaliseMessageHeader */
extern void SIM_SEND_WriteBaliseMessa_DRAFTS(
  /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::HeadersIn */Metadata_T_Common_Types_Pkg *HeadersIn,
  /* DRAFTS::SIM_SEND_WriteBaliseMessageHeader::NewHeader */MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SIM_SEND_WriteBaliseMessa_DRAFTS *outC);

extern void SIM_SEND_WriteBaliseMessa_reset_DRAFTS(
  outC_SIM_SEND_WriteBaliseMessa_DRAFTS *outC);

#endif /* _SIM_SEND_WriteBaliseMessa_DRAFTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_SEND_WriteBaliseMessa_DRAFTS.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */

