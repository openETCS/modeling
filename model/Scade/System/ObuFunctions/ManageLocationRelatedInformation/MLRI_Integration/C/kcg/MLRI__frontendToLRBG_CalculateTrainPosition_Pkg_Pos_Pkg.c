/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG */
MLRI__Q_DLRBG MLRI__frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::LRBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainPositionInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainOrientationToLRBG */ MLRI__Q_DIRLRBG trainOrientationToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L10 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */ MLRI__Q_DLRBG nominalOrReverseToLRBG;
  
  if ((*trainPositionInfo).valid & (*LRBG).valid &
    (*LRBG).infoFromPassing.valid) {
    trainOrientationToLRBG = (*LRBG).infoFromPassing.trainOrientationToBG;
  }
  else {
    trainOrientationToLRBG = MLRI__Q_DIRLRBG_Unknown;
  }
  IfBlock1_clock = trainOrientationToLRBG == MLRI__Q_DIRLRBG_Nominal;
  if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = trainOrientationToLRBG == MLRI__Q_DIRLRBG_Reverse;
  }
  /* 1 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &tmp);
  /* 1 */
  MLRI__sub_2_distances_BasicLocationFunctions_Pkg(
    &tmp,
    &(*LRBG).location,
    &_L10);
  if (IfBlock1_clock) {
    if (_L10.nominal > 0) {
      nominalOrReverseToLRBG = MLRI__Q_DLRBG_Nominal;
    }
    else {
      nominalOrReverseToLRBG = MLRI__Q_DLRBG_Reverse;
    }
  }
  else if (else_clock_IfBlock1) {
    if (_L10.nominal > 0) {
      nominalOrReverseToLRBG = MLRI__Q_DLRBG_Reverse;
    }
    else {
      nominalOrReverseToLRBG = MLRI__Q_DLRBG_Nominal;
    }
  }
  else {
    nominalOrReverseToLRBG = MLRI__Q_DLRBG_Unknown;
  }
  return nominalOrReverseToLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

