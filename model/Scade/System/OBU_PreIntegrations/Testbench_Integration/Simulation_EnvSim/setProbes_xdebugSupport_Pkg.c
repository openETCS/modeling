/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbes_xdebugSupport_Pkg.h"

void setProbes_reset_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::setProbes */
void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  /* xdebugSupport_Pkg::setProbes::_L23 */
  static kcg_bool _L23;
  /* xdebugSupport_Pkg::setProbes::_L32 */
  static kcg_bool _L32;
  /* xdebugSupport_Pkg::setProbes::_L36 */
  static kcg_bool _L36;
  
  outC->radioMSG = (*inMsg).rtm_msg.Radio_Common_Header.nid_message;
  _L32 = outC->radioMSG != cm24_General_Message_Id_Pkg;
  _L36 = !_L32;
  outC->BG_ID = (*inMsg).btm_msg.api_header.nid_bg;
  if (outC->init) {
    tmp1 = 0;
  }
  else {
    tmp1 = outC->rem_BG_ID;
  }
  _L23 = tmp1 != outC->BG_ID;
  if ((*inMsg).valid & _L23) {
    outC->lastBG_ID = outC->BG_ID;
  }
  else if (outC->init) {
    outC->lastBG_ID = 0;
  }
  else {
    outC->lastBG_ID = outC->rem_lastBG_ID;
  }
  if (outC->init) {
    tmp1 = 0;
  }
  else {
    tmp1 = outC->rem_radioMSG;
  }
  if (_L36) {
    tmp = /* 1 */ countPackets_xdebugSupport_Pkg(inMsg);
  }
  else {
    tmp = 0;
  }
  _L36 = (tmp1 != outC->radioMSG) & (_L32 | show24 | (0 > tmp));
  if ((*inMsg).valid & _L36) {
    outC->lastRadioMSG = outC->radioMSG;
  }
  else if (outC->init) {
    outC->lastRadioMSG = 0;
  }
  outC->init = kcg_false;
  outC->isChanged = (*inMsg).valid & (_L23 | _L36);
  outC->packet_id2 = (*inMsg).packets.PacketHeaders[1].nid_packet;
  outC->packet_id1 = (*inMsg).packets.PacketHeaders[0].nid_packet;
  outC->rem_radioMSG = outC->radioMSG;
  outC->rem_BG_ID = outC->BG_ID;
  outC->rem_lastBG_ID = outC->lastBG_ID;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setProbes_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

