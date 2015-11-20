/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG */
void NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::valid */kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidLRBG */NID_LRBG nidLRBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidC */NID_C *nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidBG */NID_BG *nidBG)
{
  *nidC = nidLRBG / cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  if (valid & (cNID_LRBG_unknown_BG_Types_Pkg != nidLRBG)) {
    *nidBG = nidLRBG - *nidC * cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  }
  else {
    *nidBG = cNID_BG_unknown_BG_Types_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

