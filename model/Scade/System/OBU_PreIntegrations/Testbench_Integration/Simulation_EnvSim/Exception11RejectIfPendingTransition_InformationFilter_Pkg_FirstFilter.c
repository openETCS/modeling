/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition */
void Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inLevelTransitionInMessage */kcg_bool inLevelTransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL1Transtion */kcg_bool inPendingL1Transtion,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = !(inLevelTransitionInMessage | inPendingL1Transtion |
      inPendingL2L3Transition);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

