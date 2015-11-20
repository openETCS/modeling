/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_MA_RequestParameters_init_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  outC->_L4_1.valid = kcg_true;
  outC->_L4_1.q_dir = Q_DIR_Reverse;
  outC->_L4_1.t_mar = 0;
  outC->_L4_1.t_timeoutrqst = 0;
  outC->_L4_1.t_cycrqst = 0;
  outC->ma_received = kcg_true;
  outC->MA_RequestParams.valid = kcg_true;
  outC->MA_RequestParams.q_dir = Q_DIR_Reverse;
  outC->MA_RequestParams.t_mar = 0;
  outC->MA_RequestParams.t_timeoutrqst = 0;
  outC->MA_RequestParams.t_cycrqst = 0;
  outC->IsNew = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Receive_MA_RequestParameters */
void Receive_MA_RequestParameters_TA_MA_Request(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  /* linear::MemoryBasic::Memorized */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg Init_1;
  /* linear::MemoryBasic::BM_Input */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L7_1;
  /* linear::MemoryBasic::_L6 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L2_1;
  static P015_OBU_T_TM noname;
  /* TA_MA_Request::Receive_MA_RequestParameters::present */
  static kcg_bool present;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L2 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L2;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L8 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L8;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L7 */
  static kcg_bool _L7;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L3 */
  static P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L3;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L9 */
  static kcg_bool _L9;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L11 */
  static P015_OBU_T_TM _L11;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L10 */
  static kcg_bool _L10;
  
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L3,
    (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *)
      &cMA_RequestParam_TA_MA_Request);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &Init_1,
    &_L3);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L7_1,
    &Init_1);
  /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &_L6_1,
      &_L7_1);
  }
  else {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &_L6_1,
      &outC->_L4_1);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, &_L1.packets);
  /* 1 */ Read_P057_TM(&_L6, &_L7, &_L8);
  present = _L7;
  _L9 = present;
  Write_1 = _L9;
  _L5_1 = Write_1;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &BM_Input_1,
    &_L8);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L2_1,
    &BM_Input_1);
  /* 1 */ if (_L5_1) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L4_1,
      &_L2_1);
  }
  else {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L4_1,
      &_L6_1);
  }
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &Memorized_1,
    &outC->_L4_1);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &_L2,
    &Memorized_1);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->MA_RequestParams,
    &_L2);
  outC->IsNew = _L9;
  /* 1 */ Read_P015_TM(&_L6, &_L10, &_L11);
  outC->ma_received = _L10;
  kcg_copy_P015_OBU_T_TM(&noname, &_L11);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_MA_RequestParameters_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

