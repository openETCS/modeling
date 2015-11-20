/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H */
void M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H::M034_in */M_034_T_TM_radio_messages *M034_in,
  /* TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H::Radio_Track_Train_Hd_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Radio_Track_Train_Hd_out)
{
  (*Radio_Track_Train_Hd_out).radioDevice =
    default_radioDevice_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).receivedSystemTime =
    default_receivedSystemTime_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).nid_message = (*M034_in).nid_message;
  (*Radio_Track_Train_Hd_out).t_train = (*M034_in).t_train;
  (*Radio_Track_Train_Hd_out).m_ack = (*M034_in).m_ack;
  (*Radio_Track_Train_Hd_out).nid_lrbg = (*M034_in).nid_lrbg;
  (*Radio_Track_Train_Hd_out).t_train_reference =
    default_t_train_reference_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).nid_em = default_nid_em_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).q_scale = (*M034_in).q_scale;
  (*Radio_Track_Train_Hd_out).d_sr = default_d_sr_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).t_sh_rqst =
    default_t_sh_rqst_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).d_ref = (*M034_in).d_ref;
  (*Radio_Track_Train_Hd_out).q_dir = (*M034_in).q_dir;
  (*Radio_Track_Train_Hd_out).d_emergencystop =
    default_d_emergencystop_TM_RBC_conversions_legacy;
  (*Radio_Track_Train_Hd_out).m_version =
    default_m_version_TM_RBC_conversions_legacy;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

