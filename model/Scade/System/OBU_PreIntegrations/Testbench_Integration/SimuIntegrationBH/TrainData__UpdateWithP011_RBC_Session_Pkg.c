/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP011_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP011 */
void TrainData__UpdateWithP011_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L30 */
  static TrainData_T _L30;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L29 */
  static TrainData_T _L29;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L26 */
  static L_TRAIN _L26;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L24 */
  static N_AXLE _L24;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L22 */
  static TrainData_T _L22;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L21 */
  static NC_TRAIN _L21;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L20 */
  static TrainData_T _L20;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L19 */
  static outPackets_T_Common_Types_Pkg _L19;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L18 */
  static TrainData_T _L18;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L16 */
  static TrainData_T _L16;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L15 */
  static TrainData_T _L15;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L14 */
  static M_AXLELOADCAT _L14;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L13 */
  static NC_CDTRAIN _L13;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L12 */
  static V_MAXTRAIN _L12;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L10 */
  static TrainData_T _L10;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L9 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L9;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L8 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L8;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L7 */
  static TrainData_T _L7;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L6 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L6;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L5 */
  static M_LOADINGGAUGE _L5;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L4 */
  static TrainData_T _L4;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L1 */
  static M_AIRTIGHT _L1;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L31 */
  static TrainData_T _L31;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L32 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L32;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L32,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L32,
    &_L19);
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L19,
    &_L6);
  _L1 = /* 1 */
    RadioTrainTrackPacket011__Get_M_AIRTIGHT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  kcg_copy_TrainData_T(&_L31, inTrainData);
  _L13 = /* 1 */
    RadioTrainTrackPacket011__Get_NC_CDTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  /* 1 */ TrainData__Set_NC_CDTRAIN_RBC_Session_Pkg(&_L31, _L13, &_L15);
  _L21 = /* 1 */
    RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L6);
  /* 1 */ TrainData__Set_NC_TRAIN_RBC_Session_Pkg(&_L15, _L21, &_L16);
  _L26 = /* 1 */
    RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L6);
  /* 1 */ TrainData__Set_L_TRAIN_RBC_Session_Pkg(&_L16, _L26, &_L29);
  _L12 = /* 1 */
    RadioTrainTrackPacket011__Get_V_MAXTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  /* 1 */ TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg(&_L29, _L12, &_L18);
  _L5 = /* 1 */
    RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
      &_L6);
  /* 1 */ TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg(&_L18, _L5, &_L10);
  _L14 = /* 1 */
    RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
      &_L6);
  /* 1 */ TrainData__Set_M_AXLELOADCAT_RBC_Session_Pkg(&_L10, _L14, &_L22);
  /* 1 */ TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg(&_L22, _L1, &_L7);
  _L24 = /* 1 */
    RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L6);
  /* 1 */ TrainData__Set_N_AXLE_RBC_Session_Pkg(&_L7, _L24, &_L30);
  /* 1 */
  RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
    &_L6,
    &_L8);
  /* 1 */ TrainData__SetTractionIdentities_RBC_Session_Pkg(&_L30, &_L8, &_L4);
  /* 1 */
  RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
    &_L6,
    &_L9);
  /* 1 */
  TrainData__SetNationalSystemIdentities_RBC_Session_Pkg(&_L4, &_L9, &_L20);
  kcg_copy_TrainData_T(outTrainData, &_L20);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP011_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

