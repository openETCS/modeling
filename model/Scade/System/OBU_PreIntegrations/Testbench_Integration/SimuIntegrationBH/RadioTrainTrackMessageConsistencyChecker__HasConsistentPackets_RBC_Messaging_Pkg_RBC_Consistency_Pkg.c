/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets */
kcg_bool RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _1_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L2_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _5_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L227_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::then::_L1 */
  static kcg_bool _L128_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _4_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _9_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L229_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_bool _L130_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _8_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _13_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L233_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L134_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _12_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _17_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L237_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static outPackets_T_Common_Types_Pkg _L138_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _16_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_bool _L139_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _14_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L336_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L235_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _15_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _10_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::then::_L2 */
  static kcg_bool _L232_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::then::_L3 */
  static outPackets_T_Common_Types_Pkg _L331_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _11_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _6_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::then::_L4 */
  static outPackets_T_Common_Types_Pkg _L4_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _7_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _2_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::then::_L1 */
  static kcg_bool _L126_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L225_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _3_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackmessageId */
  static NID_MESSAGE radioTrainTrackmessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackPackets */
  static outPackets_T_Common_Types_Pkg radioTrainTrackPackets;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::_L4 */
  static NID_MESSAGE _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::_L5 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::_L6 */
  static outPackets_T_Common_Types_Pkg _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool _40_outIsConsistent;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L5,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L5,
    &_L3);
  _L4 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L3);
  radioTrainTrackmessageId = _L4;
  IfBlock1_clock = radioTrainTrackmessageId == 129;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _24_else_clock_IfBlock1 = radioTrainTrackmessageId == 132;
    /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
    }
    else {
      _23_else_clock_IfBlock1 = radioTrainTrackmessageId == 136;
      /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
      }
      else {
        _22_else_clock_IfBlock1 = radioTrainTrackmessageId == 146;
        /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
        }
        else {
          _21_else_clock_IfBlock1 = radioTrainTrackmessageId == 154;
          /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
          }
          else {
            _20_else_clock_IfBlock1 = radioTrainTrackmessageId == 155;
            /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
            }
            else {
              _19_else_clock_IfBlock1 = radioTrainTrackmessageId == 159;
              /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
              }
              else {
                _18_else_clock_IfBlock1 = radioTrainTrackmessageId == 156;
                /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackmessageId == 147;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  }
                  else {
                    _L139_IfBlock1 = kcg_false;
                    _16_outIsConsistent = _L139_IfBlock1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L5,
    &_L6);
  kcg_copy_outPackets_T_Common_Types_Pkg(&radioTrainTrackPackets, &_L6);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_outPackets_T_Common_Types_Pkg(
      &_L2_IfBlock1,
      &radioTrainTrackPackets);
    _L1_IfBlock1 = /* 1 */
      Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &_L2_IfBlock1);
    _1_outIsConsistent = _L1_IfBlock1;
    _40_outIsConsistent = _1_outIsConsistent;
  }
  else {
    /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
      kcg_copy_outPackets_T_Common_Types_Pkg(
        &_L225_IfBlock1,
        &radioTrainTrackPackets);
      _L126_IfBlock1 = /* 1 */
        Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &_L225_IfBlock1);
      _3_outIsConsistent = _L126_IfBlock1;
      outIsConsistent = _3_outIsConsistent;
    }
    else {
      /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
        kcg_copy_outPackets_T_Common_Types_Pkg(
          &_L227_IfBlock1,
          &radioTrainTrackPackets);
        _L128_IfBlock1 = /* 1 */
          Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &_L227_IfBlock1);
        _5_outIsConsistent = _L128_IfBlock1;
        _2_outIsConsistent = _5_outIsConsistent;
      }
      else {
        /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
          kcg_copy_outPackets_T_Common_Types_Pkg(
            &_L4_IfBlock1,
            &radioTrainTrackPackets);
          _L3_IfBlock1 = /* 1 */
            Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &_L4_IfBlock1);
          _7_outIsConsistent = _L3_IfBlock1;
          _4_outIsConsistent = _7_outIsConsistent;
        }
        else {
          /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
            kcg_copy_outPackets_T_Common_Types_Pkg(
              &_L229_IfBlock1,
              &radioTrainTrackPackets);
            _L130_IfBlock1 = /* 1 */
              Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &_L229_IfBlock1);
            _9_outIsConsistent = _L130_IfBlock1;
            _6_outIsConsistent = _9_outIsConsistent;
          }
          else {
            /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
              kcg_copy_outPackets_T_Common_Types_Pkg(
                &_L331_IfBlock1,
                &radioTrainTrackPackets);
              _L232_IfBlock1 = /* 1 */
                Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &_L331_IfBlock1);
              _11_outIsConsistent = _L232_IfBlock1;
              _8_outIsConsistent = _11_outIsConsistent;
            }
            else {
              /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
                kcg_copy_outPackets_T_Common_Types_Pkg(
                  &_L233_IfBlock1,
                  &radioTrainTrackPackets);
                _L134_IfBlock1 = /* 1 */
                  Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &_L233_IfBlock1);
                _13_outIsConsistent = _L134_IfBlock1;
                _10_outIsConsistent = _13_outIsConsistent;
              }
              else {
                /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
                  kcg_copy_outPackets_T_Common_Types_Pkg(
                    &_L235_IfBlock1,
                    &radioTrainTrackPackets);
                  _L336_IfBlock1 = /* 1 */
                    Msg156ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &_L235_IfBlock1);
                  _15_outIsConsistent = _L336_IfBlock1;
                  _12_outIsConsistent = _15_outIsConsistent;
                }
                else {
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    kcg_copy_outPackets_T_Common_Types_Pkg(
                      &_L138_IfBlock1,
                      &radioTrainTrackPackets);
                    _L237_IfBlock1 = /* 1 */
                      Msg147ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                        &_L138_IfBlock1);
                    _17_outIsConsistent = _L237_IfBlock1;
                    _14_outIsConsistent = _17_outIsConsistent;
                  }
                  else {
                    _14_outIsConsistent = _16_outIsConsistent;
                  }
                  _12_outIsConsistent = _14_outIsConsistent;
                }
                _10_outIsConsistent = _12_outIsConsistent;
              }
              _8_outIsConsistent = _10_outIsConsistent;
            }
            _6_outIsConsistent = _8_outIsConsistent;
          }
          _4_outIsConsistent = _6_outIsConsistent;
        }
        _2_outIsConsistent = _4_outIsConsistent;
      }
      outIsConsistent = _2_outIsConsistent;
    }
    _40_outIsConsistent = outIsConsistent;
  }
  return _40_outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

