/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

void M027_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
}

/* TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H */
void M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H::M027_in */M_027_T_TM_radio_messages *M027_in,
  outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  kcg_bool noname;
  L_MESSAGE _1_noname;
  
  kcg_copy_M_027_T_TM_radio_messages(&outC->_L1, M027_in);
  outC->_L26 = outC->_L1.t_train_SH_request;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  outC->_L25 = default_receivedSystemTime_TM_RBC_conversions_legacy;
  outC->_L24 = default_radioDevice_TM_RBC_conversions_legacy;
  outC->_L23 = default_m_version_TM_RBC_conversions_legacy;
  outC->_L22 = default_d_emergencystop_TM_RBC_conversions_legacy;
  outC->_L21 = default_q_dir_TM_RBC_conversions_legacy;
  outC->_L20 = default_d_ref_TM_RBC_conversions_legacy;
  outC->_L18 = default_d_sr_TM_RBC_conversions_legacy;
  outC->_L17 = default_q_scale_TM_RBC_conversions_legacy;
  outC->_L16 = default_nid_em_TM_RBC_conversions_legacy;
  outC->_L15 = default_t_train_reference_TM_RBC_conversions_legacy;
  _1_noname = outC->_L4;
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L2;
  outC->_L14.radioDevice = outC->_L24;
  outC->_L14.receivedSystemTime = outC->_L25;
  outC->_L14.nid_message = outC->_L3;
  outC->_L14.t_train = outC->_L5;
  outC->_L14.m_ack = outC->_L6;
  outC->_L14.nid_lrbg = outC->_L7;
  outC->_L14.t_train_reference = outC->_L15;
  outC->_L14.nid_em = outC->_L16;
  outC->_L14.q_scale = outC->_L17;
  outC->_L14.d_sr = outC->_L18;
  outC->_L14.t_sh_rqst = outC->_L26;
  outC->_L14.d_ref = outC->_L20;
  outC->_L14.q_dir = outC->_L21;
  outC->_L14.d_emergencystop = outC->_L22;
  outC->_L14.m_version = outC->_L23;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Radio_Track_Train_Hd_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

