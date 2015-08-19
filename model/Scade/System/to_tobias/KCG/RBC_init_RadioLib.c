/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_init_RadioLib.h"

/* RadioLib::RBC_init */
void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* RadioLib::RBC_init::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */kcg_int _1_Trigger_in,
  /* RadioLib::RBC_init::Message_sent */kcg_bool Message_sent,
  /* RadioLib::RBC_init::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &(*R_data_out).message,
    Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*R_data_out).packets,
    Packets_in);
  (*R_data_out).trigger = _1_Trigger_in;
  (*R_data_out).message_sent = Message_sent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_init_RadioLib.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

