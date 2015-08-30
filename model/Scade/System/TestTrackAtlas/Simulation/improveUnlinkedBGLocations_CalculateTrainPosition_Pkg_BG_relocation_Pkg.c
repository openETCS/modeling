/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    _6_improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_1_Context_1[i]);
  }
  /* 1 */
  findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L12 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L3, BGs_in);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L8[i1],
      &outC->_L3);
  }
  /* 1 */
  findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L3,
    &outC->Context_1);
  kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->Context_1.BGs_indices);
  if (outC->_L12) {
    for (i = 0; i < 8; i++) {
      /* 1 */
      _6_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
        &outC->_L2[i],
        &outC->_L8[i],
        &outC->_1_Context_1[i]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L5[i],
        &outC->_1_Context_1[i].BG_out);
      outC->_L6 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L6 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L6; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L6;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

