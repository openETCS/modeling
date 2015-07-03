/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M015_to_Radio_Track_Train_H_TM_RBC_conversions.h"

void M015_to_Radio_Track_Train_H_reset_TM_RBC_conversions(
  outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions *outC)
{
}

/* TM_RBC_conversions::M015_to_Radio_Track_Train_H */
void M015_to_Radio_Track_Train_H_TM_RBC_conversions(
  /* TM_RBC_conversions::M015_to_Radio_Track_Train_H::M003_in */M_015_T_TM_radio_messages *M003_in,
  outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions *outC)
{
  kcg_bool noname;
  L_MESSAGE _1_noname;
  
  kcg_copy_M_015_T_TM_radio_messages(&outC->_L1, M003_in);
  outC->_L24 = outC->_L1.d_emergencystop;
  outC->_L25 = outC->_L1.q_dir;
  outC->_L26 = outC->_L1.d_ref;
  outC->_L27 = outC->_L1.q_scale;
  outC->_L28 = outC->_L1.nid_em;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  outC->_L32 = default_radioDevice_TM_RBC_conversions;
  outC->_L31 = default_receivedSystemTime_TM_RBC_conversions;
  outC->_L23 = default_m_version_TM_RBC_conversions;
  outC->_L19 = default_t_sh_rqst_TM_RBC_conversions;
  outC->_L18 = default_d_sr_TM_RBC_conversions;
  outC->_L15 = default_t_train_reference_TM_RBC_conversions;
  _1_noname = outC->_L4;
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L2;
  outC->_L14.radioDevice = outC->_L32;
  outC->_L14.receivedSystemTime = outC->_L31;
  outC->_L14.nid_message = outC->_L3;
  outC->_L14.t_train = outC->_L5;
  outC->_L14.m_ack = outC->_L6;
  outC->_L14.nid_lrbg = outC->_L7;
  outC->_L14.t_train_reference = outC->_L15;
  outC->_L14.nid_em = outC->_L28;
  outC->_L14.q_scale = outC->_L27;
  outC->_L14.d_sr = outC->_L18;
  outC->_L14.t_sh_rqst = outC->_L19;
  outC->_L14.d_ref = outC->_L26;
  outC->_L14.q_dir = outC->_L25;
  outC->_L14.d_emergencystop = outC->_L24;
  outC->_L14.m_version = outC->_L23;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Radio_Track_Train_Hd_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M015_to_Radio_Track_Train_H_TM_RBC_conversions.c
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

