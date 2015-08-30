/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    posInRangeOfBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */kcg_bool enable,
  outC_posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L3, BGs);
  outC->_L8 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, position);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L9[i1], &outC->_L2);
  }
  outC->_L4 = enable;
  outC->_L5 = outC->_L8;
  if (outC->_L4) {
    for (i = 0; i < 8; i++) {
      tmp = outC->_L5;
      /* 1 */
      posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp,
        &outC->_L9[i],
        &outC->_L3[i],
        &outC->Context_1[i]);
      outC->_L5 = outC->Context_1[i].indexOfBG;
      outC->_L7 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7 = 0;
  }
  if ((0 <= outC->_L5) & (outC->_L5 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      &outC->_L3[outC->_L5]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L12 = outC->_L10.valid;
  noname = outC->_L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &outC->_L10);
  outC->indexOfBG = outC->_L5;
  outC->isInRange = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

