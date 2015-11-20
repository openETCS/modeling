/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__UpdateWithP000_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__UpdateWithP000 */
void PosData__UpdateWithP000_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__UpdateWithP000::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L1 */
  static PosData_T _L1;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L3 */
  static outPackets_T_Common_Types_Pkg _L3;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L4 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L4;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L5 */
  static NID_LRBG _L5;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L6 */
  static PosData_T _L6;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L7 */
  static PosData_T _L7;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L10 */
  static Q_SCALE _L10;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L11 */
  static D_LRBG _L11;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L12 */
  static Q_DIRLRBG _L12;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L13 */
  static Q_DLRBG _L13;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L14 */
  static L_DOUBTOVER _L14;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L15 */
  static L_DOUBTUNDER _L15;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L16 */
  static Q_LENGTH _L16;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L17 */
  static L_TRAININT _L17;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L18 */
  static Q_DIRTRAIN _L18;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L19 */
  static V_TRAIN _L19;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L20 */
  static M_MODE _L20;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L21 */
  static M_LEVEL _L21;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L22 */
  static NID_NTC _L22;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L23 */
  static PosData_T _L23;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L26 */
  static PosData_T _L26;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L32 */
  static PosData_T _L32;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L35 */
  static PosData_T _L35;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L36 */
  static PosData_T _L36;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L37 */
  static PosData_T _L37;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L40 */
  static PosData_T _L40;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L41 */
  static PosData_T _L41;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L42 */
  static PosData_T _L42;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L43 */
  static PosData_T _L43;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L44 */
  static PosData_T _L44;
  /* RBC_Session_Pkg::PosData__UpdateWithP000::_L45 */
  static PosData_T _L45;
  
  kcg_copy_PosData_T(&_L1, inPosData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L2,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L3);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L3,
    &_L4);
  _L5 = /* 1 */
    RadioTrainTrackPacket000__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L4);
  _L10 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L4);
  /* 1 */ PosData__Set_Q_SCALE_RBC_Session_Pkg(&_L1, _L10, &_L7);
  /* 1 */ PosData__Set_NID_LRBG_RBC_Session_Pkg(&_L7, _L5, &_L6);
  _L11 = /* 1 */
    RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L4);
  _L12 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
      &_L4);
  _L13 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L4);
  _L14 = /* 1 */
    RadioTrainTrackPacket000__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
      &_L4);
  _L15 = /* 1 */
    RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
      &_L4);
  _L16 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L4);
  _L17 = /* 1 */
    RadioTrainTrackPacket000__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L4);
  _L18 = /* 1 */
    RadioTrainTrackPacket000__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L4);
  _L19 = /* 1 */
    RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L4);
  _L20 = /* 1 */
    RadioTrainTrackPacket000__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L4);
  _L21 = /* 1 */
    RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L4);
  _L22 = /* 1 */
    RadioTrainTrackPacket000__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L4);
  /* 1 */ PosData__Set_D_LRBG_RBC_Session_Pkg(&_L6, _L11, &_L23);
  /* 1 */ PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(&_L23, _L12, &_L26);
  /* 1 */ PosData__Set_Q_DLRBG_RBC_Session_Pkg(&_L26, _L13, &_L32);
  /* 1 */ PosData__Set_L_DOUBTOVER_RBC_Session_Pkg(&_L32, _L14, &_L35);
  /* 1 */ PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg(&_L35, _L15, &_L36);
  /* 1 */ PosData__Set_Q_LENGTH_RBC_Session_Pkg(&_L36, _L16, &_L37);
  /* 1 */ PosData__Set_L_TRAININT_RBC_Session_Pkg(&_L37, _L17, &_L40);
  /* 1 */ PosData__Set_V_TRAIN_RBC_Session_Pkg(&_L40, _L19, &_L41);
  /* 1 */ PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg(&_L41, _L18, &_L42);
  /* 1 */ PosData__Set_M_MODE_RBC_Session_Pkg(&_L42, _L20, &_L43);
  /* 1 */ PosData__Set_M_LEVEL_RBC_Session_Pkg(&_L43, _L21, &_L44);
  /* 1 */ PosData__Set_NID_NTC_RBC_Session_Pkg(&_L44, _L22, &_L45);
  kcg_copy_PosData_T(outPosData, &_L45);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__UpdateWithP000_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

