/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h"

void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L22 = kcg_true;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  outC->_L9 = outC->_L1.valid;
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L2,
    outC->_L9,
    &outC->Context_1);
  outC->_L4 = outC->Context_1.indexOfBG;
  outC->_L5 = outC->Context_1.BG_found;
  outC->_L6 = outC->Context_1.indexValid;
  outC->_L14 = !outC->_L5;
  _1_noname = outC->_L14;
  if ((0 <= outC->_L4) & (outC->_L4 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8,
      &outC->_L2[outC->_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L10 = outC->_L8.valid;
  outC->_L11 = outC->_L8.infoFromPassing.valid;
  outC->_L12 = outC->_L10 & outC->_L11 & outC->_L5;
  outC->keepPassedBGSeqNo = outC->_L12;
  outC->_L16 = outC->keepPassedBGSeqNo;
  outC->_L20 = outC->_L8.seqNoOnTrack;
  outC->_L17 = !outC->_L16;
  outC->_L13 = outC->_L22 & outC->_L9;
  outC->incrPassedBGSeqNo = outC->_L13;
  outC->_L15 = outC->incrPassedBGSeqNo;
  outC->_L18 = outC->_L17 & outC->_L15;
  outC->_L3 = reset;
  /* 1 */
  countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
    outC->_L18,
    outC->_L3,
    &outC->_1_Context_1);
  outC->_L19 = outC->_1_Context_1.counter;
  if (outC->_L16) {
    outC->_L21 = outC->_L20;
  }
  else {
    outC->_L21 = outC->_L19;
  }
  outC->seqNo = outC->_L21;
  noname = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

