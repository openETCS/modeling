/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_DIR.h"

void TOOLS_Int_to_Q_DIR_reset(outC_TOOLS_Int_to_Q_DIR *outC)
{
}

/* TOOLS_Int_to_Q_DIR */
void TOOLS_Int_to_Q_DIR(
  /* TOOLS_Int_to_Q_DIR::Q_DIR_as_sInt */kcg_int Q_DIR_as_sInt,
  outC_TOOLS_Int_to_Q_DIR *outC)
{
  outC->_L11 = ENUM_Q_DIR_reverse_QDIR;
  outC->_L10 = ENUM_Q_DIR_both_QDIR;
  outC->_L9 = INT_Q_DIR_both;
  outC->_L2 = Q_DIR_as_sInt;
  outC->_L7 = outC->_L2 == outC->_L9;
  if (outC->_L7) {
    outC->_L8 = outC->_L10;
  }
  else {
    outC->_L8 = outC->_L11;
  }
  outC->_L6 = ENUM_Q_DIR_nomiinal_QDIR;
  outC->_L5 = INT_Q_DIR_nomiinal;
  outC->_L4 = outC->_L2 == outC->_L5;
  if (outC->_L4) {
    outC->_L3 = outC->_L6;
  }
  else {
    outC->_L3 = outC->_L8;
  }
  outC->QDIR = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_DIR.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

