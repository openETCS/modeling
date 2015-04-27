/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_UPDOWN.h"

void TOOLS_Int_to_Q_UPDOWN_reset(outC_TOOLS_Int_to_Q_UPDOWN *outC)
{
}

/* TOOLS_Int_to_Q_UPDOWN */
void TOOLS_Int_to_Q_UPDOWN(
  /* TOOLS_Int_to_Q_UPDOWN::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_Q_UPDOWN *outC)
{
  outC->_L26 = ENUM_Q_UPDOWN_downlink_Q_UPDOWN;
  outC->_L25 = ENUM_Q_UPDOWN_uplink_Q_UPDOWN;
  outC->_L24 = INT_Q_UPDOWN_uplink;
  outC->_L2 = int_in;
  outC->_L19 = outC->_L2 == outC->_L24;
  if (outC->_L19) {
    outC->_L3 = outC->_L25;
  }
  else {
    outC->_L3 = outC->_L26;
  }
  outC->q_updown = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_UPDOWN.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

