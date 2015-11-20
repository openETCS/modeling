/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal */
kcg_bool nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_2 */NID_C nid_c_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_2 */NID_BG nid_bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_1 */NID_C nid_c_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_1 */NID_BG nid_bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::isEqual */
  static kcg_bool isEqual;
  
  isEqual = (nid_c_2 == nid_c_1) & (nid_bg_2 == nid_bg_1);
  return isEqual;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

