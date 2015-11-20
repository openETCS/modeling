/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create */
void RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_Q_DIR */Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_MAR */T_MAR in_T_MAR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_TIMEOUTRQST */T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::in_T_CYCRQST */T_CYCRQST in_T_CYCRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create::outRadioTrackTrainPacket */P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  static P057_trackside_int_T_TM tmp1;
  static P057_trackside_int_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
    (P057_trackside_int_T_TM *) &P057_DEFAULT,
    kcg_true,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &tmp,
    57,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &tmp1,
    P57_L_PACKET_RBC_Messaging_Pkg,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &tmp,
    in_Q_DIR,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &tmp1,
    in_T_MAR,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &tmp,
    in_T_TIMEOUTRQST,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket057__Set_T_CYCRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
    &tmp1,
    in_T_CYCRQST,
    outRadioTrackTrainPacket);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

