/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg_H_
#define _MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg_H_

#include "kcg_types.h"
#include "MLRI__CheckBGConsistency_CheckBGConsistency_Pkg.h"
#include "MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg.h"
#include "MLRI__SelectUsableInfo_SelectUsableInfo_Pkg.h"
#include "MLRI__BuildBGMessage_BuildBGMessage_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__passedBG_T_BG_Types_Pkg /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::BG_Message */ BG_Message;
  kcg_bool /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::BadBaliseMessageToDMI */ BadBaliseMessageToDMI;
  kcg_bool /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::errorLinkedBG */ errorLinkedBG;
  kcg_bool /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::errorUnlinkedBG */ errorUnlinkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation */
extern void MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg(
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::API_balise */MLRI__API_Telegram_T_API_Msg_Pkg *API_balise,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::ActualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::reset */kcg_bool reset,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::Train_Data */MLRI__trainData_T_TIU_Types_Pkg *Train_Data,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::trainStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *trainStatus,
  MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg *outC);

extern void MLRI__ManageBaliseInfomation_reset_ManageBaliseInfomation_Integration_Pkg(
  MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg *outC);

#endif /* _MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

