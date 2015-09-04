/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_MA_MA_Request.h"

void Send_MA_reset_MA_Request(outC_Send_MA_MA_Request *outC)
{
}

/* MA_Request::Send_MA */
void Send_MA_MA_Request(
  /* MA_Request::Send_MA::msg132 */Radio_TrainTrack_Message_T_Radio_Types_Pkg *msg132,
  outC_Send_MA_MA_Request *outC)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L1, msg132);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message_out,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_MA_MA_Request.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

