/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength */
void Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::_L5 */
  static kcg_bool _L5;
  
  _L1 = inSPPAndGradientOnBoard;
  _L2 = inMACoverNotFullLength;
  _L3 = kcg_false;
  *outStoreInTransitionBuffer = _L3;
  _L4 = _L1 | _L2;
  _L5 = !_L4;
  *outAcceptMessage = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

