/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  nidBG_nidc_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
void positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */positionedBG_T_TrainPosition_Types_Pck *bg_1,
  outC_positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, bg_2);
  outC->_L9 = outC->_L1.valid;
  outC->_L4 = outC->_L1.nid_c;
  outC->_L5 = outC->_L1.nid_bg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, bg_1);
  outC->_L6 = outC->_L2.nid_c;
  outC->_L7 = outC->_L2.nid_bg;
  /* 1 */
  nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L7,
    &outC->Context_1);
  outC->_L3 = outC->Context_1.isEqual;
  outC->_L8 = outC->_L2.valid;
  outC->_L10 = outC->_L9 & outC->_L3 & outC->_L8;
  outC->idsEqual = outC->_L10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

