/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */ kcg_real in)
{
  /* SDM_Types_Pkg::limitPositive::limited */ kcg_real limited;
  
  if (in >= 0.0) {
    limited = in;
  }
  else {
    limited = 0.0;
  }
  return limited;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

