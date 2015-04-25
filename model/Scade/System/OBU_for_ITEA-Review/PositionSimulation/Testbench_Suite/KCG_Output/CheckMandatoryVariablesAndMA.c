/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMandatoryVariablesAndMA.h"

/* CheckMandatoryVariablesAndMA */
kcg_bool CheckMandatoryVariablesAndMA(
  /* CheckMandatoryVariablesAndMA::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  /* CheckMandatoryVariablesAndMA::IfBlock1::else */ kcg_bool _9_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* CheckMandatoryVariablesAndMA::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid;
  
  IfBlock1_clock = (*rtmMessage).Radio_Common_Header.nid_message == 3;
  if (IfBlock1_clock) {
    valid = !((*rtmMessage).radioMetadata.t_train_reference |
        (*rtmMessage).radioMetadata.nid_em |
        (*rtmMessage).radioMetadata.q_scale | (*rtmMessage).radioMetadata.d_sr |
        (*rtmMessage).radioMetadata.t_sh_rqst |
        (*rtmMessage).radioMetadata.d_ref | (*rtmMessage).radioMetadata.q_dir |
        (*rtmMessage).radioMetadata.d_emergencystop |
        (*rtmMessage).radioMetadata.m_version) & /* 1 */
      CheckIfPacket15IsPresent_SubFunctions(rtmMessage);
  }
  else {
    _9_else_clock_IfBlock1 = (*rtmMessage).Radio_Common_Header.nid_message == 8;
    if (_9_else_clock_IfBlock1) {
      valid = !(!(*rtmMessage).radioMetadata.t_train_reference |
          (*rtmMessage).radioMetadata.nid_em |
          (*rtmMessage).radioMetadata.q_scale |
          (*rtmMessage).radioMetadata.d_sr |
          (*rtmMessage).radioMetadata.t_sh_rqst |
          (*rtmMessage).radioMetadata.d_ref |
          (*rtmMessage).radioMetadata.q_dir |
          (*rtmMessage).radioMetadata.d_emergencystop |
          (*rtmMessage).radioMetadata.m_version);
    }
    else {
      _8_else_clock_IfBlock1 = (*rtmMessage).Radio_Common_Header.nid_message ==
        9;
      if (_8_else_clock_IfBlock1) {
        valid = !((*rtmMessage).radioMetadata.t_train_reference |
            (*rtmMessage).radioMetadata.nid_em |
            (*rtmMessage).radioMetadata.q_scale |
            (*rtmMessage).radioMetadata.d_sr |
            (*rtmMessage).radioMetadata.t_sh_rqst |
            (*rtmMessage).radioMetadata.d_ref |
            (*rtmMessage).radioMetadata.q_dir |
            (*rtmMessage).radioMetadata.d_emergencystop |
            (*rtmMessage).radioMetadata.m_version) & /* 3 */
          CheckIfPacket15IsPresent_SubFunctions(rtmMessage);
      }
      else {
        _7_else_clock_IfBlock1 =
          (*rtmMessage).Radio_Common_Header.nid_message == 15;
        if (_7_else_clock_IfBlock1) {
          valid = !((*rtmMessage).radioMetadata.t_train_reference |
              !(*rtmMessage).radioMetadata.nid_em |
              !(*rtmMessage).radioMetadata.q_scale |
              (*rtmMessage).radioMetadata.d_sr |
              (*rtmMessage).radioMetadata.t_sh_rqst |
              !(*rtmMessage).radioMetadata.d_ref |
              !(*rtmMessage).radioMetadata.q_dir |
              !(*rtmMessage).radioMetadata.d_emergencystop |
              (*rtmMessage).radioMetadata.m_version);
        }
        else {
          _6_else_clock_IfBlock1 =
            (*rtmMessage).Radio_Common_Header.nid_message == 16;
          if (_6_else_clock_IfBlock1) {
            valid = !((*rtmMessage).radioMetadata.t_train_reference |
                !(*rtmMessage).radioMetadata.nid_em |
                (*rtmMessage).radioMetadata.q_scale |
                (*rtmMessage).radioMetadata.d_sr |
                (*rtmMessage).radioMetadata.t_sh_rqst |
                (*rtmMessage).radioMetadata.d_ref |
                (*rtmMessage).radioMetadata.q_dir |
                (*rtmMessage).radioMetadata.d_emergencystop |
                (*rtmMessage).radioMetadata.m_version);
          }
          else {
            _5_else_clock_IfBlock1 =
              (*rtmMessage).Radio_Common_Header.nid_message == 18;
            if (_5_else_clock_IfBlock1) {
              valid = !((*rtmMessage).radioMetadata.t_train_reference |
                  !(*rtmMessage).radioMetadata.nid_em |
                  (*rtmMessage).radioMetadata.q_scale |
                  (*rtmMessage).radioMetadata.d_sr |
                  (*rtmMessage).radioMetadata.t_sh_rqst |
                  (*rtmMessage).radioMetadata.d_ref |
                  (*rtmMessage).radioMetadata.q_dir |
                  (*rtmMessage).radioMetadata.d_emergencystop |
                  (*rtmMessage).radioMetadata.m_version);
            }
            else {
              _4_else_clock_IfBlock1 =
                (*rtmMessage).Radio_Common_Header.nid_message == 24;
              if (_4_else_clock_IfBlock1) {
                valid = !((*rtmMessage).radioMetadata.t_train_reference |
                    (*rtmMessage).radioMetadata.nid_em |
                    (*rtmMessage).radioMetadata.q_scale |
                    (*rtmMessage).radioMetadata.d_sr |
                    (*rtmMessage).radioMetadata.t_sh_rqst |
                    (*rtmMessage).radioMetadata.d_ref |
                    (*rtmMessage).radioMetadata.q_dir |
                    (*rtmMessage).radioMetadata.d_emergencystop |
                    (*rtmMessage).radioMetadata.m_version);
              }
              else {
                _3_else_clock_IfBlock1 =
                  (*rtmMessage).Radio_Common_Header.nid_message == 32;
                if (_3_else_clock_IfBlock1) {
                  valid = !((*rtmMessage).radioMetadata.t_train_reference |
                      (*rtmMessage).radioMetadata.nid_em |
                      (*rtmMessage).radioMetadata.q_scale |
                      (*rtmMessage).radioMetadata.d_sr |
                      (*rtmMessage).radioMetadata.t_sh_rqst |
                      (*rtmMessage).radioMetadata.d_ref |
                      (*rtmMessage).radioMetadata.q_dir |
                      (*rtmMessage).radioMetadata.d_emergencystop |
                      !(*rtmMessage).radioMetadata.m_version);
                }
                else {
                  _2_else_clock_IfBlock1 =
                    (*rtmMessage).Radio_Common_Header.nid_message == 33;
                  if (_2_else_clock_IfBlock1) {
                    valid = !((*rtmMessage).radioMetadata.t_train_reference |
                        (*rtmMessage).radioMetadata.nid_em |
                        !(*rtmMessage).radioMetadata.q_scale |
                        (*rtmMessage).radioMetadata.d_sr |
                        (*rtmMessage).radioMetadata.t_sh_rqst |
                        !(*rtmMessage).radioMetadata.d_ref |
                        (*rtmMessage).radioMetadata.q_dir |
                        (*rtmMessage).radioMetadata.d_emergencystop |
                        (*rtmMessage).radioMetadata.m_version) & /* 5 */
                      CheckIfPacket15IsPresent_SubFunctions(rtmMessage);
                  }
                  else {
                    _1_else_clock_IfBlock1 =
                      (*rtmMessage).Radio_Common_Header.nid_message == 39;
                    if (_1_else_clock_IfBlock1) {
                      valid = (*rtmMessage).Radio_Common_Header.m_ack ==
                        M_ACK_No_acknowledgement_required;
                    }
                    else {
                      else_clock_IfBlock1 =
                        (*rtmMessage).Radio_Common_Header.nid_message == 41;
                      if (else_clock_IfBlock1) {
                        valid =
                          !((*rtmMessage).radioMetadata.t_train_reference |
                            (*rtmMessage).radioMetadata.nid_em |
                            (*rtmMessage).radioMetadata.q_scale |
                            (*rtmMessage).radioMetadata.d_sr |
                            (*rtmMessage).radioMetadata.t_sh_rqst |
                            (*rtmMessage).radioMetadata.d_ref |
                            (*rtmMessage).radioMetadata.q_dir |
                            (*rtmMessage).radioMetadata.d_emergencystop |
                            (*rtmMessage).radioMetadata.m_version);
                      }
                      else {
                        valid = kcg_false;
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
  return valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckMandatoryVariablesAndMA.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

