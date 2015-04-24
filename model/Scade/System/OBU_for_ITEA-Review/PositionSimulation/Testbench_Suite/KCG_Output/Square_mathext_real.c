/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_real.h"

/* mathext::Square */
kcg_real Square_mathext_real(
  /* mathext::Square::Square_In */ kcg_real Square_In)
{
  /* mathext::Square::Square_Out */ kcg_real Square_Out;
  
  Square_Out = Square_In * Square_In;
  return Square_Out;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Square_mathext_real.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

