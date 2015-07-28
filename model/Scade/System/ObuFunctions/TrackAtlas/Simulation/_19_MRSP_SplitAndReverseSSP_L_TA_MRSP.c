/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_19_MRSP_SplitAndReverseSSP_L_TA_MRSP.h"

void _19_MRSP_SplitAndReverseSSP_L_reset_TA_MRSP(
  outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ MRSP_SplitAndReverseSSP_LOOP2_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1 */
void _19_MRSP_SplitAndReverseSSP_L_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_cat_in */SSP_cat_t_TA_MRSP *SSP_cat_in,
  outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP *outC)
{
  kcg_int i1;
  kcg_int i;
  
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, SSP_cat_in);
  for (i1 = 0; i1 < 33; i1++) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L18[i1], &outC->_L1[32 - i1]);
  }
  for (i = 0; i < 33; i++) {
    /* 1 */
    MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP(&outC->_L18[i], &outC->Context_1[i]);
    outC->_L35[i] = outC->Context_1[i].SSP_t_section_out;
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SSP_reverse_cat_out, &outC->_L18);
  kcg_copy_SSP_t_cat_t_TA_MRSP(&outC->SSP_reverse_t_cat_out, &outC->_L35);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _19_MRSP_SplitAndReverseSSP_L_TA_MRSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

