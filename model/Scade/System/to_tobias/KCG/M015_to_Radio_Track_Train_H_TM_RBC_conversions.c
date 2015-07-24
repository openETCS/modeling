/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M015_to_Radio_Track_Train_H_TM_RBC_conversions.h"

/* TM_RBC_conversions::M015_to_Radio_Track_Train_H */
void M015_to_Radio_Track_Train_H_TM_RBC_conversions(
  /* TM_RBC_conversions::M015_to_Radio_Track_Train_H::M003_in */M_015_T_TM_radio_messages *M003_in,
  /* TM_RBC_conversions::M015_to_Radio_Track_Train_H::Radio_Track_Train_Hd_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Radio_Track_Train_Hd_out)
{
  (*Radio_Track_Train_Hd_out).radioDevice =
    default_radioDevice_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).receivedSystemTime =
    default_receivedSystemTime_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).nid_message = (*M003_in).nid_message;
  (*Radio_Track_Train_Hd_out).t_train = (*M003_in).t_train;
  (*Radio_Track_Train_Hd_out).m_ack = (*M003_in).m_ack;
  (*Radio_Track_Train_Hd_out).nid_lrbg = (*M003_in).nid_lrbg;
  (*Radio_Track_Train_Hd_out).t_train_reference =
    default_t_train_reference_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).nid_em = (*M003_in).nid_em;
  (*Radio_Track_Train_Hd_out).q_scale = (*M003_in).q_scale;
  (*Radio_Track_Train_Hd_out).d_sr = default_d_sr_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).t_sh_rqst = default_t_sh_rqst_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).d_ref = (*M003_in).d_ref;
  (*Radio_Track_Train_Hd_out).q_dir = (*M003_in).q_dir;
  (*Radio_Track_Train_Hd_out).d_emergencystop = (*M003_in).d_emergencystop;
  (*Radio_Track_Train_Hd_out).m_version = default_m_version_TM_RBC_conversions;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M015_to_Radio_Track_Train_H_TM_RBC_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

