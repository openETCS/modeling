/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"

void prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  indexOfLastPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::last_BGs */positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  kcg_bool noname;
  
  outC->_L72 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L63, last_BGs);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L68, passedBG);
  outC->_L67 = outC->_L68.valid;
  /* 1 */
  indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L72,
    &outC->_L63,
    outC->_L67,
    &outC->Context_1);
  outC->_L60 = outC->Context_1.indexOfBG;
  outC->_L61 = outC->Context_1.BG_found;
  outC->_L62 = outC->Context_1.indexValid;
  noname = outC->_L62;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L71,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if ((0 <= outC->_L60) & (outC->_L60 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L64,
      &outC->_L63[outC->_L60]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L64,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L45 = outC->_L64.nid_c;
  outC->_L46 = outC->_L64.nid_bg;
  outC->_L49 = outC->_L68.BG_Header.nid_c;
  outC->_L50 = outC->_L68.BG_Header.nid_bg;
  /* 1 */
  nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L45,
    outC->_L46,
    outC->_L49,
    outC->_L50,
    &outC->_1_Context_1);
  outC->_L42 = outC->_1_Context_1.isEqual;
  outC->_L55 = !outC->_L42;
  outC->_L69 = outC->_L61 & outC->_L55;
  if (outC->_L69) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &outC->_L64);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &outC->_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->previouslyPassedBG,
    &outC->_L70);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

