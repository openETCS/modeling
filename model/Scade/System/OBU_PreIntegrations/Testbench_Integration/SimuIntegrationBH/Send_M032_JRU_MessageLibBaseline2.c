/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M032_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M032_JRU */
void Send_M032_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M032_JRU::M032 */ M_032_int_T_TM_radio_messages *M032,
  /* MessageLibBaseline2::Send_M032_JRU::Message_Out */ M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* MessageLibBaseline2::Send_M032_JRU::_L1 */
  static M_032_int_T_TM_radio_messages _L1;
  /* MessageLibBaseline2::Send_M032_JRU::_L2 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L2;
  
  kcg_copy_M_032_int_T_TM_radio_messages(&_L1, M032);
  /* 1 */ C_M032_int_to_header_TM_RBC_conversions(&_L1, &_L2);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(Message_Out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M032_JRU_MessageLibBaseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

