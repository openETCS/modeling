/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 5 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_5);
  /* 4 */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(&outC->Context_4);
  /* 3 */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(&outC->Context_3);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L27, &outC->_L1.infoFromPassing);
  outC->_L29 = outC->_L27.valid;
  outC->_L28 = outC->_L27.BG_Header.q_nvlocacc;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L25,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L26,
    &outC->_L25.centerDetectionAcc_DefaultValue);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L19, &outC->_L1.infoFromPassing);
  outC->_L20 = outC->_L19.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L19.BG_Header.BG_centerDetectionInaccuraccuracies);
  if (outC->_L20) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L24, &outC->_L21);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L24, &outC->_L26);
  }
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L3,
    &outC->_L1.infoFromLinking);
  outC->_L4 = outC->_L3.valid;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L6, &outC->_L3.linkingInfo);
  outC->_L5 = outC->_L6.q_scale;
  outC->_L8 = 0;
  outC->_L7 = outC->_L6.q_locacc;
  /* 3 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L5,
    outC->_L8,
    outC->_L7,
    &outC->Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9,
    &outC->Context_3.distance);
  outC->_L14 = Q_SCALE_1_m_scale;
  outC->_L13 = 0;
  /* 4 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L14,
    outC->_L13,
    outC->_L28,
    &outC->Context_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L12,
    &outC->Context_4.distance);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L2,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L15,
    &outC->_L2.locationAccuracy_DefaultValue);
  if (outC->_L29) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, &outC->_L12);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L16, &outC->_L15);
  }
  if (outC->_L4) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L10, &outC->_L9);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L10, &outC->_L16);
  }
  /* 5 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L24,
    &outC->_L10,
    &outC->Context_5);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L23,
    &outC->Context_5.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->localInaccuracies,
    &outC->_L23);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

