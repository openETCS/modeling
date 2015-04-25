/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "radioNetworkMobile_MoRC_Pck_Subfunc_Pkg.h"

void radioNetworkMobile_init_MoRC_Pck_Subfunc_Pkg(
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->_L18.radioNetworkID = 0;
  outC->_L18.action = mswa_nop_MoRC_Pck;
  outC->_L18.valid = kcg_true;
  outC->_L2.settingUpConnectionHasFailed = kcg_true;
  outC->_L2.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L2.valid = kcg_true;
  outC->registeredRadioNetworkID = 0;
  outC->MobileHW_available_SM_state_nxt =
    SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
  outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
    SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->mobileHWCmd.radioNetworkID = 0;
  outC->mobileHWCmd.action = mhwa_nop_MoRC_Pck;
  outC->mobileHWCmd.valid = kcg_true;
}


void radioNetworkMobile_reset_MoRC_Pck_Subfunc_Pkg(
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile */
void radioNetworkMobile_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::mobileSWCmd */ mobileSWCmd_Type_MoRC_Pck *mobileSWCmd,
  outC_radioNetworkMobile_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::ConnectedToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::ConnectingToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteredToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteredToTheRadioNetwork */ kcg_bool br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_3_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::UnregisteredToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::sHWDisconnect */ kcg_bool sHWDisconnect;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::sHWConnect */ kcg_bool sHWConnect;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */ SSM_ST_MobileHW_available_SM MobileHW_available_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */ SSM_ST_MobileHW_available_SM MobileHW_available_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */ kcg_bool MobileHW_available_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::hw_connectionStatus */ mobileHWConnectionStatus_Type_MoRC_Pck hw_connectionStatus;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::sw_cmd */ mobileSWAction_Type_MoRC_Pck sw_cmd;
  /* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::_L41 */ kcg_bool _L41;
  
  if (outC->init1) {
    MobileHW_available_SM_state_sel = SSM_st_InitialState_MobileHW_available_SM;
  }
  else {
    MobileHW_available_SM_state_sel = outC->MobileHW_available_SM_state_nxt;
  }
  if ((*mobileHWStatus).valid) {
    kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L2, mobileHWStatus);
  }
  else if (outC->init1) {
    kcg_copy_mobileHWStatus_Type_MoRC_Pck(
      &outC->_L2,
      (mobileHWStatus_Type_MoRC_Pck *) &cInvalidMobileHWStatus_MoRC_Pck);
  }
  switch (MobileHW_available_SM_state_sel) {
    case SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      if (outC->_L2.valid) {
        MobileHW_available_SM_state_act =
          SSM_st_MobileHWAvailable_MobileHW_available_SM;
      }
      else {
        MobileHW_available_SM_state_act =
          SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      }
      MobileHW_available_SM_reset_act = outC->_L2.valid;
      break;
    case SSM_st_MobileHWAvailable_MobileHW_available_SM :
      MobileHW_available_SM_reset_act = !outC->_L2.valid;
      if (MobileHW_available_SM_reset_act) {
        MobileHW_available_SM_state_act =
          SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      }
      else {
        MobileHW_available_SM_state_act =
          SSM_st_MobileHWAvailable_MobileHW_available_SM;
      }
      break;
    case SSM_st_InitialState_MobileHW_available_SM :
      MobileHW_available_SM_reset_act = kcg_true;
      MobileHW_available_SM_state_act =
        SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      break;
    
  }
  if ((*mobileSWCmd).valid) {
    kcg_copy_mobileSWCmd_Type_MoRC_Pck(&outC->_L18, mobileSWCmd);
  }
  else if (outC->init1) {
    kcg_copy_mobileSWCmd_Type_MoRC_Pck(
      &outC->_L18,
      (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
  }
  if (outC->_L18.valid) {
    sw_cmd = outC->_L18.action;
  }
  else {
    sw_cmd = mswa_nop_MoRC_Pck;
  }
  if (outC->_L2.valid) {
    hw_connectionStatus = outC->_L2.connectionStatus;
  }
  else {
    hw_connectionStatus = mhwc_notRegistered_MoRC_Pck;
  }
  switch (MobileHW_available_SM_state_act) {
    case SSM_st_InitialState_MobileHW_available_SM :
      _L41 = kcg_false;
      kcg_copy_mobileHWCmd_Type_MoRC_Pck(
        &outC->mobileHWCmd,
        (mobileHWCmd_Type_MoRC_Pck *) &cInvalidmobileHWCmd_MoRC_Pck);
      break;
    case SSM_st_MobileHWAvailable_MobileHW_available_SM :
      if (MobileHW_available_SM_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable =
          SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
      }
      else {
        MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable =
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
      }
      outC->mobileHWCmd.radioNetworkID = outC->_L18.radioNetworkID;
      switch (MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable) {
        case SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          sHWDisconnect = kcg_false;
          tmp = kcg_false;
          _L41 = kcg_false;
          if (sw_cmd == mswa_terminateRadioConnection_MoRC_Pck) {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else if (hw_connectionStatus == mhwc_notRegistered_MoRC_Pck) {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          break;
        case SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          sHWDisconnect = kcg_false;
          tmp = kcg_false;
          _L41 = kcg_false;
          MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork =
            sw_cmd == mswa_disconnect_MoRC_Pck;
          tmp = kcg_false;
          _L41 = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork) {
            sHWDisconnect = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            sHWDisconnect = kcg_false;
            if (hw_connectionStatus == mhwc_registered_MoRC_Pck) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else if (hw_connectionStatus == mhwc_notRegistered_MoRC_Pck) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else if (sw_cmd == mswa_establishRadioConnection_MoRC_Pck) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
          }
          break;
        case SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork =
            sw_cmd == mswa_disconnect_MoRC_Pck;
          tmp = kcg_false;
          _L41 = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork) {
            sHWDisconnect = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            sHWDisconnect = kcg_false;
            if (hw_connectionStatus == mhwc_connected_MoRC_Pck) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
          }
          break;
        case SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWDisconnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork =
            sw_cmd == mswa_unregister_MoRC_Pck;
          br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork =
            sw_cmd == mswa_connect_MoRC_Pck;
          _L41 = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork) {
            sHWConnect = kcg_false;
            tmp = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            tmp = kcg_false;
            if (br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork) {
              sHWConnect = kcg_true;
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              sHWConnect = kcg_false;
              if (hw_connectionStatus == mhwc_notRegistered_MoRC_Pck) {
                MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                  SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
              }
              else {
                MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                  SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
              }
            }
          }
          break;
        case SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          sHWDisconnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
            hw_connectionStatus == mhwc_registered_MoRC_Pck;
          br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
            sw_cmd == mswa_unregister_MoRC_Pck;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
            tmp = kcg_false;
            _L41 = kcg_false;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else if (br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
            tmp = kcg_true;
            _L41 = kcg_false;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            tmp = kcg_false;
            br_3_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
              sw_cmd == mswa_register_MoRC_Pck;
            if (br_3_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
              _L41 = kcg_true;
            }
            else {
              _L41 = kcg_false;
            }
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          break;
        case SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWConnect = kcg_false;
          sHWDisconnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork =
            sw_cmd == mswa_register_MoRC_Pck;
          tmp = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork) {
            _L41 = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            _L41 = kcg_false;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          break;
        
      }
      outC->mobileHWCmd.valid = sHWConnect | sHWDisconnect | _L41 | tmp;
      if (tmp) {
        outC->mobileHWCmd.action = mhwa_unregister_MoRC_Pck;
      }
      else if (_L41) {
        outC->mobileHWCmd.action = mhwa_register_MoRC_Pck;
      }
      else if (sHWConnect) {
        outC->mobileHWCmd.action = mhwa_connect_MoRC_Pck;
      }
      else if (sHWDisconnect) {
        outC->mobileHWCmd.action = mhwa_disconnect_MoRC_Pck;
      }
      else {
        outC->mobileHWCmd.action = mhwa_nop_MoRC_Pck;
      }
      break;
    case SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      _L41 = kcg_false;
      kcg_copy_mobileHWCmd_Type_MoRC_Pck(
        &outC->mobileHWCmd,
        (mobileHWCmd_Type_MoRC_Pck *) &cInvalidmobileHWCmd_MoRC_Pck);
      break;
    
  }
  if (_L41) {
    outC->registeredRadioNetworkID = outC->_L18.radioNetworkID;
  }
  else if (outC->init1) {
    outC->registeredRadioNetworkID = cInvalidRadioNetworkID_value_MoRC_Pck;
  }
  outC->init1 = kcg_false;
  switch (MobileHW_available_SM_state_act) {
    case SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      kcg_copy_mobileSWStatus_Type_MoRC_Pck(
        &outC->mobileSWStatus,
        (mobileSWStatus_Type_MoRC_Pck *) &cMobileSWStatus_noHW_MoRC_Pck);
      outC->MobileHW_available_SM_state_nxt =
        SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      break;
    case SSM_st_MobileHWAvailable_MobileHW_available_SM :
      outC->init = kcg_false;
      outC->mobileSWStatus.valid = kcg_true;
      outC->mobileSWStatus.mobileHW_available = kcg_true;
      outC->mobileSWStatus.registeredRadioNetworkID =
        outC->registeredRadioNetworkID;
      outC->mobileSWStatus.settingUpConnectionHasFailed =
        (*mobileHWStatus).settingUpConnectionHasFailed;
      outC->MobileHW_available_SM_state_nxt =
        SSM_st_MobileHWAvailable_MobileHW_available_SM;
      switch (MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable) {
        case SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus =
            mswc_sessionEstablished_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus =
            mswc_establishingSession_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = mswc_connected_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = mswc_connecting_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = mswc_registered_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = mswc_registering_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        
      }
      break;
    case SSM_st_InitialState_MobileHW_available_SM :
      kcg_copy_mobileSWStatus_Type_MoRC_Pck(
        &outC->mobileSWStatus,
        (mobileSWStatus_Type_MoRC_Pck *) &cMobileSWStatus_noHW_MoRC_Pck);
      outC->MobileHW_available_SM_state_nxt =
        SSM_st_InitialState_MobileHW_available_SM;
      break;
    
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** radioNetworkMobile_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

