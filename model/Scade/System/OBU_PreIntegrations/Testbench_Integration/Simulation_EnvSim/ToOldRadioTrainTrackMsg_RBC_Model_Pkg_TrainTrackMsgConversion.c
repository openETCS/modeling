/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h"

void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* 1 */
  ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(&outC->Context_1);
}

/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg */
void ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::_L8 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L8;
  
  /* 1 */
  ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
    &(*inNew).Message,
    &outC->outOld.present,
    &_L8);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->outOld.header,
    &_L8);
  /* 1 */
  ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
    (*inNew).Message.nid_message,
    &(*inNew).OptionalPackets,
    &outC->Context_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->outOld.packets,
    &outC->Context_1.oldPackets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

