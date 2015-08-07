/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.h"

void MRSP_SplitAndReverseSSP_LOOP2_reset_TA_MRSP(
  outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2 */
void MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::SSP_section_in */SSP_section_t_TA_MRSP *SSP_section_in,
  outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP *outC)
{
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L1, SSP_section_in);
  outC->_L6 = outC->_L1.target;
  outC->SSP_t_section_out = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

