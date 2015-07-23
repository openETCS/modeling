/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M024_JRU_MessageLibBaseline2.h"

void Send_M024_JRU_reset_MessageLibBaseline2(
  outC_Send_M024_JRU_MessageLibBaseline2 *outC)
{
  /* 1 */ C_M024_int_to_header_reset_TM_radio_messages(&outC->Context_1);
}

/* MessageLibBaseline2::Send_M024_JRU */
void Send_M024_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M024_JRU::M024 */M_024_int_T_TM_radio_messages *M024,
  outC_Send_M024_JRU_MessageLibBaseline2 *outC)
{
  kcg_copy_M_024_int_T_TM_radio_messages(&outC->_L1, M024);
  /* 1 */ C_M024_int_to_header_TM_radio_messages(&outC->_L1, &outC->Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L2,
    &outC->Context_1.Message_Header_Out);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_Out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M024_JRU_MessageLibBaseline2.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

