/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_
#define _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter.h"
#include "Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition */
extern void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1L2Transition */kcg_bool inPendingL1L2Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

