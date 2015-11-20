/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_
#define _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "Read_P045_TM.h"
#include "Read_P042_TM.h"
#include "Read_P131_TM.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds */
extern void fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromHandingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p45_radioNetworkRegistrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder_decoced */ p131_q_rbcTransitionOrder_T_Handover_Pkg *p131_RBCTransitionOrder_decoced,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_RBCTransitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::sessionCmdsFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmdsFromTrack);

#endif /* _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

