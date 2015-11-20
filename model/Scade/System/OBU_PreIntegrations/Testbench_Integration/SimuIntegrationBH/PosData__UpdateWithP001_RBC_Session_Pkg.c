/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP001_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__UpdateWithP001 */
void PosData__UpdateWithP001_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__UpdateWithP001::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__UpdateWithP001::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__UpdateWithP001::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L34 */
  static PosData_T _L34;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L33 */
  static Q_DIRTRAIN _L33;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L32 */
  static Q_SCALE _L32;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L31 */
  static PosData_T _L31;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L30 */
  static PosData_T _L30;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L29 */
  static outPackets_T_Common_Types_Pkg _L29;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L28 */
  static Q_LENGTH _L28;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L27 */
  static PosData_T _L27;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L26 */
  static PosData_T _L26;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L25 */
  static L_DOUBTOVER _L25;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L24 */
  static PosData_T _L24;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L23 */
  static PosData_T _L23;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L22 */
  static PosData_T _L22;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L21 */
  static NID_LRBG _L21;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L20 */
  static PosData_T _L20;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L19 */
  static PosData_T _L19;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L18 */
  static M_LEVEL _L18;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L17 */
  static Q_DLRBG _L17;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L16 */
  static Q_DIRLRBG _L16;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L15 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L15;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L14 */
  static M_MODE _L14;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L13 */
  static V_TRAIN _L13;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L12 */
  static D_LRBG _L12;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L11 */
  static PosData_T _L11;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L10 */
  static PosData_T _L10;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L9 */
  static PosData_T _L9;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L8 */
  static NID_NTC _L8;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L7 */
  static PosData_T _L7;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L6 */
  static L_TRAININT _L6;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L5 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L5;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L4 */
  static L_DOUBTUNDER _L4;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L3 */
  static PosData_T _L3;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L35 */
  static PosData_T _L35;
  /* RBC_Session_Pkg::PosData__UpdateWithP001::_L36 */
  static NID_PRVLRBG _L36;
  
  kcg_copy_PosData_T(&_L24, inPosData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L15,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L15,
    &_L29);
  /* 1 */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L29,
    &_L5);
  _L32 = /* 1 */
    RadioTrainTrackPacket001__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L5);
  /* 1 */ PosData__Set_Q_SCALE_RBC_Session_Pkg(&_L24, _L32, &_L3);
  _L4 = /* 1 */
    RadioTrainTrackPacket001__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
      &_L5);
  _L6 = /* 1 */
    RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L5);
  _L21 = /* 1 */
    RadioTrainTrackPacket001__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L5);
  /* 1 */ PosData__Set_NID_LRBG_RBC_Session_Pkg(&_L3, _L21, &_L11);
  _L36 = /* 1 */
    RadioTrainTrackPacket001__Get_NID_PRVLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
      &_L5);
  /* 1 */ PosData__Set_NID_PRVLRBG_RBC_Session_Pkg(&_L11, _L36, &_L35);
  _L12 = /* 1 */
    RadioTrainTrackPacket001__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L5);
  /* 1 */ PosData__Set_D_LRBG_RBC_Session_Pkg(&_L35, _L12, &_L19);
  _L16 = /* 1 */
    RadioTrainTrackPacket001__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
      &_L5);
  /* 1 */ PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(&_L19, _L16, &_L34);
  _L17 = /* 1 */
    RadioTrainTrackPacket001__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L5);
  /* 1 */ PosData__Set_Q_DLRBG_RBC_Session_Pkg(&_L34, _L17, &_L9);
  _L25 = /* 1 */
    RadioTrainTrackPacket001__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
      &_L5);
  /* 1 */ PosData__Set_L_DOUBTOVER_RBC_Session_Pkg(&_L9, _L25, &_L20);
  /* 1 */ PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg(&_L20, _L4, &_L7);
  _L8 = /* 1 */
    RadioTrainTrackPacket001__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L5);
  _L28 = /* 1 */
    RadioTrainTrackPacket001__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L5);
  /* 1 */ PosData__Set_Q_LENGTH_RBC_Session_Pkg(&_L7, _L28, &_L30);
  /* 1 */ PosData__Set_L_TRAININT_RBC_Session_Pkg(&_L30, _L6, &_L27);
  _L13 = /* 1 */
    RadioTrainTrackPacket001__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L5);
  /* 1 */ PosData__Set_V_TRAIN_RBC_Session_Pkg(&_L27, _L13, &_L10);
  _L14 = /* 1 */
    RadioTrainTrackPacket001__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L5);
  _L18 = /* 1 */
    RadioTrainTrackPacket001__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L5);
  _L33 = /* 1 */
    RadioTrainTrackPacket001__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L5);
  /* 1 */ PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg(&_L10, _L33, &_L23);
  /* 1 */ PosData__Set_M_MODE_RBC_Session_Pkg(&_L23, _L14, &_L22);
  /* 1 */ PosData__Set_M_LEVEL_RBC_Session_Pkg(&_L22, _L18, &_L31);
  /* 1 */ PosData__Set_NID_NTC_RBC_Session_Pkg(&_L31, _L8, &_L26);
  kcg_copy_PosData_T(outPosData, &_L26);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__UpdateWithP001_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

