/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG _1_nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L6 */
  static Q_DLRBG _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L5 */
  static Q_DLRBG _L5_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L4 */
  static Q_DLRBG _L4_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::then::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::else::_L1 */
  static Q_DLRBG _L16_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG _2_nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L9 */
  static Q_DLRBG _L9_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L8 */
  static Q_DLRBG _L8_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L7 */
  static Q_DLRBG _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L6 */
  static kcg_int _L65_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1::else::then::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG _3_nominalOrReverseToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::estimated_d_LRBGToFrontend */
  static L_internal_Type_Obu_BasicTypes_Pkg estimated_d_LRBGToFrontend;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::trainOrientationToLRBG */
  static Q_DIRLRBG trainOrientationToLRBG;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L1 */
  static trainPositionInfo_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L3 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L3;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L4 */
  static trainProperties_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L5 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L5;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L9 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L9;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L12 */
  static passedBG_T_BG_Types_Pkg _L12;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L14 */
  static Q_DIRLRBG _L14;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L17 */
  static Q_DIRLRBG _L17;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::_L19 */
  static Q_DIRLRBG _L19;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::frontendToLRBG::nominalOrReverseToLRBG */
  static Q_DLRBG _7_nominalOrReverseToLRBG;
  
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(&_L1, trainPositionInfo);
  _L2 = _L1.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L3, &_L1.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L4, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L5,
    &_L4.d_baliseAntenna_2_frontend);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L3, &_L5, &_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, LRBG);
  _L8 = _L7.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L9, &_L7.location);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L6, &_L9, &_L10);
  _L11 = _L10.nominal;
  estimated_d_LRBGToFrontend = _L11;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L12, &_L7.infoFromPassing);
  _L13 = _L12.valid;
  _L14 = _L12.BG_Header.trainOrientationToBG;
  _L18 = _L2 & _L8 & _L13;
  _L17 = Q_DIRLRBG_Unknown;
  /* 1 */ if (_L18) {
    _L19 = _L14;
  }
  else {
    _L19 = _L17;
  }
  trainOrientationToLRBG = _L19;
  IfBlock1_clock = trainOrientationToLRBG == Q_DIRLRBG_Nominal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = estimated_d_LRBGToFrontend;
    _L3_IfBlock1 = 0;
    _L2_IfBlock1 = _L1_IfBlock1 > _L3_IfBlock1;
    _L5_IfBlock1 = Q_DLRBG_Nominal;
    _L6_IfBlock1 = Q_DLRBG_Reverse;
    /* 2 */ if (_L2_IfBlock1) {
      _L4_IfBlock1 = _L5_IfBlock1;
    }
    else {
      _L4_IfBlock1 = _L6_IfBlock1;
    }
    _1_nominalOrReverseToLRBG = _L4_IfBlock1;
    _7_nominalOrReverseToLRBG = _1_nominalOrReverseToLRBG;
  }
  else {
    else_clock_IfBlock1 = trainOrientationToLRBG == Q_DIRLRBG_Reverse;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L54_IfBlock1 = estimated_d_LRBGToFrontend;
      _L65_IfBlock1 = 0;
      _L10_IfBlock1 = _L54_IfBlock1 > _L65_IfBlock1;
      _L9_IfBlock1 = Q_DLRBG_Reverse;
      _L8_IfBlock1 = Q_DLRBG_Nominal;
      /* 4 */ if (_L10_IfBlock1) {
        _L7_IfBlock1 = _L9_IfBlock1;
      }
      else {
        _L7_IfBlock1 = _L8_IfBlock1;
      }
      _3_nominalOrReverseToLRBG = _L7_IfBlock1;
      nominalOrReverseToLRBG = _3_nominalOrReverseToLRBG;
    }
    else {
      _L16_IfBlock1 = Q_DLRBG_Unknown;
      _2_nominalOrReverseToLRBG = _L16_IfBlock1;
      nominalOrReverseToLRBG = _2_nominalOrReverseToLRBG;
    }
    _7_nominalOrReverseToLRBG = nominalOrReverseToLRBG;
  }
  return _7_nominalOrReverseToLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

