/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-02T18:32:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_calculate_L_PACKET.h"

void TOOLS_calculate_L_PACKET_reset(outC_TOOLS_calculate_L_PACKET *outC)
{
}

/* TOOLS_calculate_L_PACKET */
void TOOLS_calculate_L_PACKET(
  inC_TOOLS_calculate_L_PACKET *inC,
  outC_TOOLS_calculate_L_PACKET *outC)
{
  outC->_L1 = inC->N_ITER;
  outC->_L4 = 1;
  outC->_L5 = outC->_L1 + outC->_L4;
  outC->_L3 = inC->l_section;
  outC->_L6 = outC->_L5 * outC->_L3;
  outC->_L2 = inC->l_common_data;
  outC->_L7 = outC->_L6 + outC->_L2;
  outC->N_ITER_out = outC->_L1;
  outC->L_PACKET = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_calculate_L_PACKET.c
** Generation date: 2015-04-02T18:32:17
*************************************************************$ */

