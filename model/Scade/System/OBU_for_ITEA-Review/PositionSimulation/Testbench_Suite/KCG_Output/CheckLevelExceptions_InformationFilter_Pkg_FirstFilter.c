/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */ LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */ kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */ kcg_bool *outAccept,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01m */ kcg_bool e01m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01b */ kcg_bool e01b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02m */ kcg_bool e02m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02b */ kcg_bool e02b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03m */ kcg_bool e03m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03b */ kcg_bool e03b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05m */ kcg_bool e05m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05b */ kcg_bool e05b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06m */ kcg_bool e06m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06b */ kcg_bool e06b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07m */ kcg_bool e07m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07b */ kcg_bool e07b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09m */ kcg_bool e09m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09b */ kcg_bool e09b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11m */ kcg_bool e11m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11b */ kcg_bool e11b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12m */ kcg_bool e12m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12b */ kcg_bool e12b;
  
  /* 1 */
  Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
    0,
    inLastAckTextMessageId,
    &e12m,
    &e12b);
  /* 1 */
  Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    kcg_false,
    inPendingL1Transition,
    inPendingL2L3Transition,
    &e11m,
    &e11b);
  /* 1 */
  Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
    kcg_false,
    &e09m,
    &e09b);
  /* 1 */
  Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    inPendingNTCTransition,
    &e07m,
    &e07b);
  /* 2 */
  Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    inPendingNTCTransition,
    &e06m,
    &e06b);
  /* 2 */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    inEmergencyBrakeActive,
    &e05m,
    &e05b);
  /* 2 */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    inPendingAckOfTrainData,
    &e03m,
    &e03b);
  /* 2 */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL2L3Transition,
    &e02m,
    &e02b);
  /* 2 */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL1Transition,
    &e01m,
    &e01b);
  switch (inAction) {
    case LD_DUMMY6_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_DUMMY5_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e12b;
      *outAccept = e12m;
      break;
    case LD_DUMMY4_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e11b;
      *outAccept = e11m;
      break;
    case LD_DUMMY3_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e09b;
      *outAccept = e09m;
      break;
    case LD_DUMMY2_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e07b;
      *outAccept = e07m;
      break;
    case LD_StoreIfPendingNTCTransition_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e06b;
      *outAccept = e06m;
      break;
    case LD_RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e05b;
      *outAccept = e05m;
      break;
    case LD_DUMMY1_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e03b;
      *outAccept = e03m;
      break;
    case LD_StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e02b;
      *outAccept = e02m;
      break;
    case LD_StoreIfPendingL1Transition_DataDictionary_Pkg :
      *outStoreInTransitionBuffer = e01b;
      *outAccept = e01m;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_Reject_DataDictionary_Pkg :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    case LD_Accept_DataDictionary_Pkg :
      *outAccept = kcg_true;
      *outStoreInTransitionBuffer = kcg_false;
      break;
    
    default :
      *outAccept = kcg_false;
      *outStoreInTransitionBuffer = kcg_false;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

