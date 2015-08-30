/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_MRS_TA_MRSP.h"

void MRSP_Determine_MRS_reset_TA_MRSP(outC_MRSP_Determine_MRS_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ MRSP_Determine_Lowest_Speed_reset_TA_MRSP(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 11; i++) {
    /* 1 */ _20_MRSP_DetermineRelevantSpe_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_Determine_MRS */
void MRSP_Determine_MRS_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_MRS::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_Determine_MRS::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix,
  outC_MRSP_Determine_MRS_TA_MRSP *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  
  outC->_L3 = CurrentTarget;
  for (i2 = 0; i2 < 11; i2++) {
    outC->_L11[i2] = outC->_L3;
  }
  outC->_L10 = 0;
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->_L4, SSP_matrix);
  for (i1 = 0; i1 < 11; i1++) {
    /* 1 */
    _20_MRSP_DetermineRelevantSpe_TA_MRSP(
      outC->_L11[i1],
      &outC->_L4[i1],
      &outC->Context_1[i1]);
    outC->_L5[i1] = outC->Context_1[i1].ValidSpeed;
  }
  outC->_L8 = outC->_L10;
  for (i = 0; i < 11; i++) {
    tmp = outC->_L8;
    /* 1 */
    MRSP_Determine_Lowest_Speed_TA_MRSP(
      i,
      tmp,
      outC->_L5[i],
      &outC->_1_Context_1[i]);
    outC->_L8 = outC->_1_Context_1[i].MRSpeed;
  }
  outC->MRS = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_MRS_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

