/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */ T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */ OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */ A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */ odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry)
{
  /* Toolbox::TrainModules::ODO::_L1 */
  static odometry_T_Obu_BasicTypes_Pkg _L1;
  /* Toolbox::TrainModules::ODO::_L4 */
  static kcg_bool _L4;
  /* Toolbox::TrainModules::ODO::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* Toolbox::TrainModules::ODO::_L6 */
  static OdometrySpeed_T_Toolbox _L6;
  /* Toolbox::TrainModules::ODO::_L7 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* Toolbox::TrainModules::ODO::_L9 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L9;
  /* Toolbox::TrainModules::ODO::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* Toolbox::TrainModules::ODO::_L11 */
  static odometryFactors_T_Toolbox _L11;
  /* Toolbox::TrainModules::ODO::_L13 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L13;
  /* Toolbox::TrainModules::ODO::_L14 */
  static kcg_bool _L14;
  /* Toolbox::TrainModules::ODO::_L15 */
  static OdometrySpeed_T_Toolbox _L15;
  /* Toolbox::TrainModules::ODO::_L16 */
  static kcg_int _L16;
  /* Toolbox::TrainModules::ODO::_L17 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L17;
  /* Toolbox::TrainModules::ODO::_L18 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L18;
  /* Toolbox::TrainModules::ODO::_L19 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L19;
  /* Toolbox::TrainModules::ODO::_L20 */
  static OdometrySpeeds_T_Obu_BasicTypes_Pkg _L20;
  /* Toolbox::TrainModules::ODO::_L21 */
  static odometryFactors_T_Toolbox _L21;
  
  _L4 = kcg_true;
  _L5 = timestamp;
  _L10 = position;
  kcg_copy_odometryFactors_T_Toolbox(
    &_L11,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  /* 1 */ ODO_genOdometryInaccuracies_Toolbox_Functions(_L10, &_L11, &_L9);
  _L6 = velocity;
  kcg_copy_odometryFactors_T_Toolbox(
    &_L21,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  /* 1 */ ODO_genSpeedInaccuracies_Toolbox_Functions(_L6, &_L21, &_L20);
  _L7 = acceleration;
  _L15 = velocity;
  _L16 = 0;
  _L14 = _L15 > _L16;
  _L17 = Motion_Obu_BasicTypes_Pkg;
  _L18 = noMotion_Obu_BasicTypes_Pkg;
  /* 1 */ if (_L14) {
    _L13 = _L17;
  }
  else {
    _L13 = _L18;
  }
  _L19 = motionDirection;
  _L1.valid = _L4;
  _L1.timestamp = _L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L1.odo, &_L9);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_L1.speed, &_L20);
  _L1.acceleration = _L7;
  _L1.motionState = _L13;
  _L1.motionDirection = _L19;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(odometry, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

