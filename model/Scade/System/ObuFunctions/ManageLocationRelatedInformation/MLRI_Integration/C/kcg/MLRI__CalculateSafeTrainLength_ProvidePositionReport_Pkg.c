/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"

void MLRI__CalculateSafeTrainLength_reset_ProvidePositionReport_Pkg(
  MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */ kcg_int _L20;
  
  if ((*trainPosition).valid & !(*trainPosition).trainPositionIsUnknown) {
    outC->_L10 = (*trainPosition).minSafeFrontEndPosition -
      (*trainProps).l_train;
  }
  else if (outC->init) {
    outC->_L10 = MLRI__cMinSafeRearEnd_ProvidePositionReport_Pkg;
  }
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
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

