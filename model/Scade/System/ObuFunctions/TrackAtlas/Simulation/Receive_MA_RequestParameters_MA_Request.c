/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_MA_Request.h"

void Receive_MA_RequestParameters_reset_MA_Request(
  outC_Receive_MA_RequestParameters_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ Read_P015_reset_TM(&outC->_1_Context_1);
  /* 1 */ Read_P057_reset_TM(&outC->Context_1);
}

/* MA_Request::Receive_MA_RequestParameters */
void Receive_MA_RequestParameters_MA_Request(
  /* MA_Request::Receive_MA_RequestParameters::message_in */ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_MA_Request *outC)
{
  P015_OBU_T_TM noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, &outC->_L1.packets);
  /* 1 */ Read_P057_TM(&outC->_L6, &outC->Context_1);
  outC->_L7 = outC->Context_1.received;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L8,
    &outC->Context_1.P057_OBU_out);
  outC->present = outC->_L7;
  outC->_L9 = outC->present;
  outC->Write_1 = outC->_L9;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L3,
    (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *)
      &cMA_RequestParam_MA_Request);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->Init_1,
    &outC->_L3);
  /* 1 */ Read_P015_TM(&outC->_L6, &outC->_1_Context_1);
  outC->_L10 = outC->_1_Context_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L11, &outC->_1_Context_1.P015_OBU_out);
  kcg_copy_P015_OBU_T_TM(&noname, &outC->_L11);
  outC->ma_received = outC->_L10;
  outC->IsNew = outC->_L9;
  kcg_copy_struct__9753(&outC->_L7_1, &outC->Init_1);
  if (outC->init) {
    kcg_copy_struct__9753(&outC->_L6_1, &outC->_L7_1);
  }
  else {
    kcg_copy_struct__9753(&outC->_L6_1, &outC->_L4_1);
  }
  outC->_L5_1 = outC->Write_1;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->BM_Input_1,
    &outC->_L8);
  kcg_copy_struct__9753(&outC->_L2_1, &outC->BM_Input_1);
  if (outC->_L5_1) {
    kcg_copy_struct__9753(&outC->_L4_1, &outC->_L2_1);
  }
  else {
    kcg_copy_struct__9753(&outC->_L4_1, &outC->_L6_1);
  }
  kcg_copy_struct__9753(&outC->Memorized_1, &outC->_L4_1);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L2,
    &outC->Memorized_1);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->MA_RequestParams,
    &outC->_L2);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_MA_RequestParameters_MA_Request.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

