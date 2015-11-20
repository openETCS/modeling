/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"

void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::distanceLastBG */
void distanceLastBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastBG::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_BGLocation;
  /* xdebugSupport_Pkg::distanceLastBG::BGPassed */
  static kcg_bool BGPassed;
  
  if (outC->init) {
    last_BGLocation = 0;
  }
  else {
    last_BGLocation = outC->BGLocation;
  }
  BGPassed = (*msg).valid & ((*msg).source == msrc_Eurobalise_Common_Types_Pkg);
  if (BGPassed) {
    outC->distance = 0.0;
    outC->lastBG = (*msg).BG_Common_Header.nid_bg;
    outC->BGLocation = (*odometry).odo.o_nominal;
  }
  else {
    outC->distance = (kcg_real) ((*odometry).odo.o_nominal - last_BGLocation) /
      100.0;
    if (outC->init) {
      outC->lastBG = 0;
    }
    outC->BGLocation = last_BGLocation;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastBG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

