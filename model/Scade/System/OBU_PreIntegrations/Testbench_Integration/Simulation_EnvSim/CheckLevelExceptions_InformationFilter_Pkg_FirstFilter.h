/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_
#define _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"
#include "Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.h"
#include "Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h"
#include "Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"
#include "Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception030405Reject_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
extern void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::MACoverNotFullLength */kcg_bool MACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */kcg_bool *outAccept,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer);

#endif /* _CheckLevelExceptions_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

