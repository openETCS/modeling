/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p45_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p45 */
void dec_p45_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_p45::msg_in */msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_p45::p45_radioNetworkRegistration */p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistration)
{
  /* RCM_Utils_Pkg::decoders::dec_p45::_L69 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L69;
  /* RCM_Utils_Pkg::decoders::dec_p45::_L68 */
  static kcg_bool _L68;
  
  (*p45_radioNetworkRegistration).msgSrc = (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*p45_radioNetworkRegistration).origin,
    &(*msg_in).sendingRBC);
  /* 1 */ Read_P045_TM(&(*msg_in).packets, &_L68, &_L69);
  (*p45_radioNetworkRegistration).valid = (*msg_in).valid & _L68 & _L69.valid;
  (*p45_radioNetworkRegistration).q_dir = _L69.q_dir;
  (*p45_radioNetworkRegistration).nid_mn = _L69.nid_mn;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dec_p45_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

