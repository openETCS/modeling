/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

void MLRI__countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */kcg_bool reset,
  MLRI__outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  kcg_int tmp1;
  kcg_int tmp;
  
  if (reset) {
    outC->counter = 0;
  }
  else {
    if (outC->init) {
      tmp1 = 0;
    }
    else {
      tmp1 = outC->counter;
    }
    if (count) {
      tmp = 1;
    }
    else {
      tmp = 0;
    }
    outC->counter = tmp1 + tmp;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

