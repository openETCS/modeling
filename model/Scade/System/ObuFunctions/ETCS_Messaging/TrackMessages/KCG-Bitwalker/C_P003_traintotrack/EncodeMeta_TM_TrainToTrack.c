/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EncodeMeta_TM_TrainToTrack.h"

/* TM_TrainToTrack::EncodeMeta */
kcg_int EncodeMeta_TM_TrainToTrack(
  /* TM_TrainToTrack::EncodeMeta::nid_packet */NID_PACKET nid_packet,
  /* TM_TrainToTrack::EncodeMeta::index */kcg_int index)
{
  /* TM_TrainToTrack::EncodeMeta::meta */ kcg_int meta;
  
  meta = nid_packet * 100 + index;
  return meta;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EncodeMeta_TM_TrainToTrack.c
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

