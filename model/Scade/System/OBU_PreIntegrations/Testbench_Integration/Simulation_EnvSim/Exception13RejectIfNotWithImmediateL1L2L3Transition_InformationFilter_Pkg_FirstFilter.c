/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition */
void Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::inL1L2L3TransitionInMessage */kcg_bool inL1L2L3TransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inL1L2L3TransitionInMessage;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

