/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */ Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */ D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */ Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  kcg_int tmp;
  
  tmp = q_locacc * cQLOCACC_resolution_TrainPosition_Types_Pck;
  (*distance).d_min = - tmp;
  (*distance).d_max = tmp;
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      tmp = d_link * cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      tmp = d_link * cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      tmp = d_link * cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
  (*distance).nominal = tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

