/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Provides the location calculations while passing a BG - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::passing_a_BG */
void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /** The passed and positioned balise group. */
  /** If the BG was announced by linking information previously, the linking and the passing information are merged together. */
  /** If the BG was not announced before, only the passing information is evaluated. */
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::notFoundWhereAnnounced */ kcg_bool *notFoundWhereAnnounced)
{
  kcg_int i;
  positionedBG_T_TrainPosition_Types_Pck tmp1;
  positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L7 */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */ positionedBGs_T_TrainPosition_Types_Pck _L16;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */ kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */ kcg_bool _L22;
  
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg(
    passedBG,
    BGs_in,
    (*passedBG).valid,
    &i,
    &_L22,
    &_L17);
  if (_L22) {
    if ((0 <= i) & (i < 64)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &(*BGs_in)[i]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &tmp1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp1,
    previouslyPassedLinkedBG,
    passedPositionedBG,
    notFoundWhereAnnounced,
    &_L7);
  /* 1 */
  mergeBG_by_id_CalculateTrainPosition_Pkg(
    passedPositionedBG,
    BGs_in,
    &_L16,
    &_L17);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(&tmp[0], &_L7);
  for (i = 0; i < 32; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(&tmp[32])[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  mergeBGs_by_id_CalculateTrainPosition_Pkg(&_L16, &tmp, BGs_out, &_L22);
  *overrun = _L22 | _L17;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

