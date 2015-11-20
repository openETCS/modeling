/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M008_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M008_JRU */
void Send_M008_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M008_JRU::M008 */ M_008_int_T_TM_radio_messages *M008,
  /* MessageLibBaseline2::Send_M008_JRU::Message_Out */ M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* MessageLibBaseline2::Send_M008_JRU::_L1 */
  static M_008_int_T_TM_radio_messages _L1;
  /* MessageLibBaseline2::Send_M008_JRU::_L2 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L2;
  
  kcg_copy_M_008_int_T_TM_radio_messages(&_L1, M008);
  /* 1 */ C_M008_int_to_header_TM_RBC_conversions(&_L1, &_L2);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(Message_Out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M008_JRU_MessageLibBaseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

