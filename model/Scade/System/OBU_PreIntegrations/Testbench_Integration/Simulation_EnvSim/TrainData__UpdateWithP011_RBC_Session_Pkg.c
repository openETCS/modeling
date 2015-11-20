/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP011_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP011 */
void TrainData__UpdateWithP011_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::outTrainData */TrainData_T *outTrainData)
{
  static outPackets_T_Common_Types_Pkg tmp10;
  static TrainData_T tmp9;
  static TrainData_T tmp8;
  static NC_CDTRAIN tmp7;
  static NC_TRAIN tmp6;
  static V_MAXTRAIN tmp5;
  static M_LOADINGGAUGE tmp4;
  static M_AXLELOADCAT tmp3;
  static M_AIRTIGHT tmp2;
  static aTractionIdentity_T_Packet_TrainTypes_Pkg tmp1;
  static aNID_NTC_T_Packet_TrainTypes_Pkg tmp;
  /* RBC_Session_Pkg::TrainData__UpdateWithP011::_L6 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L6;
  
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &tmp10);
  /* 1 */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &tmp10,
    &_L6);
  tmp7 = /* 1 */
    RadioTrainTrackPacket011__Get_NC_CDTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  /* 1 */ TrainData__Set_NC_CDTRAIN_RBC_Session_Pkg(inTrainData, tmp7, &tmp8);
  tmp6 = /* 1 */
    RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
      &_L6);
  /* 1 */ TrainData__Set_NC_TRAIN_RBC_Session_Pkg(&tmp8, tmp6, &tmp9);
  tmp5 = /* 1 */
    RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
      &_L6);
  /* 1 */ TrainData__Set_L_TRAIN_RBC_Session_Pkg(&tmp9, tmp5, &tmp8);
  tmp5 = /* 1 */
    RadioTrainTrackPacket011__Get_V_MAXTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  /* 1 */ TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg(&tmp8, tmp5, &tmp9);
  tmp4 = /* 1 */
    RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
      &_L6);
  /* 1 */ TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg(&tmp9, tmp4, &tmp8);
  tmp3 = /* 1 */
    RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
      &_L6);
  /* 1 */ TrainData__Set_M_AXLELOADCAT_RBC_Session_Pkg(&tmp8, tmp3, &tmp9);
  tmp2 = /* 1 */
    RadioTrainTrackPacket011__Get_M_AIRTIGHT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
      &_L6);
  /* 1 */ TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg(&tmp9, tmp2, &tmp8);
  tmp5 = /* 1 */
    RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
      &_L6);
  /* 1 */ TrainData__Set_N_AXLE_RBC_Session_Pkg(&tmp8, tmp5, &tmp9);
  /* 1 */
  RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
    &_L6,
    &tmp1);
  /* 1 */ TrainData__SetTractionIdentities_RBC_Session_Pkg(&tmp9, &tmp1, &tmp8);
  /* 1 */
  RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
    &_L6,
    &tmp);
  /* 1 */
  TrainData__SetNationalSystemIdentities_RBC_Session_Pkg(
    &tmp8,
    &tmp,
    outTrainData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__UpdateWithP011_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

