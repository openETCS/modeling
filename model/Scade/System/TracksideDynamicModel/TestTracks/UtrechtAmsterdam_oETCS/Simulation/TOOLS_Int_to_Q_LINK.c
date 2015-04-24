/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_LINK.h"

void TOOLS_Int_to_Q_LINK_reset(outC_TOOLS_Int_to_Q_LINK *outC)
{
}

/* TOOLS_Int_to_Q_LINK */
void TOOLS_Int_to_Q_LINK(
  /* TOOLS_Int_to_Q_LINK::Q_DIR_as_sInt */kcg_int Q_DIR_as_sInt,
  outC_TOOLS_Int_to_Q_LINK *outC)
{
  outC->_L12 = ENUM_Q_LINK_unlinked_Q_LINK;
  outC->_L6 = ENUM_Q_LINK_linked_Q_LINK;
  outC->_L5 = INT_Q_LINK_linked;
  outC->_L2 = Q_DIR_as_sInt;
  outC->_L4 = outC->_L2 == outC->_L5;
  if (outC->_L4) {
    outC->_L3 = outC->_L6;
  }
  else {
    outC->_L3 = outC->_L12;
  }
  outC->QDIR = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_LINK.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

