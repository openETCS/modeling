/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"

/** Figures out the attributes of the current train position with reference to a given LRBG. */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::prevLRBG */ positionedBG_T_TrainPosition_Types_Pck *prevLRBG,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */ trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition)
{
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L260 */ NID_LRBG _L260;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L267 */ kcg_bool _L267;
  
  (*trainPosition).valid = (*trainPositionInfo).valid;
  (*trainPosition).timestamp = (*trainPositionInfo).timestamp;
  (*trainPosition).noCoordinateSystemHasBeenAssigned =
    (*LRBG).infoFromPassing.noCoordinateSystemHasBeenAssigned;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*trainPosition).trainPosition,
    &(*trainPositionInfo).trainPosition);
  (*trainPosition).nominalOrReverseToLRBG = Q_DLRBG_Nominal;
  (*trainPosition).trainOrientationToLRBG =
    (*LRBG).infoFromPassing.trainOrientationToBG;
  (*trainPosition).speed = (*trainPositionInfo).speed;
  _L260 = /* nidC_nidBG_2_NIDLRBG */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg(
      (*LRBG).valid,
      (*LRBG).nid_c,
      (*LRBG).nid_bg);
  (*trainPosition).nid_LRBG = _L260;
  _L267 = !(*LRBG).valid | (cNID_LRBG_unknown_BG_Types_Pkg == _L260);
  (*trainPosition).trainPositionIsUnknown = _L267;
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L243);
  (*trainPosition).estimatedFrontEndPosition = _L243.nominal;
  (*trainPosition).minSafeFrontEndPosition = _L243.d_min;
  (*trainPosition).maxSafeFrontEndPostion = _L243.d_max;
  (*trainPosition).nid_PrvLRB = /* 1 */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg(
      (*prevLRBG).valid,
      (*prevLRBG).nid_c,
      (*prevLRBG).nid_bg);
  if (_L267) {
    (*trainPosition).trainRunningDirectionToLRBG = Q_DIRTRAIN_Unknown;
  }
  else if ((((*LRBG).infoFromPassing.passingSpeed >= 0) &
      ((*trainPositionInfo).speed >= 0)) |
    (((*LRBG).infoFromPassing.passingSpeed < 0) & ((*trainPositionInfo).speed <
        0))) {
    (*trainPosition).trainRunningDirectionToLRBG =
      (*LRBG).infoFromPassing.trainRunningDirectionToBG;
  }
  else if ((*LRBG).infoFromPassing.trainRunningDirectionToBG ==
    Q_DIRTRAIN_Nominal) {
    (*trainPosition).trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  }
  else {
    (*trainPosition).trainRunningDirectionToLRBG = Q_DIRTRAIN_Nominal;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

