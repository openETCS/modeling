/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::isLEValid */
kcg_bool isLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::isLEValid::valid1 */ kcg_bool valid1,
  /* TargetLimits_Pkg::isLEValid::i1 */ kcg_real i1,
  /* TargetLimits_Pkg::isLEValid::valid2 */ kcg_bool valid2,
  /* TargetLimits_Pkg::isLEValid::i2 */ kcg_real i2)
{
  /* TargetLimits_Pkg::isLEValid::result */ kcg_bool result;
  
  result = valid1 & ((i1 <= i2) | !valid2);
  return result;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** isLEValid_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

