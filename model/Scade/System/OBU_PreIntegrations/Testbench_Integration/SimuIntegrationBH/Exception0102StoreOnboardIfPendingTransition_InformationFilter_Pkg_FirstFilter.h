/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_
#define _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition */
extern void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1L2Transition */ kcg_bool inPendingL1L2Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

