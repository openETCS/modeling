/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_
#define _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"
#include "Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
extern void Exception030405Reject_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception030405Reject_InformationFilter_Pkg_FirstFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Exception030405Reject_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

