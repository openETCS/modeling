/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck lastLinkedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L28 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L28;
  
  if (recalculateBGs) {
    /* 1 */
    indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      BGs,
      recalculateBGs,
      &outC->_L6,
      &outC->_L7,
      &tmp1);
    /* 1 */
    indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      BGs,
      recalculateBGs,
      &outC->_L9,
      &outC->_L10,
      &tmp);
  }
  else if (outC->init) {
    outC->_L10 = kcg_false;
    outC->_L7 = kcg_false;
    outC->_L6 = cNoValidIndex_CalculateTrainPosition_Pkg;
    outC->_L9 = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      &(*BGs)[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &lastLinkedBG,
    &_L28);
  outC->init = kcg_false;
  if ((0 <= outC->_L9) & (outC->_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      &(*BGs)[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->linkingIsUsed = !(_L28.nominal + _L28.d_min >
      lastLinkedBG.location.nominal + lastLinkedBG.location.d_max) &
    (outC->_L7 & (outC->_L6 < outC->_L9) & outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

