/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */ sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 6 */ add_odo_2_Location_reset_BasicLocationFunctions_Pkg(&outC->Context_6);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg _1_position;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg position;
  
  outC->IfBlock1_clock = (*passedRefBG).valid &
    (*passedRefBG).infoFromPassing.valid;
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L18_IfBlock1,
      passedRefBG);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L20_IfBlock1,
      &outC->_L18_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L19_IfBlock1,
      &outC->_L18_IfBlock1.location);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L17_IfBlock1,
      odoPosition);
    /* 6 */
    add_odo_2_Location_BasicLocationFunctions_Pkg(
      &outC->_L19_IfBlock1,
      &outC->_L20_IfBlock1,
      &outC->_L17_IfBlock1,
      &outC->Context_6);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L15_IfBlock1,
      &outC->Context_6.location);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_1_position,
      &outC->_L15_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->position, &_1_position);
  }
  else {
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L4_IfBlock1,
      odoPosition);
    /* 1 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &outC->_L4_IfBlock1,
      &outC->_L5_IfBlock1,
      &outC->Context_1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L3_IfBlock1,
      &outC->Context_1.distance);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&position, &outC->_L3_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->position, &position);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

