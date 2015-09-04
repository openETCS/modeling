/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_SSP_t_cat_TA_MRSP.h"

void MRSP_Find_First_in_SSP_t_cat_reset_TA_MRSP(
  outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    MRSP_Find_First_in_SSP_t_cat_LOOP_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat */
void MRSP_Find_First_in_SSP_t_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::SSP_cat_in */SSP_t_cat_t_TA_MRSP *SSP_cat_in,
  outC_MRSP_Find_First_in_SSP_t_cat_TA_MRSP *outC)
{
  kcg_int tmp;
  kcg_int i;
  
  outC->_L4 = 0;
  kcg_copy_SSP_t_cat_t_TA_MRSP(&outC->_L2, SSP_cat_in);
  outC->_L3 = kcg_true;
  outC->_L5 = outC->_L4;
  if (outC->_L3) {
    for (i = 0; i < 33; i++) {
      tmp = outC->_L5;
      /* 1 */
      MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP(
        i,
        tmp,
        outC->_L2[i],
        &outC->Context_1[i]);
      outC->_L5 = outC->Context_1[i].Last_Loc;
      outC->_L1 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L1 = 0;
  }
  outC->_L7 = 1;
  outC->_L8 = outC->_L1 - outC->_L7;
  outC->_L6.Index = outC->_L8;
  outC->_L6.Loc = outC->_L5;
  kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP(&outC->SSP_indexed_loc, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_SSP_t_cat_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

