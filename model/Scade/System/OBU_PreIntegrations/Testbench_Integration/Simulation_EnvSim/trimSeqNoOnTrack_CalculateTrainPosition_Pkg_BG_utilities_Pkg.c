/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static kcg_int tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L2 */
  static kcg_int _L2;
  
  _L2 = 0;
  for (i = 0; i < 41; i++) {
    tmp = _L2;
    /* 1 */
    trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      tmp,
      &(*BGs_in)[i],
      &_L2,
      &(*BGs_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

