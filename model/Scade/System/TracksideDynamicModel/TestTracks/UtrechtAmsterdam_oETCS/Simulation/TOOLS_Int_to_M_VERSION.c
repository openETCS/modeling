/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_M_VERSION.h"

void TOOLS_Int_to_M_VERSION_reset(outC_TOOLS_Int_to_M_VERSION *outC)
{
}

/* TOOLS_Int_to_M_VERSION */
void TOOLS_Int_to_M_VERSION(
  /* TOOLS_Int_to_M_VERSION::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_M_VERSION *outC)
{
  outC->_L39 = ENUM_M_VERSION_1_1_M_VERSION;
  outC->_L38 = ENUM_M_VERSION_2_0_M_VERSION;
  outC->_L2 = int_in;
  outC->_L36 = INT_M_VERSION_2_0;
  outC->_L35 = outC->_L2 == outC->_L36;
  if (outC->_L35) {
    outC->_L37 = outC->_L38;
  }
  else {
    outC->_L37 = outC->_L39;
  }
  outC->_L34 = ENUM_M_VERSION_1_0_M_VERSION;
  outC->_L33 = INT_M_VERSION_1_0;
  outC->_L32 = outC->_L2 == outC->_L33;
  if (outC->_L32) {
    outC->_L31 = outC->_L34;
  }
  else {
    outC->_L31 = outC->_L37;
  }
  outC->_L30 = ENUM_M_VERSION_previous_M_VERSION;
  outC->_L29 = INT_M_VERSION_previous_M;
  outC->_L28 = outC->_L2 <= outC->_L29;
  if (outC->_L28) {
    outC->_L27 = outC->_L30;
  }
  else {
    outC->_L27 = outC->_L31;
  }
  outC->m_version = outC->_L27;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_M_VERSION.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

