/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m32 */
void dec_m32_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m32::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m32::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* RCM_Utils_Pkg::decoders::dec_m32::m32_RBC_or_RIU_System_Version */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_RBC_or_RIU_System_Version)
{
  /* RCM_Utils_Pkg::decoders::dec_m32::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L17 */
  static kcg_bool _L17;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L79 */
  static kcg_bool _L79;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L77 */
  static kcg_bool _L77;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L87 */
  static MsgSource_T_Common_Types_Pkg _L87;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L92 */
  static kcg_bool _L92;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L91 */
  static kcg_bool _L91;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L90 */
  static kcg_bool _L90;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L89 */
  static MsgSource_T_Common_Types_Pkg _L89;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L88 */
  static MsgSource_T_Common_Types_Pkg _L88;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L93 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L93;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L109 */
  static NID_MESSAGE _L109;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L111 */
  static kcg_bool _L111;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L112 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L112;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L113 */
  static NID_MESSAGE _L113;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L114 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L114;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L115 */
  static RBC_Id_T_Common_Types_Pkg _L115;
  /* RCM_Utils_Pkg::decoders::dec_m32::_L110 */
  static M_VERSION _L110;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, msg_in);
  _L17 = _L1.valid;
  _L87 = _L1.source;
  _L88 = msrc_Euroradio_Common_Types_Pkg;
  _L91 = _L87 == _L88;
  _L89 = msrc_RadioInfillUnit_Common_Types_Pkg;
  _L92 = _L87 == _L89;
  _L90 = _L91 | _L92;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L93,
    &_L1.Radio_Common_Header);
  _L109 = _L93.nid_message;
  _L113 = cm32_RBC_RIU_System_Version_Id_Pkg;
  _L79 = _L109 == _L113;
  _L77 = _L17 & _L90 & _L79;
  _L111 = systemVersionFromTracksideSupported;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L114, msg_in);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L115, &_L114.sendingRBC);
  _L110 = _L93.m_version;
  _L112.valid = _L77;
  _L112.msgSrc = _L87;
  _L112.versionSupported = _L111;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L112.origin, &_L115);
  _L112.m_version = _L110;
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    m32_RBC_or_RIU_System_Version,
    &_L112);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m32_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

