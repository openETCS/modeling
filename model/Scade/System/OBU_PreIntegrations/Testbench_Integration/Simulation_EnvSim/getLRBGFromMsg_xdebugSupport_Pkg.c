/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getLRBGFromMsg */
NID_LRBG getLRBGFromMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getLRBGFromMsg::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage)
{
  /* xdebugSupport_Pkg::getLRBGFromMsg::LRBG */
  static NID_LRBG LRBG;
  
  if ((*actualMessage).source == msrc_Euroradio_Common_Types_Pkg) {
    LRBG = (*actualMessage).Radio_Common_Header.nid_lrbg;
  }
  else if ((*actualMessage).source == msrc_Eurobalise_Common_Types_Pkg) {
    LRBG = (*actualMessage).BG_Common_Header.nid_bg +
      (*actualMessage).BG_Common_Header.nid_c * 100000;
  }
  else {
    LRBG = 0;
  }
  return LRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGFromMsg_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

