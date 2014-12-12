/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__passing_a_BG_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Provides the location calculations while passing a BG - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::passing_a_BG */
void MLRI__passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /** The passed and positioned balise group. */
  /** If the BG was announced by linking information previously, the linking and the passing information are merged together. */
  /** If the BG was not announced before, only the passing information is evaluated. */
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::notFoundWhereAnnounced */kcg_bool *notFoundWhereAnnounced)
{
  MLRI__positionedBG_T_TrainPosition_Types_Pck tmp1;
  kcg_int i;
  MLRI__array__21407 tmp;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */ MLRI__positionedBGs_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */ kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L20 */ MLRI__array__21481 _L20;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L21 */ MLRI__positionedBGs_T_TrainPosition_Types_Pck _L21;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */ kcg_bool _L22;
  
  /* 1 */
  MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedBG,
    BGs_in,
    (*passedBG).valid,
    &i,
    &_L22,
    &_L17);
  if (_L22) {
    if ((0 <= i) & (i < 8)) {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp1,
        &(*BGs_in)[i]);
    }
    else {
      MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp1,
        (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
          &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  MLRI__passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp1,
    previouslyPassedLinkedBG,
    passedBGSeqNo,
    trainProperties,
    passedPositionedBG,
    notFoundWhereAnnounced,
    (MLRI__linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *) &tmp[0]);
  /* 2 */
  MLRI__mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedPositionedBG,
    BGs_in,
    &_L16,
    &_L17);
  for (i = 0; i < 4; i++) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L20[i],
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  MLRI__kcg_copy_array__21481(&tmp[4], &_L20);
  /* 1 */
  MLRI__mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L16,
    &tmp,
    &_L21,
    &_L22);
  /* 1 */
  MLRI__trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L21,
    BGs_out);
  *overrun = _L22 | _L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

