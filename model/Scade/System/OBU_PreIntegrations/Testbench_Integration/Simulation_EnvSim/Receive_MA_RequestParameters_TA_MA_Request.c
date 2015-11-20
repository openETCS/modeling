/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_TA_MA_Request.h"

void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}

/* TA_MA_Request::Receive_MA_RequestParameters */
void Receive_MA_RequestParameters_TA_MA_Request(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  /* TA_MA_Request::Receive_MA_RequestParameters::_L8 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L8;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L11 */
  static P015_OBU_T_TM _L11;
  
  /* 1 */ Read_P015_TM(&(*message_in).packets, &outC->ma_received, &_L11);
  /* 1 */ Read_P057_TM(&(*message_in).packets, &outC->IsNew, &_L8);
  if (outC->IsNew) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->MA_RequestParams,
      &_L8);
  }
  else if (outC->init) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->MA_RequestParams,
      (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *)
        &cMA_RequestParam_TA_MA_Request);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_MA_RequestParameters_TA_MA_Request.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

