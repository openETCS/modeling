/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindLastSSPSection_TA_MRSP.h"

void MRSP_FindLastSSPSection_reset_TA_MRSP(
  outC_MRSP_FindLastSSPSection_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ MRSP_FindLastSSPSection_LOOP_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_FindLastSSPSection */
void MRSP_FindLastSSPSection_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection::SSP_Reverse_In */SSP_cat_t_TA_MRSP *SSP_Reverse_In,
  outC_MRSP_FindLastSSPSection_TA_MRSP *outC)
{
  SSP_Mark_ValidSSPsection_TA_MRSP tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(
    &outC->_L31,
    (SSP_Mark_ValidSSPsection_TA_MRSP *)
      &DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L1, SSP_Reverse_In);
  outC->_L16 = kcg_true;
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&outC->_L14, &outC->_L31);
  if (outC->_L16) {
    for (i = 0; i < 33; i++) {
      kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&tmp, &outC->_L14);
      /* 1 */
      MRSP_FindLastSSPSection_LOOP_TA_MRSP(
        i,
        &tmp,
        &outC->_L1[i],
        &outC->Context_1[i]);
      kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(
        &outC->_L14,
        &outC->Context_1[i].i_out);
      outC->_L13 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L13 = 0;
  }
  outC->_L28 = outC->_L14.Index;
  outC->_L29 = outC->_L14.Found;
  if ((0 <= outC->_L28) & (outC->_L28 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L19, &outC->_L1[outC->_L28]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &outC->_L19,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  outC->_L21 = outC->_L19.target;
  outC->_L30.found = outC->_L29;
  outC->_L30.index = outC->_L28;
  outC->_L30.target = outC->_L21;
  noname = outC->_L13;
  kcg_copy_SSP_valid_section_t_TA_MRSP(&outC->Index_Last, &outC->_L30);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_TA_MRSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

