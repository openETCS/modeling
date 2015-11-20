/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L9 = 0;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L6 = 0;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->linkingIsUsed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */ kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_int tmp5;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_int tmp4;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool tmp3;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool tmp2;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool tmp1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool _8_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool _9_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_int _10_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool _6_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_int _7_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool ck_every;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool _11_ck_every;
  static kcg_bool noname;
  static kcg_bool _12_noname;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck lastLinkedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastPassedLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L1 */
  static odometry_T_Obu_BasicTypes_Pkg _L1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L2 */
  static positionedBGs_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L24 */
  static kcg_bool _L24;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L23 */
  static kcg_int _L23;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L26 */
  static kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L27 */
  static kcg_bool _L27;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L28 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L28;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L29 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L29;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L30 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L33 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L33;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L34 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L34;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L37 */
  static kcg_int _L37;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L40 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L40;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L39 */
  static kcg_int _L39;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L41 */
  static kcg_bool _L41;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L46 */
  static kcg_bool _L46;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L47 */
  static kcg_bool _L47;
  
  _L3 = recalculateBGs;
  ck_every = _L3;
  _L19 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L2, BGs);
  /* ck_linkingIsUsed */ if (ck_every) {
    /* 1 */
    indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L19,
      &_L2,
      _L3,
      &_10_op_call,
      &_9_op_call,
      &_8_op_call);
  }
  _11_ck_every = _L3;
  _L18 = kcg_true;
  /* ck_linkingIsUsed */ if (_11_ck_every) {
    /* 1 */
    indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L18,
      &_L2,
      _L3,
      &_7_op_call,
      &_6_op_call,
      &op_call);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L1, currentOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L29, &_L1.odo);
  _L21 = cNoValidIndex_CalculateTrainPosition_Pkg;
  /* ck_linkingIsUsed */ if (_11_ck_every) {
    outC->_L6 = _7_op_call;
  }
  else {
    if (outC->init) {
      tmp5 = _L21;
    }
    else {
      tmp5 = outC->_L6;
    }
    outC->_L6 = tmp5;
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastPassedLinkedBG,
      &_L2[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastPassedLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L29,
    &lastPassedLinkedBG,
    &_L28);
  _L33 = _L28.nominal;
  _L34 = _L28.d_min;
  _L37 = _L33 + _L34;
  _L23 = cNoValidIndex_CalculateTrainPosition_Pkg;
  /* ck_linkingIsUsed */ if (ck_every) {
    outC->_L9 = _10_op_call;
  }
  else {
    if (outC->init) {
      tmp4 = _L23;
    }
    else {
      tmp4 = outC->_L9;
    }
    outC->_L9 = tmp4;
  }
  if ((0 <= outC->_L9) & (outC->_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      &_L2[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L30, &lastLinkedBG.location);
  _L38 = _L30.nominal;
  _L40 = _L30.d_max;
  _L39 = _L38 + _L40;
  _L41 = _L37 > _L39;
  _L46 = !_L41;
  _L22 = kcg_false;
  /* ck_linkingIsUsed */ if (_11_ck_every) {
    outC->_L7 = _6_op_call;
  }
  else {
    if (outC->init) {
      tmp3 = _L22;
    }
    else {
      tmp3 = outC->_L7;
    }
    outC->_L7 = tmp3;
  }
  _L27 = outC->_L6 < outC->_L9;
  _L24 = kcg_false;
  /* ck_linkingIsUsed */ if (ck_every) {
    outC->_L10 = _9_op_call;
  }
  else {
    if (outC->init) {
      tmp2 = _L24;
    }
    else {
      tmp2 = outC->_L10;
    }
    outC->_L10 = tmp2;
  }
  _L26 = outC->_L7 & _L27 & outC->_L10;
  _L47 = _L46 & _L26;
  outC->linkingIsUsed = _L47;
  /* ck_linkingIsUsed */ if (_11_ck_every) {
    outC->_L8 = op_call;
  }
  else {
    if (outC->init) {
      tmp1 = _L22;
    }
    else {
      tmp1 = outC->_L8;
    }
    outC->_L8 = tmp1;
  }
  /* ck_linkingIsUsed */ if (ck_every) {
    outC->_L11 = _8_op_call;
  }
  else {
    if (outC->init) {
      tmp = _L24;
    }
    else {
      tmp = outC->_L11;
    }
    outC->_L11 = tmp;
  }
  noname = outC->_L8;
  _12_noname = outC->_L11;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

