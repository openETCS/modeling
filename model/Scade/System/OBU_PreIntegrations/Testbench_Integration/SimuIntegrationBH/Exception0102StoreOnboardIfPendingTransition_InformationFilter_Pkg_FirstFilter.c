/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition */
void Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1L2Transition */ kcg_bool inPendingL1L2Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L7 */
  static kcg_bool _L7;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L8 */
  static kcg_bool _L8;
  
  _L5 = inPendingL1Transition;
  /* 1 */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    _L5,
    &_L1,
    &_L2);
  _L6 = inPendingL1L2Transition;
  /* 1 */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    _L6,
    &_L3,
    &_L4);
  _L7 = kcg_false;
  *outAcceptMessage = _L7;
  _L8 = _L2 | _L4;
  *outStoreInTransitionBuffer = _L8;
  noname = _L1;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

