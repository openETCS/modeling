/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 1 */
  improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  _7_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  _9_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L39,
    trainProperties);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, referenceBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_in);
  /* 1 */
  _9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->_L1,
    &outC->_L39,
    &outC->Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L33,
    &outC->Context_1.BGs_out);
  /* 1 */
  _7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->_L33,
    &outC->_L39,
    &outC->_1_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L34,
    &outC->_1_Context_1.BGs_out);
  /* 1 */
  improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L34,
    &outC->_2_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L38,
    &outC->_2_Context_1.BGs_out);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L38);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

