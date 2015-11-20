/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValid_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::packetValid */
kcg_bool packetValid_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValid::packetHeader */Metadata_T_Common_Types_Pkg *packetHeader,
  /* xdebugSupport_Pkg::packetValid::which_ID */NID_PACKET which_ID)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* xdebugSupport_Pkg::packetValid::isValid */
  static kcg_bool isValid;
  
  isValid = kcg_true;
  for (i = 0; i < 30; i++) {
    tmp1 = isValid;
    /* 1 */
    packetValidBasics_xdebugSupport_Pkg(
      tmp1,
      &(*packetHeader)[i],
      which_ID,
      &tmp,
      &isValid);
    if (!tmp) {
      break;
    }
  }
  return isValid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** packetValid_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

