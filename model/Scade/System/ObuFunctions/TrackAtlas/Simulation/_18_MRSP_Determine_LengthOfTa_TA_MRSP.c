/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_18_MRSP_Determine_LengthOfTa_TA_MRSP.h"

void _18_MRSP_Determine_LengthOfTa_reset_TA_MRSP(
  outC__18_MRSP_Determine_LengthOfTa_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 363; i++) {
    /* 1 */ MRSP_Determine_LengthOfTa_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_Determine_LengthOfTargetList */
void _18_MRSP_Determine_LengthOfTa_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::SSP_t_list_in */SSP_t_list_t_TA_MRSP *SSP_t_list_in,
  outC__18_MRSP_Determine_LengthOfTa_TA_MRSP *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L183 = 0;
  kcg_copy_SSP_t_list_t_TA_MRSP(&outC->_L2, SSP_t_list_in);
  for (i1 = 0; i1 < 363; i1++) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
      &outC->_L179[i1],
      &outC->_L2[362 - i1]);
  }
  outC->_L181 = kcg_true;
  outC->_L182 = outC->_L183;
  if (outC->_L181) {
    for (i = 0; i < 363; i++) {
      tmp = outC->_L182;
      /* 1 */
      MRSP_Determine_LengthOfTa_TA_MRSP(
        i,
        tmp,
        &outC->_L179[i],
        &outC->Context_1[i]);
      outC->_L182 = outC->Context_1[i].length;
      outC->_L180 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L180 = 0;
  }
  noname = outC->_L180;
  outC->length = outC->_L182;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _18_MRSP_Determine_LengthOfTa_TA_MRSP.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

