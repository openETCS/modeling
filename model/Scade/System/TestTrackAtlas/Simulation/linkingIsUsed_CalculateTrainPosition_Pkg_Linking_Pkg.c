/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  indexOfLastBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  indexOfLastPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  kcg_bool tmp5;
  kcg_bool tmp4;
  kcg_bool tmp3;
  kcg_bool tmp2;
  kcg_int tmp1;
  kcg_int tmp;
  kcg_bool tmp9;
  kcg_bool tmp10;
  kcg_int tmp11;
  kcg_bool tmp6;
  kcg_bool tmp7;
  kcg_int tmp8;
  kcg_bool noname;
  kcg_bool _12_noname;
  
  outC->_L3 = recalculateBGs;
  outC->tmp3 = outC->_L3;
  outC->_L18 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  if (outC->tmp3) {
    /* 1 */
    indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L18,
      &outC->_L2,
      outC->_L3,
      &outC->Context_1);
    tmp11 = outC->Context_1.indexOfBG;
    tmp10 = outC->Context_1.BG_found;
    tmp9 = outC->Context_1.indexValid;
  }
  outC->_L22 = kcg_false;
  if (outC->tmp3) {
    outC->_L8 = tmp9;
    outC->_L7 = tmp10;
  }
  else {
    if (outC->init) {
      tmp5 = outC->_L22;
    }
    else {
      tmp5 = outC->_L8;
    }
    outC->_L8 = tmp5;
    if (outC->init) {
      tmp4 = outC->_L22;
    }
    else {
      tmp4 = outC->_L7;
    }
    outC->_L7 = tmp4;
  }
  outC->tmp = outC->_L3;
  outC->_L19 = kcg_true;
  if (outC->tmp) {
    /* 1 */
    indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L19,
      &outC->_L2,
      outC->_L3,
      &outC->_1_Context_1);
    tmp8 = outC->_1_Context_1.indexOfBG;
    tmp7 = outC->_1_Context_1.BG_found;
    tmp6 = outC->_1_Context_1.indexValid;
  }
  outC->_L24 = kcg_false;
  if (outC->tmp) {
    outC->_L11 = tmp6;
    outC->_L10 = tmp7;
  }
  else {
    if (outC->init) {
      tmp3 = outC->_L24;
    }
    else {
      tmp3 = outC->_L11;
    }
    outC->_L11 = tmp3;
    if (outC->init) {
      tmp2 = outC->_L24;
    }
    else {
      tmp2 = outC->_L10;
    }
    outC->_L10 = tmp2;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1, currentOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L29, &outC->_L1.odo);
  outC->_L21 = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (outC->tmp3) {
    outC->_L6 = tmp11;
  }
  else {
    if (outC->init) {
      tmp1 = outC->_L21;
    }
    else {
      tmp1 = outC->_L6;
    }
    outC->_L6 = tmp1;
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastPassedLinkedBG,
      &outC->_L2[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastPassedLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L29,
    &outC->lastPassedLinkedBG,
    &outC->_2_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L28,
    &outC->_2_Context_1.position);
  outC->_L33 = outC->_L28.nominal;
  outC->_L34 = outC->_L28.d_min;
  outC->_L37 = outC->_L33 + outC->_L34;
  outC->_L23 = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (outC->tmp) {
    outC->_L9 = tmp8;
  }
  else {
    if (outC->init) {
      tmp = outC->_L23;
    }
    else {
      tmp = outC->_L9;
    }
    outC->_L9 = tmp;
  }
  if ((0 <= outC->_L9) & (outC->_L9 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastLinkedBG,
      &outC->_L2[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L30,
    &outC->lastLinkedBG.location);
  outC->_L38 = outC->_L30.nominal;
  outC->_L40 = outC->_L30.d_max;
  outC->_L39 = outC->_L38 + outC->_L40;
  outC->_L41 = outC->_L37 > outC->_L39;
  outC->_L46 = !outC->_L41;
  outC->_L27 = outC->_L6 < outC->_L9;
  outC->_L26 = outC->_L7 & outC->_L27 & outC->_L10;
  outC->_L47 = outC->_L46 & outC->_L26;
  _12_noname = outC->_L11;
  noname = outC->_L8;
  outC->linkingIsUsed = outC->_L47;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

