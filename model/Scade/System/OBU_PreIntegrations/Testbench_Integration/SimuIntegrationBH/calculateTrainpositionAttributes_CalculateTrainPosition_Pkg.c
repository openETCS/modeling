/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */ trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition)
{
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L205 */
  static trainPosition_T_TrainPosition_Types_Pck _L205;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L218 */
  static trainPositionInfo_T_TrainPosition_Types_Pck _L218;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L219 */
  static kcg_bool _L219;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L223 */
  static kcg_bool _L223;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L225 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L225;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L237 */
  static trainProperties_T_TrainPosition_Types_Pck _L237;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L242 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L242;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L249 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L249;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L248 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L248;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L247 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L247;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L260 */
  static NID_LRBG _L260;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L261 */
  static kcg_bool _L261;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L262 */
  static NID_C _L262;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L263 */
  static NID_BG _L263;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L266 */
  static kcg_bool _L266;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L267 */
  static kcg_bool _L267;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L268 */
  static NID_LRBG _L268;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L269 */
  static kcg_bool _L269;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L274 */
  static Q_DIRLRBG _L274;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L301 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L301;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L305 */
  static odometry_T_Obu_BasicTypes_Pkg _L305;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L306 */
  static Q_DLRBG _L306;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L307 */
  static trainProperties_T_TrainPosition_Types_Pck _L307;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L310 */
  static kcg_bool _L310;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L311 */
  static Q_DIRLRBG _L311;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L312 */
  static Q_DIRLRBG _L312;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L315 */
  static kcg_int _L315;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L316 */
  static kcg_int _L316;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L320 */
  static positionedBG_T_TrainPosition_Types_Pck _L320;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L343 */
  static trainPositionInfo_T_TrainPosition_Types_Pck _L343;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L344 */
  static kcg_bool _L344;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L346 */
  static positionedBG_T_TrainPosition_Types_Pck _L346;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L347 */
  static Q_DIRTRAIN _L347;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L365 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L365;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L366 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L366;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L367 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L367;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L368 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L368;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L369 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L369;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L370 */
  static kcg_int _L370;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L371 */
  static kcg_int _L371;
  
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &_L218,
    trainPositionInfo);
  _L219 = _L218.valid;
  _L301 = _L218.timestamp;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L320,
    &_L218.lastPassedLinkedBG);
  _L261 = _L320.valid;
  _L266 = !_L261;
  _L262 = _L320.nid_c;
  _L263 = _L320.nid_bg;
  _L260 = /* nidC_nidBG_2_NIDLRBG */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L261,
      _L262,
      _L263);
  _L268 = cNID_LRBG_unknown_BG_Types_Pkg;
  _L269 = _L260 == _L268;
  _L267 = _L266 | _L269;
  _L223 = _L320.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
  _L310 = _L266 | _L223;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L225, &_L218.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L237, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L242,
    &_L237.d_baliseAntenna_2_frontend);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L225, &_L242, &_L243);
  _L247 = _L243.nominal;
  _L248 = _L243.d_min;
  _L315 = _L247 + _L248;
  _L249 = _L243.d_max;
  _L316 = _L247 + _L249;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L346,
    &_L218.prevPassedLinkedBG);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L307, trainProperties);
  _L306 = /* 1 */
    frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(&_L320, &_L218, &_L307);
  _L311 = Q_DIRLRBG_Unknown;
  _L274 = _L320.infoFromPassing.BG_Header.trainOrientationToBG;
  /* 1 */ if (_L266) {
    _L312 = _L311;
  }
  else {
    _L312 = _L274;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L305, currentOdometry);
  _L347 = /* 1 */
    trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(&_L305, &_L320);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &_L343,
    trainPositionInfo);
  _L344 = _L343.linkingIsUsedOnboard;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L365,
    &_L237.d_frontend_2_rearend);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L243, &_L365, &_L366);
  _L367 = _L366.nominal;
  _L368 = _L366.d_min;
  _L370 = _L367 + _L368;
  _L369 = _L366.d_max;
  _L371 = _L367 + _L369;
  _L205.valid = _L219;
  _L205.timestamp = _L301;
  _L205.trainPositionIsUnknown = _L267;
  _L205.noCoordinateSystemHasBeenAssigned = _L310;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L205.trainPosition, &_L225);
  _L205.estimatedFrontEndPosition = _L247;
  _L205.minSafeFrontEndPosition = _L315;
  _L205.maxSafeFrontEndPostion = _L316;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L205.LRBG, &_L320);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L205.prvLRBG, &_L346);
  _L205.nominalOrReverseToLRBG = _L306;
  _L205.trainOrientationToLRBG = _L312;
  _L205.trainRunningDirectionToLRBG = _L347;
  _L205.linkingIsUsedOnboard = _L344;
  _L205.estimatedRearEndPosition = _L367;
  _L205.minSafeRearEndPosition = _L370;
  _L205.maxSafeRearEndPosition = _L371;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(trainPosition, &_L205);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

