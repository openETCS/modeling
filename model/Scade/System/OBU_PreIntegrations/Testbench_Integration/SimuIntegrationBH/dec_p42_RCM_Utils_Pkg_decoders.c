/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p42 */
void dec_p42_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_p42::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_p42::p42_sessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_sessionManagement)
{
  /* RCM_Utils_Pkg::decoders::dec_p42::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L17 */
  static kcg_bool _L17;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L20 */
  static MsgSource_T_Common_Types_Pkg _L20;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L26 */
  static kcg_bool _L26;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L27 */
  static CompressedPackets_T_Common_Types_Pkg _L27;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L29 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L29;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L28 */
  static kcg_bool _L28;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L43 */
  static Q_SLEEPSESSION _L43;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L42 */
  static NID_RADIO _L42;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L41 */
  static NID_RBC _L41;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L40 */
  static NID_C _L40;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L39 */
  static Q_RBC _L39;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L38 */
  static Q_DIR _L38;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L37 */
  static kcg_bool _L37;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L85 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L85;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L86 */
  static RBC_Id_T_Common_Types_Pkg _L86;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, msg_in);
  _L17 = _L1.valid;
  _L20 = _L1.source;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L27, &_L1.packets);
  /* 1 */ Read_P042_TM(&_L27, &_L28, &_L29);
  _L37 = _L29.valid;
  _L26 = _L17 & _L28 & _L37;
  _L43 = _L29.q_sleepsession;
  _L42 = _L29.nid_radio;
  _L41 = _L29.nid_rbc;
  _L40 = _L29.nid_c;
  _L39 = _L29.q_rbc;
  _L38 = _L29.q_dir;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L86, &_L1.sendingRBC);
  _L85.valid = _L26;
  _L85.msgSrc = _L20;
  _L85.q_dir = _L38;
  _L85.q_rbc = _L39;
  _L85.nid_c = _L40;
  _L85.nid_RBC = _L41;
  _L85.nid_radio = _L42;
  _L85.q_sleepsession = _L43;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L85.origin, &_L86);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    p42_sessionManagement,
    &_L85);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_p42_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

