/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Update_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Update */
void PosData__Update_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Update::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Update::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__Update::outPosData */PosData_T *outPosData)
{
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp2;
  static kcg_bool tmp1;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp;
  /* RBC_Session_Pkg::PosData__Update::validPacket0 */
  static kcg_bool validPacket0;
  /* RBC_Session_Pkg::PosData__Update::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  
  /* 1 */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    inRadioTrainTrackMessage,
    &_L2);
  /* 1 */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &tmp2);
  validPacket0 = /* 1 */
    RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
      &tmp2);
  if (validPacket0) {
    /* 1 */
    PosData__UpdateWithP000_RBC_Session_Pkg(
      inPosData,
      inRadioTrainTrackMessage,
      outPosData);
  }
  else {
    /* 1 */
    RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2,
      &tmp);
    tmp1 = /* 1 */
      RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
        &tmp);
    if (tmp1) {
      /* 1 */
      PosData__UpdateWithP001_RBC_Session_Pkg(
        inPosData,
        inRadioTrainTrackMessage,
        outPosData);
    }
    else {
      kcg_copy_PosData_T(outPosData, inPosData);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Update_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

