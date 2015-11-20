/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"

void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  static Q_LENGTH tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = cTrainToTrackStatus_T_ProvidePositionReport_Pkg.q_length;
  }
  else {
    tmp = outC->rem_train2trackStatus.q_length;
  }
  outC->trigger = ((Q_LENGTH_Train_integrity_confirmed_by_driver ==
        (*train2trackStatus).q_length) | ((*train2trackStatus).q_length ==
        Q_LENGTH_Train_integrity_lost)) & ((*train2trackStatus).q_length !=
      tmp);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->rem_train2trackStatus,
    train2trackStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

