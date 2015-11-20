/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPacketsMsg */
kcg_int countPacketsMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ReceivedMessage_T_Common_Types_Pkg *Message)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* xdebugSupport_Pkg::countPacketsMsg::count */
  static kcg_int count;
  
  count = 0;
  for (i = 0; i < 30; i++) {
    tmp1 = count;
    /* 1 */
    countBasics_xdebugSupport_Pkg(
      tmp1,
      &(*Message).packets.PacketHeaders[i],
      &tmp,
      &count);
    if (!tmp) {
      break;
    }
  }
  return count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countPacketsMsg_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

