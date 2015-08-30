/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void improveUnlinkedBGLocation_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 1 */
  odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  outC_improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, unlinkedBG_in);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L52,
    &outC->_L28.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L24,
    passedLinkedBG_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L51,
    &outC->_L24.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L20,
    passedLinkedBG_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L48,
    &outC->_L20.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L9, unlinkedBG_in);
  outC->_L10 = outC->_L9.valid;
  outC->_L11 = outC->_L9.q_link;
  outC->_L12 = Q_LINK_Unlinked;
  outC->_L13 = outC->_L11 == outC->_L12;
  outC->_L47 = outC->_L10 & outC->_L13;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, passedLinkedBG_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, passedLinkedBG_1);
  outC->_L45 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L1,
      &outC->_L7);
  outC->_L8 = outC->_L7.valid;
  outC->_L39 = outC->_L7.q_link;
  outC->_L41 = Q_LINK_Linked;
  outC->_L40 = outC->_L39 == outC->_L41;
  outC->_L38 = outC->_L7.infoFromPassing.valid;
  outC->_L44 = outC->_L8 & outC->_L40 & outC->_L38;
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = outC->_L1.q_link;
  outC->_L4 = Q_LINK_Linked;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L37 = outC->_L1.infoFromPassing.valid;
  outC->_L43 = outC->_L2 & outC->_L5 & outC->_L37;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L36, unlinkedBG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L21, &outC->_L20.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L23, &outC->_L24.location);
  /* 1 */
  odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &outC->_L21,
    &outC->_L23,
    &outC->_L48,
    &outC->_L51,
    &outC->_L52,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L19,
    &outC->Context_1.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L32, &outC->_L28.location);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L19,
    &outC->_L32,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L30,
    &outC->_1_Context_1.loc);
  outC->_L31 = outC->_1_Context_1.overlap;
  outC->_L14 = outC->_L43 & outC->_L45 & outC->_L44 & outC->_L47 & outC->_L31;
  if (outC->_L14) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L34, &outC->_L30);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L34, &outC->_L32);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L35, &outC->_L36);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L35.location,
      &outC->_L34);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->unlinkedBG_out,
    &outC->_L35);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

