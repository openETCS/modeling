/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition */
void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1L2Transition */kcg_bool inPendingL1L2Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L3 */
  static kcg_bool _L3;
  
  *outAcceptMessage = kcg_false;
  /* 1 */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL1Transition,
    &_L3,
    &_L2);
  /* 1 */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    inPendingL1L2Transition,
    &_L3,
    &_L4);
  *outStoreInTransitionBuffer = _L2 | _L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

