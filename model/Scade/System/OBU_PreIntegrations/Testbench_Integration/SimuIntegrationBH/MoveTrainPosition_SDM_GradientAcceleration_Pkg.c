/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::MoveTrainPosition */
void MoveTrainPosition_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::distanceStep */ kcg_real distanceStep,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newFront */ kcg_real *newFront,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newRear */ kcg_real *newRear)
{
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L3 */
  static ACC_SDM_GradientAcceleration_Pkg _L3;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L1 */
  static kcg_real _L1;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L4 */
  static kcg_real _L4;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L5 */
  static kcg_real _L5;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L6 */
  static L_internal_real_Type_SDM_Types_Pkg _L6;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L7 */
  static L_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::_L8 */
  static ACC_SDM_GradientAcceleration_Pkg _L8;
  
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L3, Accu);
  _L1 = distanceStep;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&_L8, Accu);
  _L7 = _L8.rearPos;
  _L5 = _L1 + _L7;
  *newRear = _L5;
  _L6 = _L3.frontPos;
  _L4 = _L6 + _L1;
  *newFront = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveTrainPosition_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

