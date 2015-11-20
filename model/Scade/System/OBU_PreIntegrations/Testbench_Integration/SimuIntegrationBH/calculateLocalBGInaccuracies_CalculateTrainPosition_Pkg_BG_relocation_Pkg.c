/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */ LocWithInAcc_T_Obu_BasicTypes_Pkg *localInaccuracies)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L2 */
  static trainProperties_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L3 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L5 */
  static Q_SCALE _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L6 */
  static LinkedBG_T_BG_Types_Pkg _L6;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L7 */
  static Q_LOCACC _L7;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L9 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L12 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L12;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L13 */
  static kcg_int _L13;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L14 */
  static Q_SCALE _L14;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L15 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L15;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L16 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L16;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L19 */
  static passedBG_T_BG_Types_Pkg _L19;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L20 */
  static kcg_bool _L20;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L21 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L21;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L23 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L23;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L24 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L25 */
  static trainProperties_T_TrainPosition_Types_Pck _L25;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L26 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L26;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L27 */
  static passedBG_T_BG_Types_Pkg _L27;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L28 */
  static Q_NVLOCACC _L28;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::_L29 */
  static kcg_bool _L29;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L2, trainProperties);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, BG_in);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L3,
    &_L1.infoFromLinking);
  _L4 = _L3.valid;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L6, &_L3.linkingInfo);
  _L5 = _L6.q_scale;
  _L7 = _L6.q_locacc;
  _L8 = 0;
  /* 3 */ scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(_L5, _L8, _L7, &_L9);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L27, &_L1.infoFromPassing);
  _L29 = _L27.valid;
  _L14 = Q_SCALE_1_m_scale;
  _L13 = 0;
  _L28 = _L27.BG_Header.q_nvlocacc;
  /* 4 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(_L14, _L13, _L28, &_L12);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L15,
    &_L2.locationAccuracy_DefaultValue);
  /* 32 */ if (_L29) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L16, &_L12);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L16, &_L15);
  }
  /* 31 */ if (_L4) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L10, &_L9);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L10, &_L16);
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L19, &_L1.infoFromPassing);
  _L20 = _L19.valid;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L21,
    &_L19.BG_Header.BG_centerDetectionInaccuraccuracies);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L25, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L26,
    &_L25.centerDetectionAcc_DefaultValue);
  /* 34 */ if (_L20) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L24, &_L21);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L24, &_L26);
  }
  /* 5 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L24, &_L10, &_L23);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(localInaccuracies, &_L23);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

