/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"

void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::distanceLastMSG */
void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  static kcg_int tmp;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_MSGLocation;
  /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */
  static NID_BG last_MSG_ID;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGReceived */
  static kcg_bool MSGReceived;
  /* xdebugSupport_Pkg::distanceLastMSG::_L11 */
  static kcg_bool _L11;
  
  if (outC->init) {
    last_MSGLocation = 0;
    last_MSG_ID = 0;
  }
  else {
    last_MSGLocation = outC->MSGLocation;
    last_MSG_ID = outC->lastMSG;
  }
  _L11 = (*msg).Radio_Common_Header.nid_message == cm24_General_Message_Id_Pkg;
  if (_L11) {
    tmp = /* 1 */ countPacketsMsg_xdebugSupport_Pkg(msg);
  }
  else {
    tmp = 0;
  }
  MSGReceived = (*msg).valid & ((*msg).source ==
      msrc_Euroradio_Common_Types_Pkg) & (!_L11 | (_L11 & showGeneral) | (tmp >
        0));
  if (MSGReceived) {
    outC->distance = 0.0;
    outC->lastMSG = (*msg).Radio_Common_Header.nid_message;
    outC->MSGLocation = (*odometry).odo.o_nominal;
    outC->lastLRBG = (*msg).Radio_Common_Header.nid_lrbg;
  }
  else {
    if (last_MSG_ID > 0) {
      outC->distance = (kcg_real)
          ((*odometry).odo.o_nominal - last_MSGLocation) / 100.0;
    }
    else {
      outC->distance = 0.0;
    }
    outC->lastMSG = last_MSG_ID;
    outC->MSGLocation = last_MSGLocation;
    if (outC->init) {
      outC->lastLRBG = 0;
    }
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastMSG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

