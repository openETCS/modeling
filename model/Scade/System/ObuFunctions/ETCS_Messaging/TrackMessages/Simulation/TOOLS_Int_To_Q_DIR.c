/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-04T20:16:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_To_Q_DIR.h"

void TOOLS_Int_To_Q_DIR_reset(outC_TOOLS_Int_To_Q_DIR *outC)
{
}

/* TOOLS_Int_To_Q_DIR */
void TOOLS_Int_To_Q_DIR(
  inC_TOOLS_Int_To_Q_DIR *inC,
  outC_TOOLS_Int_To_Q_DIR *outC)
{
  outC->_L11 = Q_DIR_reverse_QDIR;
  outC->_L10 = Q_DIR_both_QDIR;
  outC->_L9 = Q_DIR_both_int;
  outC->_L2 = inC->Q_DIR_as_sInt;
  outC->_L7 = outC->_L2 == outC->_L9;
  if (outC->_L7) {
    outC->_L8 = outC->_L10;
  }
  else {
    outC->_L8 = outC->_L11;
  }
  outC->_L6 = Q_DIR_nomiinal_QDIR;
  outC->_L5 = Q_DIR_nomiinal_int;
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
** TOOLS_Int_To_Q_DIR.c
** Generation date: 2015-03-04T20:16:46
*************************************************************$ */

