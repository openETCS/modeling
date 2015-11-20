/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception030405Reject_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L5 */
  static kcg_bool _L5;
  
  *outStoreInTransitionBuffer = kcg_false;
  /* 1 */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    inPendingAckOfTrainData,
    &_L1,
    &_L3);
  /* 1 */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    inSPPAndGradientOnBoard,
    inMACoverNotFullLength,
    &_L3,
    &_L5);
  /* 1 */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    inEmergencyStopAccepted,
    &_L5,
    &_L6);
  *outAcceptMessage = _L1 | _L3 | _L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

