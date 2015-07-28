/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_Lowest_Speed_TA_MRSP.h"

void MRSP_Determine_Lowest_Speed_reset_TA_MRSP(
  outC_MRSP_Determine_Lowest_Speed_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_Determine_Lowest_Speed */
void MRSP_Determine_Lowest_Speed_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::Acc */SSP_s_section_t_TA_MRSP Acc,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::ValidSpeed */SSP_s_section_t_TA_MRSP ValidSpeed,
  outC_MRSP_Determine_Lowest_Speed_TA_MRSP *outC)
{
  outC->_L2 = ValidSpeed;
  outC->I2_1 = outC->_L2;
  outC->_L5 = 0;
  outC->_L4 = i;
  outC->_L6 = outC->_L5 != outC->_L4;
  outC->_L1 = Acc;
  if (outC->_L6) {
    outC->_L7 = outC->_L1;
  }
  else {
    outC->_L7 = outC->_L2;
  }
  outC->I1_1 = outC->_L7;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L3 = outC->Mi_Output_1;
  outC->MRSpeed = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_Lowest_Speed_TA_MRSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

