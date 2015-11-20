/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countBasics */
void countBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countBasics::accu */kcg_int accu,
  /* xdebugSupport_Pkg::countBasics::element */MetadataElement_T_Common_Types_Pkg *element,
  /* xdebugSupport_Pkg::countBasics::continue */kcg_bool *_1_continue,
  /* xdebugSupport_Pkg::countBasics::count */kcg_int *count)
{
  static kcg_int tmp;
  
  *_1_continue = (*element).nid_packet > 0;
  if ((*element).valid) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  *count = accu + tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBasics_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

