/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"

void CalculateSafeTrainLength_init_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L10 = 0;
  outC->minSafeRearEnd = 0;
  outC->safeTrainLength = 0;
}


void CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */ kcg_int _L20;
  
  if ((*trainPosition).valid & !(*trainPosition).trainPositionIsUnknown) {
    outC->_L10 = (*trainPosition).minSafeFrontEndPosition -
      (*trainProps).l_train;
  }
  else if (outC->init) {
    outC->_L10 = cMinSafeRearEnd_ProvidePositionReport_Pkg;
  }
  outC->init = kcg_false;
  _L20 = outC->_L10 - (*trainPosition).estimatedFrontEndPosition;
  if (0 <= _L20) {
    outC->safeTrainLength = _L20;
  }
  else {
    outC->safeTrainLength = - _L20;
  }
  if (0 <= outC->_L10) {
    outC->minSafeRearEnd = outC->_L10;
  }
  else {
    outC->minSafeRearEnd = - outC->_L10;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

