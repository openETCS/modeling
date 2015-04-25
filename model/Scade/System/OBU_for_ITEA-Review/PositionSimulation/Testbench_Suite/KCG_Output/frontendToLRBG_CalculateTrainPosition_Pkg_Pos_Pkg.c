/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
Q_DLRBG frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainPositionInfo */ trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainOrientationToLRBG */ Q_DIRLRBG trainOrientationToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L10 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ Q_DLRBG nominalOrReverseToLRBG;
  
  if ((*trainPositionInfo).valid & (*LRBG).valid &
    (*LRBG).infoFromPassing.valid) {
    trainOrientationToLRBG =
      (*LRBG).infoFromPassing.BG_Header.trainOrientationToBG;
  }
  else {
    trainOrientationToLRBG = Q_DIRLRBG_Unknown;
  }
  IfBlock1_clock = trainOrientationToLRBG == Q_DIRLRBG_Nominal;
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &tmp);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(&tmp, &(*LRBG).location, &_L10);
  if (IfBlock1_clock) {
    if (_L10.nominal > 0) {
      nominalOrReverseToLRBG = Q_DLRBG_Nominal;
    }
    else {
      nominalOrReverseToLRBG = Q_DLRBG_Reverse;
    }
  }
  else {
    else_clock_IfBlock1 = trainOrientationToLRBG == Q_DIRLRBG_Reverse;
    if (else_clock_IfBlock1) {
      if (_L10.nominal > 0) {
        nominalOrReverseToLRBG = Q_DLRBG_Reverse;
      }
      else {
        nominalOrReverseToLRBG = Q_DLRBG_Nominal;
      }
    }
    else {
      nominalOrReverseToLRBG = Q_DLRBG_Unknown;
    }
  }
  return nominalOrReverseToLRBG;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

