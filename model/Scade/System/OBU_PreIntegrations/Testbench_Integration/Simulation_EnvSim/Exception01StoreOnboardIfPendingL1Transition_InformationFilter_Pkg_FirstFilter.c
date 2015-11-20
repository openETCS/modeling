/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition */
void Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outAcceptMessage = kcg_false;
  *outStoreInTransitionBuffer = inPendingL1Transition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

