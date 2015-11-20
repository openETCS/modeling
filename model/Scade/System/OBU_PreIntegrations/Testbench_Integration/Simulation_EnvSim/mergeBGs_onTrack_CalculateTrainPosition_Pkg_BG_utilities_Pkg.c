/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */kcg_bool *overrun)
{
  static struct__156806 tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */
  static positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L7;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L7.BGs, BGs_1);
  _L7.overrun = kcg_false;
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(&tmp, &_L7);
    /* 1 */
    mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      &(*BGs_2)[i],
      &_L7);
  }
  *overrun = _L7.overrun;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L7.BGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

