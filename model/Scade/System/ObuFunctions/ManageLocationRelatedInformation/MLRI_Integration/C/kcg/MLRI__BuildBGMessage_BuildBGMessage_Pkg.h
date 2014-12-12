/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__BuildBGMessage_BuildBGMessage_Pkg_H_
#define _MLRI__BuildBGMessage_BuildBGMessage_Pkg_H_

#include "kcg_types.h"
#include "MLRI__updateCollectorSendMessage_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__manageTelegram_BuildBGMessage_Pkg.h"
#include "MLRI__checkOdometry_BuildBGMessage_Pkg.h"
#include "MLRI__manageAdditionalTelegram_BuildBGMessage_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__BG_Message_T_BG_Types_Pkg /* BuildBGMessage_Pkg::BuildBGMessage::outBGMessage */ outBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__TelegramStore_T_BuildBGMessage_Pkg /* BuildBGMessage_Pkg::BuildBGMessage::storeAdditionalTelegram */ storeAdditionalTelegram;
  MLRI__BGCollector_T_BuildBGMessage_Pkg /* BuildBGMessage_Pkg::BuildBGMessage::storeCollector */ storeCollector;
  MLRI__TelegramArray_T_BG_Types_Pkg /* BuildBGMessage_Pkg::BuildBGMessage::storeBGTelegramArray */ storeBGTelegramArray;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BuildBGMessage_Pkg::BuildBGMessage */
extern void MLRI__BuildBGMessage_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::BuildBGMessage::reset */kcg_bool reset,
  /* BuildBGMessage_Pkg::BuildBGMessage::inTelegramPresent */kcg_bool inTelegramPresent,
  /* BuildBGMessage_Pkg::BuildBGMessage::inDecodedTelegram */MLRI__Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* BuildBGMessage_Pkg::BuildBGMessage::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::BuildBGMessage::inActualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg *outC);

extern void MLRI__BuildBGMessage_reset_BuildBGMessage_Pkg(
  MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg *outC);

#endif /* _MLRI__BuildBGMessage_BuildBGMessage_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__BuildBGMessage_BuildBGMessage_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

