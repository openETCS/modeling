/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L52 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L52;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L67 */
  static kcg_int _L67;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_L52,
      (LocWithInAcc_T_Obu_BasicTypes_Pkg *)
        &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->BG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    outC->indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L52, &outC->rem_position);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &outC->_L3);
    outC->indexOfBG = outC->_L2;
  }
  /* 2 */ sub_2_distances_BasicLocationFunctions_Pkg(position, &_L52, &tmp);
  _L1 = tmp.nominal >= 0;
  if (_L1) {
    tmp.nominal = (*position).nominal;
    tmp.d_min = _L52.nominal + _L52.d_min - (*position).nominal;
    tmp.d_max = (*position).d_max;
  }
  else {
    tmp.nominal = (*position).nominal;
    tmp.d_min = (*position).d_min;
    tmp.d_max = _L52.nominal + _L52.d_max - (*position).nominal;
  }
  /* 1 */
  posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    BGs_in,
    enable,
    &_L1,
    &outC->_L2,
    &outC->_L3);
  /* 1 */ FallingEdge_digital(_L1, &outC->Context_1);
  outC->missed = ((/* 1 */
        positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
          &outC->_L3,
          &outC->BG) & _L1) | outC->Context_1.FE_Output) & (outC->BG.q_link ==
      Q_LINK_Linked) & !outC->BG.infoFromPassing.valid;
  outC->BG.missed = outC->missed;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->BG,
    BGs_in,
    outC->missed,
    &_L67,
    &_L1,
    &_L69);
  if (_L1 & outC->missed) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, BGs_in);
    if ((0 <= _L67) & (_L67 < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->BGs_out[_L67],
        &outC->BG);
    }
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, BGs_in);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->rem_position, position);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

