/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_train2trackStatus.nid_ntc = 0;
  outC->rem_train2trackStatus.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */
  static TrainToTrackStatus_T_BG_Types_Pkg last_train2trackStatus;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L1 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L2 */
  static Q_LENGTH _L2;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L3 */
  static kcg_bool _L3;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L5 */
  static Q_LENGTH _L5;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L6 */
  static Q_LENGTH _L6;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L7 */
  static kcg_bool _L7;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L8 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L8;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L9 */
  static Q_LENGTH _L9;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L10 */
  static kcg_bool _L10;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::_L11 */
  static kcg_bool _L11;
  
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L1, train2trackStatus);
  _L5 = Q_LENGTH_Train_integrity_confirmed_by_driver;
  _L2 = _L1.q_length;
  _L3 = _L5 == _L2;
  _L6 = Q_LENGTH_Train_integrity_lost;
  _L4 = _L2 == _L6;
  _L7 = _L3 | _L4;
  /* last_init_ck_train2trackStatus */ if (outC->init) {
    kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
      &last_train2trackStatus,
      (TrainToTrackStatus_T_BG_Types_Pkg *)
        &cTrainToTrackStatus_T_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
      &last_train2trackStatus,
      &outC->rem_train2trackStatus);
  }
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L8, &last_train2trackStatus);
  _L9 = _L8.q_length;
  _L10 = _L2 != _L9;
  _L11 = _L7 & _L10;
  outC->trigger = _L11;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->rem_train2trackStatus,
    train2trackStatus);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

