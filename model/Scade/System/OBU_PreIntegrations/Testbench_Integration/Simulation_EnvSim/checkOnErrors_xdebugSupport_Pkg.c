/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOnErrors_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkOnErrors */
void checkOnErrors_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::checkOnErrors::errors */MSG_Errors_T_Common_Types_Pkg *errors,
  /* xdebugSupport_Pkg::checkOnErrors::radioMsgError */kcg_bool *radioMsgError,
  /* xdebugSupport_Pkg::checkOnErrors::baliseError */kcg_bool *baliseError)
{
  *baliseError = (*errors).BG_versionIncompatible | (*errors).linkedBGError |
    (*errors).unlinkedBGError;
  *radioMsgError = (*errors).otherTimingError |
    (*errors).radioMessageConsistencyError | (*errors).tNvContactError |
    (*errors).radioSequenceError;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkOnErrors_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

