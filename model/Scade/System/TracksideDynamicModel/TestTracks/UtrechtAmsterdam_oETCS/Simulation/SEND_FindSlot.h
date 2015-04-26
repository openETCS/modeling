/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */
#ifndef _SEND_FindSlot_H_
#define _SEND_FindSlot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SEND_FindSlot::Cont */ Cont;
  kcg_int /* SEND_FindSlot::Acc */ Acc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* SEND_FindSlot::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* SEND_FindSlot::_L2 */ _L2;
  MetadataElement_T_Common_Types_Pkg /* SEND_FindSlot::_L3 */ _L3;
  kcg_bool /* SEND_FindSlot::_L17 */ _L17;
  kcg_int /* SEND_FindSlot::_L19 */ _L19;
  NID_PACKET /* SEND_FindSlot::_L27 */ _L27;
  kcg_int /* SEND_FindSlot::_L28 */ _L28;
  NID_PACKET /* SEND_FindSlot::_L29 */ _L29;
} outC_SEND_FindSlot;

/* ===========  node initialization and cycle functions  =========== */
/* SEND_FindSlot */
extern void SEND_FindSlot(
  /* SEND_FindSlot::a */kcg_int a,
  /* SEND_FindSlot::MessageIn */MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* SEND_FindSlot::EmptyHeader */MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  outC_SEND_FindSlot *outC);

extern void SEND_FindSlot_reset(outC_SEND_FindSlot *outC);

#endif /* _SEND_FindSlot_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_FindSlot.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */

