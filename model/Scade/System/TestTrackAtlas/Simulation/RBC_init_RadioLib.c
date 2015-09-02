/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_init_RadioLib.h"

void RBC_init_reset_RadioLib(outC_RBC_init_RadioLib *outC)
{
}

/* RadioLib::RBC_init */
void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* RadioLib::RBC_init::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */kcg_int Trigger_in,
  /* RadioLib::RBC_init::Message_sent */kcg_bool Message_sent,
  outC_RBC_init_RadioLib *outC)
{
  outC->_L6 = Message_sent;
  outC->_L4 = Trigger_in;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Packets_in);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L2, Message_in);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L1.message,
    &outC->_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1.packets, &outC->_L3);
  outC->_L1.trigger = outC->_L4;
  outC->_L1.message_sent = outC->_L6;
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_init_RadioLib.c
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

