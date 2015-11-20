/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */ OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */ positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *_2_position)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _1_position;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::then::_L20 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L20_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::then::_L15 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L15_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::then::_L17 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L17_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::then::_L18 */
  static positionedBG_T_TrainPosition_Types_Pck _L18_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::then::_L19 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L19_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg position;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::else::_L5 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L5_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::else::_L4 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L4_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1::else::_L3 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L3_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*passedRefBG).valid & (*passedRefBG).infoFromPassing.valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L18_IfBlock1,
      passedRefBG);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_L19_IfBlock1,
      &_L18_IfBlock1.location);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L20_IfBlock1,
      &_L18_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L17_IfBlock1,
      odoPosition);
    /* 6 */
    add_odo_2_Location_BasicLocationFunctions_Pkg(
      &_L19_IfBlock1,
      &_L20_IfBlock1,
      &_L17_IfBlock1,
      &_L15_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_1_position, &_L15_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(_2_position, &_1_position);
  }
  else {
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L4_IfBlock1, odoPosition);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L5_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    /* 1 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &_L4_IfBlock1,
      &_L5_IfBlock1,
      &_L3_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&position, &_L3_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(_2_position, &position);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

