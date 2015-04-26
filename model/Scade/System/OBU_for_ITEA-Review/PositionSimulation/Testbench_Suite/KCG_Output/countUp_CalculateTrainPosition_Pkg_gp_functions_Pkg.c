/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
  outC->counter = 0;
}


void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */ kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */ kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

