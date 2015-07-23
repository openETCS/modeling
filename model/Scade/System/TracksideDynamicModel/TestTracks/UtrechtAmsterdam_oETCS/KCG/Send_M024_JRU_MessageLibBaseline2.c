/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M024_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M024_JRU */
void Send_M024_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M024_JRU::M024 */M_024_int_T_TM_radio_messages *M024,
  /* MessageLibBaseline2::Send_M024_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M024_int_to_header_TM_radio_messages(M024, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M024_JRU_MessageLibBaseline2.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

