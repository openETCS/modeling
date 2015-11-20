/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"

void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::setProbesBalises */
void setProbesBalises_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::setProbesBalises::changedBG */
  static kcg_bool changedBG;
  /* xdebugSupport_Pkg::setProbesBalises::_L51 */
  static NID_BG _L51;
  
  if (outC->init) {
    _L51 = 0;
  }
  else {
    _L51 = outC->bgID;
  }
  if ((*inMsg).valid & ((*inMsg).source == msrc_Eurobalise_Common_Types_Pkg)) {
    changedBG = (*inMsg).BG_Common_Header.nid_bg != _L51;
  }
  else {
    changedBG = kcg_false;
  }
  if (changedBG) {
    outC->baliseInformation.isChanged = kcg_true;
    outC->baliseInformation.bg_id = (*inMsg).BG_Common_Header.nid_bg;
    outC->baliseInformation.nid_c = (*inMsg).BG_Common_Header.nid_c;
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(
      &outC->baliseInformation.errors,
      inErrors);
    outC->bgID = (*inMsg).BG_Common_Header.nid_bg;
  }
  else {
    if (outC->init) {
      kcg_copy_probesBalises_T_xdebugSupport_Pkg(
        &outC->baliseInformation,
        (probesBalises_T_xdebugSupport_Pkg *) &cNoPro_xdebugSupport_Pkg);
    }
    outC->baliseInformation.isChanged = kcg_false;
    outC->bgID = _L51;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setProbesBalises_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

