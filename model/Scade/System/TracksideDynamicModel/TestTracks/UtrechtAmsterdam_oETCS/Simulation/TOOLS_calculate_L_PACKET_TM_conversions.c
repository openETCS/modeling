/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_calculate_L_PACKET_TM_conversions.h"

void TOOLS_calculate_L_PACKET_reset_TM_conversions(
  outC_TOOLS_calculate_L_PACKET_TM_conversions *outC)
{
}

/* TM_conversions::TOOLS_calculate_L_PACKET */
void TOOLS_calculate_L_PACKET_TM_conversions(
  /* TM_conversions::TOOLS_calculate_L_PACKET::N_ITER */kcg_int N_ITER,
  /* TM_conversions::TOOLS_calculate_L_PACKET::l_common_data */kcg_int l_common_data,
  /* TM_conversions::TOOLS_calculate_L_PACKET::l_section */kcg_int l_section,
  outC_TOOLS_calculate_L_PACKET_TM_conversions *outC)
{
  outC->_L1 = N_ITER;
  outC->_L4 = 1;
  outC->_L5 = outC->_L1 + outC->_L4;
  outC->_L3 = l_section;
  outC->_L6 = outC->_L5 * outC->_L3;
  outC->_L2 = l_common_data;
  outC->_L7 = outC->_L6 + outC->_L2;
  outC->N_ITER_out = outC->_L1;
  outC->L_PACKET = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_calculate_L_PACKET_TM_conversions.c
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

