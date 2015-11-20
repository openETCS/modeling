/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP003_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP003 */
void TrainData__UpdateWithP003_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::inRadioTraintrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTraintrackMessage,
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::outTrainData */ TrainData_T *outTrainData)
{
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L7 */
  static TrainData_T _L7;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L6 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L6;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L5 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L5;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L4 */
  static TrainData_T _L4;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L3 */
  static kcg_int _L3;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L2 */
  static aNID_RADIO_T_Packet_TrainTypes_Pkg _L2;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L1 */
  static outPackets_T_Common_Types_Pkg _L1;
  /* RBC_Session_Pkg::TrainData__UpdateWithP003::_L9 */
  static TrainData_T _L9;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L6,
    inRadioTraintrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L6,
    &_L1);
  /* 1 */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L1,
    &_L5);
  /* 1 */
  RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &_L5,
    &_L2);
  _L3 = /* 1 */
    RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
      &_L5);
  kcg_copy_TrainData_T(&_L9, inTrainData);
  /* 1 */
  TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(&_L9, _L3, &_L7);
  /* 1 */ TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(&_L7, &_L2, &_L4);
  kcg_copy_TrainData_T(outTrainData, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__UpdateWithP003_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

