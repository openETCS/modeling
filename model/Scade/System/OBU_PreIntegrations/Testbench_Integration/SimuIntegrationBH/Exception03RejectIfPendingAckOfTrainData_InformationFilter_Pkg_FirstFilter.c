/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData */
void Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::_L3 */
  static kcg_bool _L3;
  
  _L1 = inPendingAckOfTrainData;
  _L3 = !_L1;
  *outAcceptMessage = _L3;
  _L2 = kcg_false;
  *outStoreInTransitionBuffer = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

