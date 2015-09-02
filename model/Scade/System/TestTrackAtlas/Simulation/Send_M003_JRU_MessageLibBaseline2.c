/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M003_JRU_MessageLibBaseline2.h"

void Send_M003_JRU_reset_MessageLibBaseline2(
  outC_Send_M003_JRU_MessageLibBaseline2 *outC)
{
  /* 1 */ C_M003_int__to_header_reset_TM_RBC_conversions(&outC->Context_1);
}

/* MessageLibBaseline2::Send_M003_JRU */
void Send_M003_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M003_JRU::M003 */M_003_int_T_TM_radio_messages *M003,
  outC_Send_M003_JRU_MessageLibBaseline2 *outC)
{
  kcg_copy_M_003_int_T_TM_radio_messages(&outC->_L1, M003);
  /* 1 */
  C_M003_int__to_header_TM_RBC_conversions(&outC->_L1, &outC->Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L2,
    &outC->Context_1.Message_Header_Out);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_Out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M003_JRU_MessageLibBaseline2.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

