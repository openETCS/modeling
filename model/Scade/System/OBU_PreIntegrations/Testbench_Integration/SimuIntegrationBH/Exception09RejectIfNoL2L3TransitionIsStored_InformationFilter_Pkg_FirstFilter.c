/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored */
void Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::inL2L3TransitionInTransitionBuffer */ kcg_bool inL2L3TransitionInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::_L2 */
  static kcg_bool _L2;
  
  _L1 = inL2L3TransitionInTransitionBuffer;
  *outAcceptMessage = _L1;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

