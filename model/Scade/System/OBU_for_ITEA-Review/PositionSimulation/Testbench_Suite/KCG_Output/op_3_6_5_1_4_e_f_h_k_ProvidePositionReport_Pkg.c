/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k */
kcg_bool op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_f_h_k::b */ kcg_bool b;
  
  b = (*rbcComm).newSessionEstablished | (*trackInfo).minSafeRearEndPassed |
    (*trackInfo).maxSafeFrontEndPassed |
    (*trackInfo).levelTransitionBorderPassed;
  return b;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

