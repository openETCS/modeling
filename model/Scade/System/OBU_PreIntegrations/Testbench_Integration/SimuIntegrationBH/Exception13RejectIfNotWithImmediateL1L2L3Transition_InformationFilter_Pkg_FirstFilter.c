/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition */
void Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::inL1L2L3TransitionInMessage */ kcg_bool inL1L2L3TransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception13RejectIfNotWithImmediateL1L2L3Transition::_L2 */
  static kcg_bool _L2;
  
  _L1 = inL1L2L3TransitionInMessage;
  *outAcceptMessage = _L1;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

