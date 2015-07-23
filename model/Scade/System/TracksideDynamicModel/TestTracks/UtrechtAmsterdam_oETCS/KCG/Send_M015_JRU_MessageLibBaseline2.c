/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M015_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M015_JRU */
void Send_M015_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M015_JRU::M015 */M_015_int_T_TM_radio_messages *M015,
  /* MessageLibBaseline2::Send_M015_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M015_int_to_header_TM_radio_messages(M015, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M015_JRU_MessageLibBaseline2.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

