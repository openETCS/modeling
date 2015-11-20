/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static Q_LINK tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L17 */
  static positionedBG_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L21 */
  static kcg_int _L21;
  
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L17,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L17, &outC->lastBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &outC->prvBG_loc);
  }
  if (reset) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->prvBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    if (linked) {
      tmp = Q_LINK_Linked;
    }
    else {
      tmp = Q_LINK_Unlinked;
    }
    if ((*BG).valid & (*BG).infoFromPassing.valid &
      (*BG).infoFromPassing.BG_Header.valid & ((*BG).q_link == tmp)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, BG);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, &_L17);
    }
    _L23 = /* 1 */
      positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->lastBG,
        &_L10);
    _L22 = /* 2 */
      positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->lastBG,
        &_L17);
    if (!kcg_comp_positionedBG_T_TrainPosition_Types_Pck(&_L17, &outC->lastBG) &
      outC->lastBG.valid & !_L23 & !_L22) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &_L17);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &_L10);
    }
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->prvBG_loc,
    BGs,
    enable,
    &_L21,
    &_L22,
    &_L23);
  if (_L22) {
    if ((0 <= _L21) & (_L21 < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->prvBG,
        &(*BGs)[_L21]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->prvBG,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->prvBG,
      &outC->prvBG_loc);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

