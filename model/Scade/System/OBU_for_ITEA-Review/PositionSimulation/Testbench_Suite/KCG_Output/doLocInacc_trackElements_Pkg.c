/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doLocInacc_trackElements_Pkg.h"

/* trackElements_Pkg::doLocInacc */
void doLocInacc_trackElements_Pkg(
  /* trackElements_Pkg::doLocInacc::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* trackElements_Pkg::doLocInacc::locInAcc */ LocWithInAcc_T_Obu_BasicTypes_Pkg *locInAcc)
{
  (*locInAcc).nominal = 0;
  (*locInAcc).d_min = - 10;
  (*locInAcc).d_max = 10;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** doLocInacc_trackElements_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

