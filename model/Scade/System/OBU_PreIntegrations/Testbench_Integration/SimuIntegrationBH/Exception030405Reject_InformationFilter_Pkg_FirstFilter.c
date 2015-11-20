/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception030405Reject_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L7 */
  static kcg_bool _L7;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L9 */
  static kcg_bool _L9;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L10 */
  static kcg_bool _L10;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L12 */
  static kcg_bool _L12;
  
  _L7 = inPendingAckOfTrainData;
  /* 1 */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    _L7,
    &_L1,
    &_L2);
  _L8 = inSPPAndGradientOnBoard;
  _L9 = inMACoverNotFullLength;
  /* 1 */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    _L8,
    _L9,
    &_L3,
    &_L4);
  _L10 = inEmergencyStopAccepted;
  /* 1 */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    _L10,
    &_L5,
    &_L6);
  _L12 = _L1 | _L3 | _L5;
  *outAcceptMessage = _L12;
  _L11 = kcg_false;
  *outStoreInTransitionBuffer = _L11;
  noname = _L2;
  _1_noname = _L4;
  _2_noname = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

