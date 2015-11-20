/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr */
void deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_shifted_in */positionedBG_T_TrainPosition_Types_Pck *BG_shifted_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::BG_out */positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = iteratorIndex < indexOfBG;
  if (IfBlock1_clock) {
    *cont = kcg_true;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_in);
  }
  else {
    else_clock_IfBlock1 = iteratorIndex == indexOfBG;
    if (else_clock_IfBlock1) {
      *cont = kcg_true;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_shifted_in);
    }
    else {
      *cont = (*BG_shifted_in).valid;
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_shifted_in);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

