/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Calculate_MRSP_TA_MRSP.h"

void Calculate_MRSP_reset_TA_MRSP(outC_Calculate_MRSP_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 200; i++) {
    /* 1 */ MRSP_Build_MRSP_LOOP_reset_TA_MRSP(&outC->_3_Context_1[i]);
  }
  /* 1 */ MRSP_Determine_LengthOfTargetList_reset_TA_MRSP(&outC->_2_Context_1);
  /* 1 */ MRSP_BuildTargetList_reset_TA_MRSP(&outC->_1_Context_1);
  /* 1 */ MRSP_Split_And_Reverse_SSP_matrix_reset_TA_MRSP(&outC->Context_1);
}

/* TA_MRSP::Calculate_MRSP */
void Calculate_MRSP_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_Calculate_MRSP_TA_MRSP *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->_L15, SSP_matrix_in);
  /* 1 */
  MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP(&outC->_L15, &outC->Context_1);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(
    &outC->_L3,
    &outC->Context_1.SSP_reverse_t_matrix_out);
  kcg_copy_SSP_matrix_t_TA_MRSP(
    &outC->_L4,
    &outC->Context_1.SSP_reverse_matrix_out);
  /* 1 */ MRSP_BuildTargetList_TA_MRSP(&outC->_L3, &outC->_1_Context_1);
  kcg_copy_SSP_t_list_t_TA_MRSP(&outC->_L1, &outC->_1_Context_1.SSP_list_out);
  /* 1 */
  MRSP_Determine_LengthOfTargetList_TA_MRSP(&outC->_L1, &outC->_2_Context_1);
  outC->_L6 = outC->_2_Context_1.length;
  for (i3 = 0; i3 < 200; i3++) {
    outC->_L14[i3] = outC->_L6;
  }
  for (i2 = 0; i2 < 200; i2++) {
    kcg_copy_SSP_t_list_t_TA_MRSP(&outC->_L9[i2], &outC->_L1);
  }
  for (i1 = 0; i1 < 200; i1++) {
    kcg_copy_SSP_matrix_t_TA_MRSP(&outC->_L10[i1], &outC->_L4);
  }
  outC->_L8 = kcg_true;
  if (outC->_L8) {
    for (i = 0; i < 200; i++) {
      /* 1 */
      MRSP_Build_MRSP_LOOP_TA_MRSP(
        i,
        outC->_L14[i],
        &outC->_L9[i],
        &outC->_L10[i],
        &outC->_3_Context_1[i]);
      kcg_copy_MRSP_section_t_TrackAtlasTypes(
        &outC->_L12[i],
        &outC->_3_Context_1[i].MRSP_section_out);
      outC->_L17 = i + 1;
      if (!outC->_3_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L17 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L17; i < 200; i++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L12[i],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_MRSP);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L17;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calculate_MRSP_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

