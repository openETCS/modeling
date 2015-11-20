/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition */
void Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inLevelTransitionInMessage */ kcg_bool inLevelTransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL1Transtion */ kcg_bool inPendingL1Transtion,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L7 */
  static kcg_bool _L7;
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L10 */
  static kcg_bool _L10;
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L11 */
  static kcg_bool _L11;
  
  _L6 = inLevelTransitionInMessage;
  _L7 = inPendingL1Transtion;
  _L8 = inPendingL2L3Transition;
  _L10 = _L6 | _L7 | _L8;
  _L11 = !_L10;
  *outAcceptMessage = _L11;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

