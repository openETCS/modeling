/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Decode_NID_PACKET */
kcg_bool Decode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */kcg_int Packet_ID)
{
  /* TM_TrainToTrack::Decode_NID_PACKET::Valid */
  static kcg_bool Valid;
  
  Valid = Meta == Packet_ID;
  return Valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

