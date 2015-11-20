/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_
#define _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
extern void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

