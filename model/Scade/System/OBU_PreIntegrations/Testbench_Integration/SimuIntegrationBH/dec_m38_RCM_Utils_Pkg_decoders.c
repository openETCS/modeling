/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m38 */
void dec_m38_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m38::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m38::m38_initiationOfComSession */ m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfComSession)
{
  /* RCM_Utils_Pkg::decoders::dec_m38::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L17 */
  static kcg_bool _L17;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L20 */
  static MsgSource_T_Common_Types_Pkg _L20;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L72 */
  static kcg_bool _L72;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L71 */
  static MsgSource_T_Common_Types_Pkg _L71;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L70 */
  static MsgSource_T_Common_Types_Pkg _L70;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L69 */
  static kcg_bool _L69;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L68 */
  static kcg_bool _L68;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L67 */
  static kcg_bool _L67;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L73 */
  static NID_MESSAGE _L73;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L74 */
  static NID_MESSAGE _L74;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L75 */
  static kcg_bool _L75;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L76 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L76;
  /* RCM_Utils_Pkg::decoders::dec_m38::_L77 */
  static RBC_Id_T_Common_Types_Pkg _L77;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, msg_in);
  _L17 = _L1.valid;
  _L20 = _L1.source;
  _L70 = msrc_RadioInfillUnit_Common_Types_Pkg;
  _L67 = _L20 == _L70;
  _L71 = msrc_Euroradio_Common_Types_Pkg;
  _L68 = _L20 == _L71;
  _L72 = _L68 | _L67;
  _L73 = _L1.Radio_Common_Header.nid_message;
  _L74 = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
  _L75 = _L73 == _L74;
  _L69 = _L17 & _L72 & _L75;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L77, &_L1.sendingRBC);
  _L76.valid = _L69;
  _L76.msgSrc = _L20;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L76.origin, &_L77);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    m38_initiationOfComSession,
    &_L76);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m38_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

