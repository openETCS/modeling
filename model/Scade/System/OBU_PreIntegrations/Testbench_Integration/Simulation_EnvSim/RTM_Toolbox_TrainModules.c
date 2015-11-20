/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_Toolbox_TrainModules.h"

void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  outC->init3 = kcg_true;
  outC->init = kcg_true;
  outC->init2 = kcg_true;
}

/* Toolbox::TrainModules::RTM */
void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::RTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i;
  static RadioMetadata_T_Common_Types_Pkg tmp;
  /* Toolbox::TrainModules::RTM::IfBlock1::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_sel;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::_L30 */
  static kcg_bool _L30;
  /* Toolbox::TrainModules::RTM::_L51 */
  static Radio_TrackTrain_Header_T_TM_transitional _L51;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  outC->TrackMessage.msg_type = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(
    &outC->TrackMessage.btm_msg,
    (API_TelegramHeader_T_API_Msg_Pkg *) &cEmptyBtmMessageHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->TrackMessage.packets,
    Packets);
  if (outC->init3) {
    GSM_R_MobileManagement_state_sel =
      SSM_st_Not_registered_GSM_R_MobileManagement;
    _8_else_clock_IfBlock1 = kcg_false;
    outC->init3 = kcg_false;
    _9_else_clock_IfBlock1 = kcg_false;
  }
  else {
    GSM_R_MobileManagement_state_sel = outC->GSM_R_MobileManagement_state_nxt;
    _8_else_clock_IfBlock1 = outC->connectionEstablished;
    _9_else_clock_IfBlock1 = outC->registrationFinished;
  }
  switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      IfBlock1_clock = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_disconnection_request_API_RadioCommunication_Pkg);
      else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (IfBlock1_clock) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        _10_else_clock_IfBlock1 = kcg_true;
      }
      else {
        if (else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Connected_GSM_R_MobileManagement;
        }
        _10_else_clock_IfBlock1 = else_clock_IfBlock1;
      }
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      _1_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (_8_else_clock_IfBlock1) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Connected_GSM_R_MobileManagement;
        _10_else_clock_IfBlock1 = kcg_true;
      }
      else {
        if (_1_else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Connecting_GSM_R_MobileManagement;
        }
        _10_else_clock_IfBlock1 = _1_else_clock_IfBlock1;
      }
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      _2_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_connection_request_API_RadioCommunication_Pkg);
      _3_else_clock_IfBlock1 = ((*RadioManagementMessage).valid &
          ((*RadioManagementMessage).cmd ==
            cmdr_reset_connection_API_RadioCommunication_Pkg)) |
        ((*RadioManagementMessage).cmd ==
          cmdr_networkUnregister_API_RadioCommunication_Pkg);
      if (_2_else_clock_IfBlock1) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Connecting_GSM_R_MobileManagement;
        _10_else_clock_IfBlock1 = kcg_true;
      }
      else {
        if (_3_else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Registered_GSM_R_MobileManagement;
        }
        _10_else_clock_IfBlock1 = _3_else_clock_IfBlock1;
      }
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      _4_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (_9_else_clock_IfBlock1) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        _10_else_clock_IfBlock1 = kcg_true;
      }
      else {
        if (_4_else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Registering_GSM_R_MobileManagement;
        }
        _10_else_clock_IfBlock1 = _4_else_clock_IfBlock1;
      }
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      _10_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_networkRegister_API_RadioCommunication_Pkg);
      if (_10_else_clock_IfBlock1) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      break;
    
  }
  /* 1 */ C_Int_TrackTrainMessage_TM_conversions(RadioHeader, &_L51);
  IfBlock1_clock = (*RadioHeader).nid_message == 2;
  _L30 = _L51.nid_message != 0;
  outC->TrackMessage.valid = _L30;
  switch (GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connected_GSM_R_MobileManagement;
      outC->connectionEstablished = _8_else_clock_IfBlock1;
      outC->registrationFinished = _9_else_clock_IfBlock1;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connecting_GSM_R_MobileManagement;
      if (_10_else_clock_IfBlock1) {
        outC->init2 = kcg_true;
      }
      if (outC->init2) {
        for (i = 0; i < 5; i++) {
          outC->_1_fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->_1_fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->connectionEstablished =
        outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx];
      outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->_1_fby_RTM_Toolbox_TrainModules.idx =
        (outC->_1_fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      outC->registrationFinished = _9_else_clock_IfBlock1;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      outC->init2 = kcg_false;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registered_GSM_R_MobileManagement;
      outC->connectionEstablished = _8_else_clock_IfBlock1;
      outC->registrationFinished = _9_else_clock_IfBlock1;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registering_GSM_R_MobileManagement;
      outC->connectionEstablished = _8_else_clock_IfBlock1;
      if (_10_else_clock_IfBlock1) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        for (i = 0; i < 5; i++) {
          outC->fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->registrationFinished =
        outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx];
      outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->fby_RTM_Toolbox_TrainModules.idx =
        (outC->fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      outC->init = kcg_false;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Not_registered_GSM_R_MobileManagement;
      outC->connectionEstablished = _8_else_clock_IfBlock1;
      outC->registrationFinished = _9_else_clock_IfBlock1;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      break;
    
  }
  if (IfBlock1_clock) {
    tmp.t_train_reference = kcg_false;
    tmp.nid_em = kcg_false;
    tmp.q_scale = kcg_true;
    tmp.d_sr = kcg_true;
    tmp.t_sh_rqst = kcg_false;
    tmp.d_ref = kcg_false;
    tmp.q_dir = kcg_false;
    tmp.d_emergencystop = kcg_false;
    tmp.m_version = kcg_false;
  }
  else {
    _19_else_clock_IfBlock1 = (*RadioHeader).nid_message == 3;
    if (_19_else_clock_IfBlock1) {
      tmp.t_train_reference = kcg_false;
      tmp.nid_em = kcg_false;
      tmp.q_scale = kcg_false;
      tmp.d_sr = kcg_false;
      tmp.t_sh_rqst = kcg_false;
      tmp.d_ref = kcg_false;
      tmp.q_dir = kcg_false;
      tmp.d_emergencystop = kcg_false;
      tmp.m_version = kcg_false;
    }
    else {
      _18_else_clock_IfBlock1 = (*RadioHeader).nid_message == 6;
      if (_18_else_clock_IfBlock1) {
        tmp.t_train_reference = kcg_false;
        tmp.nid_em = kcg_false;
        tmp.q_scale = kcg_false;
        tmp.d_sr = kcg_false;
        tmp.t_sh_rqst = kcg_false;
        tmp.d_ref = kcg_false;
        tmp.q_dir = kcg_false;
        tmp.d_emergencystop = kcg_false;
        tmp.m_version = kcg_false;
      }
      else {
        _17_else_clock_IfBlock1 = (*RadioHeader).nid_message == 8;
        if (_17_else_clock_IfBlock1) {
          tmp.t_train_reference = kcg_true;
          tmp.nid_em = kcg_false;
          tmp.q_scale = kcg_false;
          tmp.d_sr = kcg_false;
          tmp.t_sh_rqst = kcg_false;
          tmp.d_ref = kcg_false;
          tmp.q_dir = kcg_false;
          tmp.d_emergencystop = kcg_false;
          tmp.m_version = kcg_false;
        }
        else {
          _16_else_clock_IfBlock1 = (*RadioHeader).nid_message == 9;
          if (_16_else_clock_IfBlock1) {
            tmp.t_train_reference = kcg_false;
            tmp.nid_em = kcg_false;
            tmp.q_scale = kcg_false;
            tmp.d_sr = kcg_false;
            tmp.t_sh_rqst = kcg_false;
            tmp.d_ref = kcg_false;
            tmp.q_dir = kcg_false;
            tmp.d_emergencystop = kcg_false;
            tmp.m_version = kcg_false;
          }
          else {
            _15_else_clock_IfBlock1 = (*RadioHeader).nid_message == 15;
            if (_15_else_clock_IfBlock1) {
              tmp.t_train_reference = kcg_false;
              tmp.nid_em = kcg_true;
              tmp.q_scale = kcg_true;
              tmp.d_sr = kcg_false;
              tmp.t_sh_rqst = kcg_false;
              tmp.d_ref = kcg_true;
              tmp.q_dir = kcg_true;
              tmp.d_emergencystop = kcg_true;
              tmp.m_version = kcg_false;
            }
            else {
              _14_else_clock_IfBlock1 = (*RadioHeader).nid_message == 16;
              if (_14_else_clock_IfBlock1) {
                tmp.t_train_reference = kcg_false;
                tmp.nid_em = kcg_true;
                tmp.q_scale = kcg_false;
                tmp.d_sr = kcg_false;
                tmp.t_sh_rqst = kcg_false;
                tmp.d_ref = kcg_false;
                tmp.q_dir = kcg_false;
                tmp.d_emergencystop = kcg_false;
                tmp.m_version = kcg_false;
              }
              else {
                _13_else_clock_IfBlock1 = (*RadioHeader).nid_message == 18;
                if (_13_else_clock_IfBlock1) {
                  tmp.t_train_reference = kcg_false;
                  tmp.nid_em = kcg_true;
                  tmp.q_scale = kcg_false;
                  tmp.d_sr = kcg_false;
                  tmp.t_sh_rqst = kcg_false;
                  tmp.d_ref = kcg_false;
                  tmp.q_dir = kcg_false;
                  tmp.d_emergencystop = kcg_false;
                  tmp.m_version = kcg_false;
                }
                else {
                  _12_else_clock_IfBlock1 = (*RadioHeader).nid_message == 24;
                  if (_12_else_clock_IfBlock1) {
                    tmp.t_train_reference = kcg_false;
                    tmp.nid_em = kcg_false;
                    tmp.q_scale = kcg_false;
                    tmp.d_sr = kcg_false;
                    tmp.t_sh_rqst = kcg_false;
                    tmp.d_ref = kcg_false;
                    tmp.q_dir = kcg_false;
                    tmp.d_emergencystop = kcg_false;
                    tmp.m_version = kcg_false;
                  }
                  else {
                    _11_else_clock_IfBlock1 = (*RadioHeader).nid_message == 27;
                    if (_11_else_clock_IfBlock1) {
                      tmp.t_train_reference = kcg_true;
                      tmp.nid_em = kcg_false;
                      tmp.q_scale = kcg_false;
                      tmp.d_sr = kcg_false;
                      tmp.t_sh_rqst = kcg_false;
                      tmp.d_ref = kcg_false;
                      tmp.q_dir = kcg_false;
                      tmp.d_emergencystop = kcg_false;
                      tmp.m_version = kcg_false;
                    }
                    else {
                      _10_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                        28;
                      if (_10_else_clock_IfBlock1) {
                        tmp.t_train_reference = kcg_true;
                        tmp.nid_em = kcg_false;
                        tmp.q_scale = kcg_false;
                        tmp.d_sr = kcg_false;
                        tmp.t_sh_rqst = kcg_false;
                        tmp.d_ref = kcg_false;
                        tmp.q_dir = kcg_false;
                        tmp.d_emergencystop = kcg_false;
                        tmp.m_version = kcg_false;
                      }
                      else {
                        _9_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                          32;
                        if (_9_else_clock_IfBlock1) {
                          tmp.t_train_reference = kcg_false;
                          tmp.nid_em = kcg_false;
                          tmp.q_scale = kcg_false;
                          tmp.d_sr = kcg_false;
                          tmp.t_sh_rqst = kcg_false;
                          tmp.d_ref = kcg_false;
                          tmp.q_dir = kcg_false;
                          tmp.d_emergencystop = kcg_false;
                          tmp.m_version = kcg_true;
                        }
                        else {
                          _8_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                            33;
                          if (_8_else_clock_IfBlock1) {
                            tmp.t_train_reference = kcg_false;
                            tmp.nid_em = kcg_false;
                            tmp.q_scale = kcg_true;
                            tmp.d_sr = kcg_false;
                            tmp.t_sh_rqst = kcg_false;
                            tmp.d_ref = kcg_true;
                            tmp.q_dir = kcg_false;
                            tmp.d_emergencystop = kcg_false;
                            tmp.m_version = kcg_false;
                          }
                          else {
                            _7_else_clock_IfBlock1 =
                              (*RadioHeader).nid_message == 34;
                            if (_7_else_clock_IfBlock1) {
                              tmp.t_train_reference = kcg_false;
                              tmp.nid_em = kcg_false;
                              tmp.q_scale = kcg_true;
                              tmp.d_sr = kcg_false;
                              tmp.t_sh_rqst = kcg_false;
                              tmp.d_ref = kcg_true;
                              tmp.q_dir = kcg_true;
                              tmp.d_emergencystop = kcg_false;
                              tmp.m_version = kcg_false;
                            }
                            else {
                              _6_else_clock_IfBlock1 =
                                (*RadioHeader).nid_message == 37;
                              if (_6_else_clock_IfBlock1) {
                                tmp.t_train_reference = kcg_false;
                                tmp.nid_em = kcg_false;
                                tmp.q_scale = kcg_false;
                                tmp.d_sr = kcg_false;
                                tmp.t_sh_rqst = kcg_false;
                                tmp.d_ref = kcg_false;
                                tmp.q_dir = kcg_false;
                                tmp.d_emergencystop = kcg_false;
                                tmp.m_version = kcg_false;
                              }
                              else {
                                _5_else_clock_IfBlock1 =
                                  (*RadioHeader).nid_message == 38;
                                if (_5_else_clock_IfBlock1) {
                                  tmp.t_train_reference = kcg_false;
                                  tmp.nid_em = kcg_false;
                                  tmp.q_scale = kcg_false;
                                  tmp.d_sr = kcg_false;
                                  tmp.t_sh_rqst = kcg_false;
                                  tmp.d_ref = kcg_false;
                                  tmp.q_dir = kcg_false;
                                  tmp.d_emergencystop = kcg_false;
                                  tmp.m_version = kcg_false;
                                }
                                else {
                                  _4_else_clock_IfBlock1 =
                                    (*RadioHeader).nid_message == 39;
                                  if (_4_else_clock_IfBlock1) {
                                    tmp.t_train_reference = kcg_false;
                                    tmp.nid_em = kcg_false;
                                    tmp.q_scale = kcg_false;
                                    tmp.d_sr = kcg_false;
                                    tmp.t_sh_rqst = kcg_false;
                                    tmp.d_ref = kcg_false;
                                    tmp.q_dir = kcg_false;
                                    tmp.d_emergencystop = kcg_false;
                                    tmp.m_version = kcg_false;
                                  }
                                  else {
                                    _3_else_clock_IfBlock1 =
                                      (*RadioHeader).nid_message == 40;
                                    if (_3_else_clock_IfBlock1) {
                                      tmp.t_train_reference = kcg_false;
                                      tmp.nid_em = kcg_false;
                                      tmp.q_scale = kcg_false;
                                      tmp.d_sr = kcg_false;
                                      tmp.t_sh_rqst = kcg_false;
                                      tmp.d_ref = kcg_false;
                                      tmp.q_dir = kcg_false;
                                      tmp.d_emergencystop = kcg_false;
                                      tmp.m_version = kcg_false;
                                    }
                                    else {
                                      _2_else_clock_IfBlock1 =
                                        (*RadioHeader).nid_message == 41;
                                      if (_2_else_clock_IfBlock1) {
                                        tmp.t_train_reference = kcg_false;
                                        tmp.nid_em = kcg_false;
                                        tmp.q_scale = kcg_false;
                                        tmp.d_sr = kcg_false;
                                        tmp.t_sh_rqst = kcg_false;
                                        tmp.d_ref = kcg_false;
                                        tmp.q_dir = kcg_false;
                                        tmp.d_emergencystop = kcg_false;
                                        tmp.m_version = kcg_false;
                                      }
                                      else {
                                        _1_else_clock_IfBlock1 =
                                          (*RadioHeader).nid_message == 43;
                                        if (_1_else_clock_IfBlock1) {
                                          tmp.t_train_reference = kcg_false;
                                          tmp.nid_em = kcg_false;
                                          tmp.q_scale = kcg_false;
                                          tmp.d_sr = kcg_false;
                                          tmp.t_sh_rqst = kcg_false;
                                          tmp.d_ref = kcg_false;
                                          tmp.q_dir = kcg_false;
                                          tmp.d_emergencystop = kcg_false;
                                          tmp.m_version = kcg_false;
                                        }
                                        else {
                                          else_clock_IfBlock1 =
                                            (*RadioHeader).nid_message == 45;
                                          if (else_clock_IfBlock1) {
                                            tmp.t_train_reference = kcg_false;
                                            tmp.nid_em = kcg_false;
                                            tmp.q_scale = kcg_false;
                                            tmp.d_sr = kcg_false;
                                            tmp.t_sh_rqst = kcg_false;
                                            tmp.d_ref = kcg_false;
                                            tmp.q_dir = kcg_false;
                                            tmp.d_emergencystop = kcg_false;
                                            tmp.m_version = kcg_false;
                                          }
                                          else {
                                            tmp.t_train_reference = kcg_false;
                                            tmp.nid_em = kcg_false;
                                            tmp.q_scale = kcg_false;
                                            tmp.d_sr = kcg_false;
                                            tmp.t_sh_rqst = kcg_false;
                                            tmp.d_ref = kcg_false;
                                            tmp.q_dir = kcg_false;
                                            tmp.d_emergencystop = kcg_false;
                                            tmp.m_version = kcg_false;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  outC->TrackMessage.rtm_msg.present = _L30;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_false;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->TrackMessage.rtm_msg.Radio_Common_Header,
    &_L51);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->TrackMessage.rtm_msg.Radio_MetaData,
    &tmp);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RTM_Toolbox_TrainModules.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

