/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */ kcg_bool *overrun)
{
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L7;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L7.BGs, BGs_1);
  _L7.overrun = kcg_false;
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(&tmp, &_L7);
    /* 1 */
    mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      &(*BGs_2)[i],
      &_L7);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L7.BGs);
  *overrun = _L7.overrun;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

