/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkOdometry */
void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *_7_outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *_6_outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *_5_outCollector)
{
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _3_outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */
  static kcg_bool _2_outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */
  static kcg_bool _1_outMessageComplete;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L20 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L20_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L19 */
  static kcg_bool _L19_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L18 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L18_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L16 */
  static kcg_bool _L16_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L11 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L11_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L9 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L9_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L10 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L10_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L6 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L6_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::then::_L7 */
  static odometry_T_Obu_BasicTypes_Pkg _L7_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */
  static kcg_bool outBGIsChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */
  static kcg_bool outMessageComplete;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L3 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L34_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::isValid */
  static kcg_bool isValid;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L11 */
  static odometry_T_Obu_BasicTypes_Pkg _L11;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L12 */
  static kcg_bool _L12;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L19 */
  static kcg_int _L19;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L20 */
  static kcg_bool _L20;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L21 */
  static kcg_int _L21;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L22 */
  static kcg_bool _L22;
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::_L30 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L30;
  
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L11, actualOdometry);
  _L12 = _L11.valid;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L30, inCollector);
  _L19 = _L30.totalTelegrams;
  _L21 = 0;
  _L20 = _L19 > _L21;
  _L22 = _L12 & _L20;
  isValid = _L22;
  IfBlock1_clock = isValid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L20_IfBlock1,
      inCollector);
    _L19_IfBlock1 = _L20_IfBlock1.BGMessageSent;
    _L21_IfBlock1 = !_L19_IfBlock1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L7_IfBlock1, actualOdometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L6_IfBlock1,
      &_L7_IfBlock1.odo);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L9_IfBlock1,
      inCollector);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L10_IfBlock1,
      &_L9_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L11_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cMaxDistanceBalisesInGroup_BG_Types_Pkg);
    _L5_IfBlock1 = /* 2 */
      checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
        &_L6_IfBlock1,
        &_L10_IfBlock1,
        &_L11_IfBlock1);
    _L3_IfBlock1 = !_L5_IfBlock1;
    _L22_IfBlock1 = _L21_IfBlock1 & _L3_IfBlock1;
    _1_outMessageComplete = _L22_IfBlock1;
    *_7_outMessageComplete = _1_outMessageComplete;
    _L12_IfBlock1 = _L9_IfBlock1.collectedTelegrams;
    _L13_IfBlock1 = _L9_IfBlock1.collectedTelegrams;
    _L14_IfBlock1 = _L12_IfBlock1 < _L13_IfBlock1;
    _L15_IfBlock1 = _L3_IfBlock1 & _L14_IfBlock1;
    _2_outBGIsChangedEarly = _L15_IfBlock1;
    *_6_outBGIsChangedEarly = _2_outBGIsChangedEarly;
    _L16_IfBlock1 = _L9_IfBlock1.badBaliseFlag;
    _L17_IfBlock1 = _L15_IfBlock1 & _L16_IfBlock1;
    /* 1 */
    updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      _L17_IfBlock1,
      &_L9_IfBlock1,
      &_L18_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_3_outCollector,
      &_L18_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _5_outCollector,
      &_3_outCollector);
  }
  else {
    _L1_IfBlock1 = kcg_false;
    outMessageComplete = _L1_IfBlock1;
    *_7_outMessageComplete = outMessageComplete;
    _L2_IfBlock1 = kcg_false;
    outBGIsChangedEarly = _L2_IfBlock1;
    *_6_outBGIsChangedEarly = outBGIsChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L34_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &_L34_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      _5_outCollector,
      &outCollector);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkOdometry_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

