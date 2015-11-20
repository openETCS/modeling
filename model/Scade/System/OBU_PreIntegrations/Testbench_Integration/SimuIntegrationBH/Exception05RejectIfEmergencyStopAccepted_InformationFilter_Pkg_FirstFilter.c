/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted */
void Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::_L3 */
  static kcg_bool _L3;
  
  _L1 = inEmergencyStopAccepted;
  _L3 = !_L1;
  *outAcceptMessage = _L3;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

