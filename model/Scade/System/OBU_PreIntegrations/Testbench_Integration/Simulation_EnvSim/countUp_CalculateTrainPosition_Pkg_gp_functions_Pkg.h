/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_
#define _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::counter */ counter;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
extern void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

extern void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

#endif /* _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

