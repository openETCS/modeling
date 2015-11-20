/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
Q_DIRTRAIN trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refMotionDir */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg refMotionDir;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currMotionDir */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg currMotionDir;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refRunningDirectionToBG */
  static Q_DIRTRAIN refRunningDirectionToBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L9 */
  static passedBG_T_BG_Types_Pkg _L9;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L10 */
  static BG_Header_T_BG_Types_Pkg _L10;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L13 */
  static Q_DIRTRAIN _L13;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L14 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L14;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L15 */
  static odometry_T_Obu_BasicTypes_Pkg _L15;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L16 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L16;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L18 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L18;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L19 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L19;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L20 */
  static kcg_bool _L20;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L22 */
  static Q_DIRTRAIN _L22;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L23 */
  static Q_DIRTRAIN _L23;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L24 */
  static Q_DIRTRAIN _L24;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L26 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L26;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L27 */
  static kcg_bool _L27;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L29 */
  static positionedBG_T_TrainPosition_Types_Pck _L29;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L28 */
  static kcg_bool _L28;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L30 */
  static kcg_bool _L30;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L31 */
  static passedBG_T_BG_Types_Pkg _L31;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L32 */
  static kcg_bool _L32;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L33 */
  static BG_Header_T_BG_Types_Pkg _L33;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L34 */
  static kcg_bool _L34;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L35 */
  static kcg_bool _L35;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L36 */
  static kcg_bool _L36;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L39 */
  static kcg_bool _L39;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L40 */
  static kcg_bool _L40;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L44 */
  static Q_DIRTRAIN _L44;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::_L45 */
  static Q_DIRTRAIN _L45;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::direction */
  static Q_DIRTRAIN direction;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L9, &_L7.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L10, &_L9.BG_Header);
  _L13 = _L10.trainRunningDirectionToBG;
  _L14 = _L10.bgPosition.motionDirection;
  refMotionDir = _L14;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L15, currentOdometry);
  _L16 = _L15.motionDirection;
  currMotionDir = _L16;
  _L17 = _L15.valid;
  _L18 = currMotionDir;
  _L19 = refMotionDir;
  _L20 = _L18 == _L19;
  refRunningDirectionToBG = _L13;
  _L23 = refRunningDirectionToBG;
  _L24 = /* 1 */ invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg(_L23);
  /* 1 */ if (_L20) {
    _L22 = _L23;
  }
  else {
    _L22 = _L24;
  }
  _L26 = unknownDirection_Obu_BasicTypes_Pkg;
  _L27 = _L16 == _L26;
  _L25 = !_L17;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L29, refBG);
  _L28 = _L29.valid;
  _L30 = !_L28;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L31, &_L29.infoFromPassing);
  _L32 = _L31.valid;
  _L34 = !_L32;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L33, &_L31.BG_Header);
  _L39 = _L33.valid;
  _L35 = !_L39;
  _L37 = _L33.bgPosition.valid;
  _L40 = !_L37;
  _L36 = _L27 | _L25 | _L30 | _L34 | _L35 | _L40;
  _L45 = Q_DIRTRAIN_Unknown;
  /* 2 */ if (_L36) {
    _L44 = _L45;
  }
  else {
    _L44 = _L22;
  }
  direction = _L44;
  return direction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

