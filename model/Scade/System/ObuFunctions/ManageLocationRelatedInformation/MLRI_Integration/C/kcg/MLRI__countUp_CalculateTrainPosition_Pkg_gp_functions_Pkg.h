/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_
#define _MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_

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
} MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
extern void MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

extern void MLRI__countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

#endif /* _MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

