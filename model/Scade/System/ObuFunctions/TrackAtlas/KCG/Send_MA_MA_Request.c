/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_MA_MA_Request.h"

/* MA_Request::Send_MA */
void Send_MA_MA_Request(
  /* MA_Request::Send_MA::msg132 */Radio_TrainTrack_Message_T_Radio_Types_Pkg *msg132,
  /* MA_Request::Send_MA::message_out */Radio_TrainTrack_Message_T_Radio_Types_Pkg *message_out)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(message_out, msg132);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_MA_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

