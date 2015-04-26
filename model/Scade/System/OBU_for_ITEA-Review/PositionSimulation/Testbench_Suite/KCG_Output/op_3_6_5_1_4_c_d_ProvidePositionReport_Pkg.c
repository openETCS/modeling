/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
kcg_bool op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::b */ kcg_bool b;
  
  b = (Q_LENGTH_Train_integrity_confirmed_by_driver ==
      (*train2trackStatus).q_length) | ((*train2trackStatus).q_length ==
      Q_LENGTH_Train_integrity_lost);
  return b;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

