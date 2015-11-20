/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create */
void RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_MAR */ T_MAR in_T_MAR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_TIMEOUTRQST */ T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_CYCRQST */ T_CYCRQST in_T_CYCRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::outRadioTrackTrainPacket */ P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L2 */
  static T_MAR _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L3 */
  static T_TIMEOUTRQST _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L4 */
  static T_CYCRQST _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L5 */
  static P057_trackside_int_T_TM _L5;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L6 */
  static P057_trackside_int_T_TM _L6;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L7 */
  static P057_trackside_int_T_TM _L7;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L10 */
  static P057_trackside_int_T_TM _L10;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L11 */
  static P057_trackside_int_T_TM _L11;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L12 */
  static kcg_bool _L12;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L13 */
  static P057_trackside_int_T_TM _L13;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L14 */
  static Q_DIR _L14;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L15 */
  static P057_trackside_int_T_TM _L15;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L16 */
  static kcg_int _L16;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L17 */
  static P057_trackside_int_T_TM _L17;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::_L18 */
  static kcg_int _L18;
  
  _L2 = in_T_MAR;
  _L3 = in_T_TIMEOUTRQST;
  _L4 = in_T_CYCRQST;
  kcg_copy_P057_trackside_int_T_TM(
    &_L5,
    (P057_trackside_int_T_TM *) &P057_DEFAULT);
  _L12 = kcg_true;
  /* 1 */
  RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
    &_L5,
    _L12,
    &_L6);
  _L16 = 57;
  /* 1 */
  RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &_L6,
    _L16,
    &_L15);
  _L18 = P57_L_PACKET_RBC_Messaging_Pkg;
  /* 1 */
  RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &_L15,
    _L18,
    &_L17);
  _L14 = in_Q_DIR;
  /* 1 */
  RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &_L17,
    _L14,
    &_L13);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &_L13,
    _L2,
    &_L7);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &_L7,
    _L3,
    &_L10);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_CYCRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
    &_L10,
    _L4,
    &_L11);
  kcg_copy_P057_trackside_int_T_TM(outRadioTrackTrainPacket, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

