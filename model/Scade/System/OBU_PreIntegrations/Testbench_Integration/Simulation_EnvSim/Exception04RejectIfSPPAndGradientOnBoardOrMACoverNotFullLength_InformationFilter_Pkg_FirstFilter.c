/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength */
void Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = !(inSPPAndGradientOnBoard | inMACoverNotFullLength);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

