/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DetermineNewIndices */
void DetermineNewIndices_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::IncFrontIdx */ kcg_bool IncFrontIdx,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::frontIndex */ kcg_int *frontIndex,
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::rearIndex */ kcg_int *rearIndex)
{
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L2 */
  static kcg_bool _L2;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L3 */
  static kcg_int _L3;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L4 */
  static kcg_int _L4;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L5 */
  static kcg_int _L5;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L6 */
  static kcg_int _L6;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L7 */
  static kcg_int _L7;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L9 */
  static kcg_int _L9;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L10 */
  static kcg_int _L10;
  /* SDM_GradientAcceleration_Pkg::DetermineNewIndices::_L11 */
  static ACC_SDM_GradientAcceleration_Pkg _L11;
  
  _L2 = IncFrontIdx;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L11, Accu);
  _L4 = _L11.rearIndex;
  _L6 = 1;
  _L7 = _L6 + _L4;
  /* 3 */ if (_L2) {
    _L10 = _L4;
  }
  else {
    _L10 = _L7;
  }
  *rearIndex = _L10;
  _L3 = _L11.frontIndex;
  _L5 = _L3 + _L6;
  /* 3 */ if (_L2) {
    _L9 = _L5;
  }
  else {
    _L9 = _L3;
  }
  *frontIndex = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineNewIndices_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

