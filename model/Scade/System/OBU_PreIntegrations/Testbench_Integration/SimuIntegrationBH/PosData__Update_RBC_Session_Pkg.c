/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Update_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Update */
void PosData__Update_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Update::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Update::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__Update::outPosData */ PosData_T *_7_outPosData)
{
  /* RBC_Session_Pkg::PosData__Update::outPosData */
  static PosData_T _1_outPosData;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::then::_L3 */
  static PosData_T _L3_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::then::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::then::_L1 */
  static PosData_T _L1_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::outPosData */
  static PosData_T outPosData;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::else::else::_L1 */
  static PosData_T _L16_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::outPosData */
  static PosData_T _2_outPosData;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::else::then::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L25_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::else::then::_L3 */
  static PosData_T _L34_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1::else::then::_L4 */
  static PosData_T _L4_IfBlock1;
  /* RBC_Session_Pkg::PosData__Update::outPosData */
  static PosData_T _3_outPosData;
  /* RBC_Session_Pkg::PosData__Update::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Session_Pkg::PosData__Update::validPacket0 */
  static kcg_bool validPacket0;
  /* RBC_Session_Pkg::PosData__Update::validPacket1 */
  static kcg_bool validPacket1;
  /* RBC_Session_Pkg::PosData__Update::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Session_Pkg::PosData__Update::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  /* RBC_Session_Pkg::PosData__Update::_L3 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L3;
  /* RBC_Session_Pkg::PosData__Update::_L5 */
  static kcg_bool _L5;
  /* RBC_Session_Pkg::PosData__Update::_L6 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L6;
  /* RBC_Session_Pkg::PosData__Update::_L7 */
  static kcg_bool _L7;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L2);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L3);
  _L5 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L3);
  validPacket0 = _L5;
  IfBlock1_clock = validPacket0;
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L6);
  _L7 = /* 1 */
    RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &_L6);
  validPacket1 = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_PosData_T(&_L3_IfBlock1, inPosData);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L2_IfBlock1,
      inRadioTrainTrackMessage);
    /* 1 */
    PosData__UpdateWithP000_RBC_Session_Pkg(
      &_L3_IfBlock1,
      &_L2_IfBlock1,
      &_L1_IfBlock1);
    kcg_copy_PosData_T(&_1_outPosData, &_L1_IfBlock1);
    kcg_copy_PosData_T(_7_outPosData, &_1_outPosData);
  }
  else {
    else_clock_IfBlock1 = validPacket1;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_PosData_T(&_L34_IfBlock1, inPosData);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L25_IfBlock1,
        inRadioTrainTrackMessage);
      /* 1 */
      PosData__UpdateWithP001_RBC_Session_Pkg(
        &_L34_IfBlock1,
        &_L25_IfBlock1,
        &_L4_IfBlock1);
      kcg_copy_PosData_T(&_3_outPosData, &_L4_IfBlock1);
      kcg_copy_PosData_T(&outPosData, &_3_outPosData);
    }
    else {
      kcg_copy_PosData_T(&_L16_IfBlock1, inPosData);
      kcg_copy_PosData_T(&_2_outPosData, &_L16_IfBlock1);
      kcg_copy_PosData_T(&outPosData, &_2_outPosData);
    }
    kcg_copy_PosData_T(_7_outPosData, &outPosData);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Update_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

