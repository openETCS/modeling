/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void _6_improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC__6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 1 */
  improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
void _6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_index_in */linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BG_index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC__6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_in);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L4,
    BG_index_in);
  outC->_L9 = outC->_L4.subsequentLinkedBG_idx;
  if ((0 <= outC->_L9) & (outC->_L9 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      &outC->_L1[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L10 = outC->_L4.previousLinkedBG_idx;
  if ((0 <= outC->_L10) & (outC->_L10 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L16,
      &outC->_L1[outC->_L10]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L16,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L5 = outC->_L4.currentIndex;
  if ((0 <= outC->_L5) & (outC->_L5 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L2,
      &outC->_L1[outC->_L5]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L17,
    &outC->_L16,
    &outC->_L2,
    &outC->Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L15,
    &outC->Context_1.unlinkedBG_out);
  outC->_L8 = outC->_L2.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L15);
  outC->cont = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

