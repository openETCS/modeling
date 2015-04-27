/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_rep0_or_rep1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_rep0_or_rep1 */
kcg_bool op_rep0_or_rep1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_rep0_or_rep1::posBG */ positionedBG_T_TrainPosition_Types_Pck *posBG)
{
  /* ProvidePositionReport_Pkg::op_rep0_or_rep1::b */ kcg_bool b;
  
  b = (*posBG).infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned &
    ((*posBG).infoFromPassing.BG_Header.n_total ==
      N_TOTAL_1_balise_in_the_group) & (*posBG).valid;
  return b;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_rep0_or_rep1_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

