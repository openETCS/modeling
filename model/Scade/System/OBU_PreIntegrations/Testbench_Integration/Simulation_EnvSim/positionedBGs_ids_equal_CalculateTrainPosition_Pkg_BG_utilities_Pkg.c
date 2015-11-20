/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
kcg_bool positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */positionedBG_T_TrainPosition_Types_Pck *bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::idsEqual */
  static kcg_bool idsEqual;
  
  idsEqual = (*bg_2).valid & /* 1 */
    nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      (*bg_2).nid_c,
      (*bg_2).nid_bg,
      (*bg_1).nid_c,
      (*bg_1).nid_bg) & (*bg_1).valid;
  return idsEqual;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

