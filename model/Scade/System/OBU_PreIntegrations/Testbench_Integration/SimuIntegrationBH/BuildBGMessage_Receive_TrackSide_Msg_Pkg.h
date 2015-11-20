/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_
#define _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"
#include "updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::outBGMessage */ outBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TelegramStore_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */ storeAdditionalTelegram;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ storeCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ storeBGTelegramArray;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
extern void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BuildBGMessage_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

