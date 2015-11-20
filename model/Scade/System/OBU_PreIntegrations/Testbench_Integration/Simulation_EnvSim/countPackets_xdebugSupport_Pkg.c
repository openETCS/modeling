/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPackets */
kcg_int countPackets_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPackets::msg */API_TrackSideInput_T_API_Msg_Pkg *msg)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* xdebugSupport_Pkg::countPackets::_L3 */
  static kcg_int _L3;
  /* xdebugSupport_Pkg::countPackets::count */
  static kcg_int count;
  
  _L3 = 0;
  for (i = 0; i < 30; i++) {
    tmp1 = _L3;
    /* 1 */
    countBasics_xdebugSupport_Pkg(
      tmp1,
      &(*msg).packets.PacketHeaders[i],
      &tmp,
      &_L3);
    if (!tmp) {
      break;
    }
  }
  count = _L3 - 1;
  return count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countPackets_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

