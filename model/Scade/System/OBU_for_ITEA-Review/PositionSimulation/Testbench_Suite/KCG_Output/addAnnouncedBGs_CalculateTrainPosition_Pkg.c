/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */ kcg_bool *overrun)
{
  kcg_int i;
  positionedBGs_T_TrainPosition_Types_Pck tmp2;
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck tmp1;
  positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L10 */ NID_BG _L10;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L9 */ NID_C _L9;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L11 */ kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L14 */ kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L13 */ kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L33 */ positionedBGs_T_TrainPosition_Types_Pck _L33;
  
  _L11 = (*passedBG).valid & (*passedBG).linkedBGs[0].valid;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L11,
    (*passedBG).linkedBGs[0].nid_LRBG,
    &_L9,
    &_L10);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  tmp.valid = _L11;
  tmp.nid_c = _L9;
  tmp.nid_bg = _L10;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    BGs_in,
    _L11,
    &i,
    &_L13,
    &_L14);
  if ((0 <= i) & (i < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs_in)[i]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    &(*passedBG).linkedBGs,
    trainProperties,
    &tmp1);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(&tmp2[0], &tmp1);
  for (i = 0; i < 4; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(&tmp2[4])[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    &tmp2,
    &_L33,
    overrun);
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L33, BGs_out);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

