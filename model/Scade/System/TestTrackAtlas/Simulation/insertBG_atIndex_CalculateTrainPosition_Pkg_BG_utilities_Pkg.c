/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    insertBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_1_Context_1[i]);
  }
  /* 1 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */kcg_bool insert,
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  outC->_L1 = insert;
  outC->_L3 = indexOfBG;
  outC->_L5 = 0;
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L6 = outC->_L3 < outC->_L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L19, BG);
  outC->_L27 = outC->_L19.valid;
  outC->_L8 = outC->_L1 & outC->_L4 & outC->_L6 & outC->_L27;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  outC->_L23 = indexOfBG;
  if ((0 <= outC->_L23) & (outC->_L23 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L22,
      &outC->_L2[outC->_L23]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L22,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L26, BG);
  /* 1 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L22,
    &outC->_L26,
    &outC->Context_1);
  outC->_L25 = outC->Context_1.idsEqual;
  outC->_L31 = !outC->_L25;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L29, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, &outC->_L29[7]);
  outC->_L30 = outC->_L28.valid;
  outC->_L32 = outC->_L31 & outC->_L30;
  outC->_L33 = !outC->_L32;
  outC->_L34 = outC->_L8 & outC->_L33;
  outC->overrun = outC->_L32;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L11,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  for (i3 = 0; i3 < 1; i3++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12[i3],
      &outC->_L11);
  }
  kcg_copy_array__17543(&outC->_L10, (array__17543 *) &outC->_L2[0]);
  kcg_copy_array__17546(&outC->_L13[0], &outC->_L12);
  kcg_copy_array__17543(&outC->_L13[1], &outC->_L10);
  if (outC->_L25) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L2);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L13);
  }
  for (i2 = 0; i2 < 8; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L20[i2],
      &outC->_L19);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, BGs_in);
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L9[i1] = outC->_L3;
  }
  if (outC->_L34) {
    for (i = 0; i < 8; i++) {
      /* 1 */
      insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        outC->_L9[i],
        &outC->_L20[i],
        &outC->_L2[i],
        &outC->_L21[i],
        &outC->_1_Context_1[i]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L15[i],
        &outC->_1_Context_1[i].BG_out);
      outC->_L16 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L16; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (outC->_L34) {
    kcg_copy_array__16894(&outC->_L17, &outC->_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L18);
  }
  noname = outC->_L16;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

