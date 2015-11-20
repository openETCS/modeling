/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m39 */
void dec_m39_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m39::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m39::m39_acknowledgementOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_acknowledgementOfTerminationOfACommunicationSession)
{
  /* RCM_Utils_Pkg::decoders::dec_m39::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L17 */
  static kcg_bool _L17;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L20 */
  static MsgSource_T_Common_Types_Pkg _L20;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L72 */
  static kcg_bool _L72;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L71 */
  static MsgSource_T_Common_Types_Pkg _L71;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L70 */
  static MsgSource_T_Common_Types_Pkg _L70;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L69 */
  static kcg_bool _L69;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L68 */
  static kcg_bool _L68;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L67 */
  static kcg_bool _L67;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L73 */
  static NID_MESSAGE _L73;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L75 */
  static kcg_bool _L75;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L76 */
  static NID_MESSAGE _L76;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L77 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L77;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L78 */
  static RBC_Id_T_Common_Types_Pkg _L78;
  /* RCM_Utils_Pkg::decoders::dec_m39::_L79 */
  static NID_LRBG _L79;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, msg_in);
  _L17 = _L1.valid;
  _L20 = _L1.source;
  _L70 = msrc_RadioInfillUnit_Common_Types_Pkg;
  _L67 = _L20 == _L70;
  _L71 = msrc_Euroradio_Common_Types_Pkg;
  _L68 = _L20 == _L71;
  _L72 = _L68 | _L67;
  _L73 = _L1.Radio_Common_Header.nid_message;
  _L76 = cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg;
  _L75 = _L73 == _L76;
  _L69 = _L17 & _L72 & _L75;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L78, &_L1.sendingRBC);
  _L79 = _L1.Radio_Common_Header.nid_lrbg;
  _L77.valid = _L69;
  _L77.msgSrc = _L20;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L77.origin, &_L78);
  _L77.lrbg = _L79;
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    m39_acknowledgementOfTerminationOfACommunicationSession,
    &_L77);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m39_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

