/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader */
kcg_bool RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _1_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::then::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _5_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::then::_L4 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L4_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::then::_L1 */
  static kcg_bool _L126_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _4_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _9_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L329_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_bool _L130_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _8_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _13_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L333_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L134_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _12_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _17_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L237_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else::then::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L138_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _16_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_bool _L139_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _14_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L336_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L235_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _15_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _10_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::then::_L1 */
  static kcg_bool _L132_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else::else::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L331_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _11_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _6_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::then::_L1 */
  static kcg_bool _L128_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else::else::then::_L4 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L427_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _7_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _2_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::then::_L1 */
  static kcg_bool _L125_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1::else::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _3_outIsConsistent;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::radioTrainTrackHeader */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg radioTrainTrackHeader;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::_L3 */
  static NID_MESSAGE _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool _40_outIsConsistent;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L2);
  _L3 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  radioTrainTrackMessageId = _L3;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &radioTrainTrackHeader,
    &_L2);
  IfBlock1_clock = radioTrainTrackMessageId == 129;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &_L2_IfBlock1,
      &radioTrainTrackHeader);
    _L1_IfBlock1 = /* 1 */
      Msg129ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &_L2_IfBlock1);
    _1_outIsConsistent = _L1_IfBlock1;
    _40_outIsConsistent = _1_outIsConsistent;
  }
  else {
    _24_else_clock_IfBlock1 = radioTrainTrackMessageId == 132;
    /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &_L3_IfBlock1,
        &radioTrainTrackHeader);
      _L125_IfBlock1 = /* 1 */
        Msg132ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &_L3_IfBlock1);
      _3_outIsConsistent = _L125_IfBlock1;
      outIsConsistent = _3_outIsConsistent;
    }
    else {
      _23_else_clock_IfBlock1 = radioTrainTrackMessageId == 136;
      /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
        kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
          &_L4_IfBlock1,
          &radioTrainTrackHeader);
        _L126_IfBlock1 = /* 1 */
          Msg136ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &_L4_IfBlock1);
        _5_outIsConsistent = _L126_IfBlock1;
        _2_outIsConsistent = _5_outIsConsistent;
      }
      else {
        _22_else_clock_IfBlock1 = radioTrainTrackMessageId == 146;
        /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
          kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
            &_L427_IfBlock1,
            &radioTrainTrackHeader);
          _L128_IfBlock1 = /* 1 */
            Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &_L427_IfBlock1);
          _7_outIsConsistent = _L128_IfBlock1;
          _4_outIsConsistent = _7_outIsConsistent;
        }
        else {
          _21_else_clock_IfBlock1 = radioTrainTrackMessageId == 154;
          /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
            kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
              &_L329_IfBlock1,
              &radioTrainTrackHeader);
            _L130_IfBlock1 = /* 1 */
              Msg154ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &_L329_IfBlock1);
            _9_outIsConsistent = _L130_IfBlock1;
            _6_outIsConsistent = _9_outIsConsistent;
          }
          else {
            _20_else_clock_IfBlock1 = radioTrainTrackMessageId == 155;
            /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
              kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                &_L331_IfBlock1,
                &radioTrainTrackHeader);
              _L132_IfBlock1 = /* 1 */
                Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &_L331_IfBlock1);
              _11_outIsConsistent = _L132_IfBlock1;
              _8_outIsConsistent = _11_outIsConsistent;
            }
            else {
              _19_else_clock_IfBlock1 = radioTrainTrackMessageId == 159;
              /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
                kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                  &_L333_IfBlock1,
                  &radioTrainTrackHeader);
                _L134_IfBlock1 = /* 1 */
                  Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &_L333_IfBlock1);
                _13_outIsConsistent = _L134_IfBlock1;
                _10_outIsConsistent = _13_outIsConsistent;
              }
              else {
                _18_else_clock_IfBlock1 = radioTrainTrackMessageId == 156;
                /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
                  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                    &_L336_IfBlock1,
                    &radioTrainTrackHeader);
                  _L235_IfBlock1 = /* 1 */
                    Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &_L336_IfBlock1);
                  _15_outIsConsistent = _L235_IfBlock1;
                  _12_outIsConsistent = _15_outIsConsistent;
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackMessageId == 147;
                  /* ck_anon_activ */ if (else_clock_IfBlock1) {
                    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                      &_L138_IfBlock1,
                      &radioTrainTrackHeader);
                    _L237_IfBlock1 = /* 1 */
                      Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                        &_L138_IfBlock1);
                    _17_outIsConsistent = _L237_IfBlock1;
                    _14_outIsConsistent = _17_outIsConsistent;
                  }
                  else {
                    _L139_IfBlock1 = kcg_false;
                    _16_outIsConsistent = _L139_IfBlock1;
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
** RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

