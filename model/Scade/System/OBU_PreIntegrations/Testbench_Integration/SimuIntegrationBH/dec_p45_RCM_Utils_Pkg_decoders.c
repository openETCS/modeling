/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p45_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p45 */
void dec_p45_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_p45::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_p45::p45_radioNetworkRegistration */ p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistration)
{
  /* RCM_Utils_Pkg::decoders::dec_p45::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L17 */
  static kcg_bool _L17;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L27 */
  static CompressedPackets_T_Common_Types_Pkg _L27;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L69 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L69;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L68 */
  static kcg_bool _L68;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L75 */
  static NID_MN _L75;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L74 */
  static Q_DIR _L74;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L73 */
  static kcg_bool _L73;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L77 */
  static kcg_bool _L77;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L78 */
  static p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg _L78;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L79 */
  static RBC_Id_T_Common_Types_Pkg _L79;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L80 */
  static MsgSource_T_Common_Types_Pkg _L80;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, msg_in);
  _L17 = _L1.valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L27, &_L1.packets);
  /* 1 */ Read_P045_TM(&_L27, &_L68, &_L69);
  _L75 = _L69.nid_mn;
  _L74 = _L69.q_dir;
  _L73 = _L69.valid;
  _L77 = _L17 & _L68 & _L73;
  _L80 = _L1.source;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L79, &_L1.sendingRBC);
  _L78.valid = _L77;
  _L78.msgSrc = _L80;
  _L78.q_dir = _L74;
  _L78.nid_mn = _L75;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L78.origin, &_L79);
  kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
    p45_radioNetworkRegistration,
    &_L78);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_p45_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

