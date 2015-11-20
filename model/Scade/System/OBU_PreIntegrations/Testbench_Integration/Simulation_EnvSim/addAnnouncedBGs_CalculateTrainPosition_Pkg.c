/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */kcg_bool *overrun)
{
  static kcg_int i;
  static array__156522 tmp1;
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L12 */
  static kcg_int _L12;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L33 */
  static positionedBGs_T_TrainPosition_Types_Pck _L33;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L26 */
  static array__158690 _L26;
  
  _L11 = (*passedBG).valid & (*passedBG).linkedBGs[0].valid;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L11,
    (*passedBG).linkedBGs[0].nid_LRBG,
    &_L12,
    &i);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  tmp.valid = _L11;
  tmp.nid_c = _L12;
  tmp.nid_bg = i;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    BGs_in,
    _L11,
    &_L12,
    &_L13,
    &_L14);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L26[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if ((0 <= _L12) & (_L12 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs_in)[_L12]);
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
    (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *) &tmp1[0]);
  kcg_copy_array__158690(&tmp1[33], &_L26);
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    &tmp1,
    &_L33,
    overrun);
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&_L33, BGs_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

