/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void CalculateSafeTrainLength_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */L_TRAININT *safeTrainLength,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */kcg_int *minSafeRearEnd)
{
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */
  static kcg_int _L20;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L24 */
  static kcg_int _L24;
  
  if ((*trainPosition).valid) {
    _L24 = (*trainPosition).minSafeFrontEndPosition - (*trainProps).l_train;
  }
  else {
    _L24 = cMinSafeRearEnd_ProvidePositionReport_Pkg;
  }
  _L20 = _L24 - (*trainPosition).estimatedFrontEndPosition;
  if (0 <= _L20) {
    *safeTrainLength = _L20;
  }
  else {
    *safeTrainLength = - _L20;
  }
  if (0 <= _L24) {
    *minSafeRearEnd = _L24;
  }
  else {
    *minSafeRearEnd = - _L24;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalculateSafeTrainLength_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

