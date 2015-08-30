/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 4; i++) {
    /* 1 */
    positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i2;
  kcg_int i1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  kcg_int i;
  LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L8,
    trainProperties);
  for (i2 = 0; i2 < 4; i2++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L9[i2],
      &outC->_L8);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L7,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L1,
    passedPositionedBG);
  for (i1 = 0; i1 < 4; i1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4[i1], &outC->_L1);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L2, linkedBGs);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L6, &outC->_L7);
  for (i = 0; i < 4; i++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&tmp, &outC->_L6);
    /* 1 */
    positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      &outC->_L4[i],
      &outC->_L2[i],
      &outC->_L9[i],
      &outC->Context_1[i]);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L6,
      &outC->Context_1[i].sumOfLinkingDistances);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L3[i],
      &outC->Context_1[i].linkedPositionedBG);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L6);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->linkedPositionedBGs,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

