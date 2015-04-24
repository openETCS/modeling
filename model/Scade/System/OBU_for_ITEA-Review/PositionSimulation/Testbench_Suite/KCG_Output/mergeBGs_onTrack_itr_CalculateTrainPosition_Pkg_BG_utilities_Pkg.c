/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr */
void mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_in */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_out */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L13 */ kcg_bool _L13;
  
  /* 1 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BG,
    &(*BGs_in).BGs,
    &(*BGs_out).BGs,
    &_L13);
  (*BGs_out).overrun = _L13 | (*BGs_in).overrun;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

