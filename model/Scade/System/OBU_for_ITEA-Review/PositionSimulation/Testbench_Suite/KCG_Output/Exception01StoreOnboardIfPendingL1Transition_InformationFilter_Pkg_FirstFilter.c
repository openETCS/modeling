/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition */
void Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outAcceptMessage = kcg_false;
  *outStoreInTransitionBuffer = inPendingL1Transition;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

