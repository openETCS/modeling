/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets */
kcg_bool RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage)
{
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackmessageId */
  static NID_MESSAGE radioTrainTrackmessageId;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::radioTrainTrackPackets */
  static outPackets_T_Common_Types_Pkg radioTrainTrackPackets;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &radioTrainTrackPackets);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &tmp);
  radioTrainTrackmessageId = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp);
  IfBlock1_clock = radioTrainTrackmessageId == 129;
  if (IfBlock1_clock) {
    outIsConsistent = /* 1 */
      Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &radioTrainTrackPackets);
  }
  else {
    _7_else_clock_IfBlock1 = radioTrainTrackmessageId == 132;
    if (_7_else_clock_IfBlock1) {
      outIsConsistent = /* 1 */
        Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &radioTrainTrackPackets);
    }
    else {
      _6_else_clock_IfBlock1 = radioTrainTrackmessageId == 136;
      if (_6_else_clock_IfBlock1) {
        outIsConsistent = /* 1 */
          Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &radioTrainTrackPackets);
      }
      else {
        _5_else_clock_IfBlock1 = radioTrainTrackmessageId == 146;
        if (_5_else_clock_IfBlock1) {
          outIsConsistent = /* 1 */
            Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &radioTrainTrackPackets);
        }
        else {
          _4_else_clock_IfBlock1 = radioTrainTrackmessageId == 154;
          if (_4_else_clock_IfBlock1) {
            outIsConsistent = /* 1 */
              Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &radioTrainTrackPackets);
          }
          else {
            _3_else_clock_IfBlock1 = radioTrainTrackmessageId == 155;
            if (_3_else_clock_IfBlock1) {
              outIsConsistent = /* 1 */
                Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &radioTrainTrackPackets);
            }
            else {
              _2_else_clock_IfBlock1 = radioTrainTrackmessageId == 159;
              if (_2_else_clock_IfBlock1) {
                outIsConsistent = /* 1 */
                  Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &radioTrainTrackPackets);
              }
              else {
                _1_else_clock_IfBlock1 = radioTrainTrackmessageId == 156;
                if (_1_else_clock_IfBlock1) {
                  outIsConsistent = /* 1 */
                    Msg156ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &radioTrainTrackPackets);
                }
                else {
                  else_clock_IfBlock1 = radioTrainTrackmessageId == 147;
                  if (else_clock_IfBlock1) {
                    outIsConsistent = /* 1 */
                      Msg147ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                        &radioTrainTrackPackets);
                  }
                  else {
                    outIsConsistent = kcg_false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return outIsConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

