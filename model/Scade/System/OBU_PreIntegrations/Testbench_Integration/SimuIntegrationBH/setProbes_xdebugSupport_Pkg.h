/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _setProbes_xdebugSupport_Pkg_H_
#define _setProbes_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::setProbes::isChanged */ isChanged;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ radioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ BG_ID;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id1 */ packet_id1;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id2 */ packet_id2;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::lastRadioMSG */ lastRadioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::lastBG_ID */ lastBG_ID;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::msgID */ msgID;
  NID_BG /* xdebugSupport_Pkg::setProbes::bgID */ bgID;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::lastMsgID */ lastMsgID;
  NID_BG /* xdebugSupport_Pkg::setProbes::lastBGID */ lastBGID;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countPackets_xdebugSupport_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* xdebugSupport_Pkg::setProbes */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* xdebugSupport_Pkg::setProbes::_L1 */ _L1;
  API_RadioMsgHeader_T_API_Msg_Pkg /* xdebugSupport_Pkg::setProbes::_L2 */ _L2;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L4 */ _L4;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L5 */ _L5;
  API_TelegramHeader_T_API_Msg_Pkg /* xdebugSupport_Pkg::setProbes::_L6 */ _L6;
  TelegramHeader_T_BG_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L7 */ _L7;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L8 */ _L8;
  CompressedPackets_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L9 */ _L9;
  Metadata_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L10 */ _L10;
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L11 */ _L11;
  kcg_int /* xdebugSupport_Pkg::setProbes::_L12 */ _L12;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::_L13 */ _L13;
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L15 */ _L15;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::_L14 */ _L14;
  kcg_int /* xdebugSupport_Pkg::setProbes::_L16 */ _L16;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L18 */ _L18;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L19 */ _L19;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L20 */ _L20;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L22 */ _L22;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L23 */ _L23;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L24 */ _L24;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L26 */ _L26;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L27 */ _L27;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L28 */ _L28;
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L29 */ _L29;
  MetadataElement_T_Common_Types_Pkg /* xdebugSupport_Pkg::setProbes::_L30 */ _L30;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L31 */ _L31;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L32 */ _L32;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L33 */ _L33;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L34 */ _L34;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L35 */ _L35;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L36 */ _L36;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L37 */ _L37;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L38 */ _L38;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L39 */ _L39;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L42 */ _L42;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L45 */ _L45;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L44 */ _L44;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L46 */ _L46;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L47 */ _L47;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L50 */ _L50;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L51 */ _L51;
  NID_BG /* xdebugSupport_Pkg::setProbes::_L52 */ _L52;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::_L54 */ _L54;
  kcg_int /* xdebugSupport_Pkg::setProbes::_L55 */ _L55;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L57 */ _L57;
  kcg_int /* xdebugSupport_Pkg::setProbes::_L58 */ _L58;
  kcg_bool /* xdebugSupport_Pkg::setProbes::_L59 */ _L59;
  kcg_int /* xdebugSupport_Pkg::setProbes::_L60 */ _L60;
} outC_setProbes_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbes */
extern void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */ API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */ kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbes_reset_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbes_init_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _setProbes_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** setProbes_xdebugSupport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

