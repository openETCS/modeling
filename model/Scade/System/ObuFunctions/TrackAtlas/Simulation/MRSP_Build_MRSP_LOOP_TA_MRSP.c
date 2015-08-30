/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Build_MRSP_LOOP_TA_MRSP.h"

void MRSP_Build_MRSP_LOOP_reset_TA_MRSP(outC_MRSP_Build_MRSP_LOOP_TA_MRSP *outC)
{
  /* 1 */ MRSP_Determine_MRS_reset_TA_MRSP(&outC->Context_1);
}

/* TA_MRSP::MRSP_Build_MRSP_LOOP */
void MRSP_Build_MRSP_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::LengthOfTargetList */kcg_int LengthOfTargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::TargetList */SSP_t_list_t_TA_MRSP *TargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix,
  outC_MRSP_Build_MRSP_LOOP_TA_MRSP *outC)
{
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->_L977,
    (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_indexed_target_TA_MRSP);
  outC->_L22 = i;
  outC->_L24 = LengthOfTargetList;
  outC->_L976 = outC->_L22 <= outC->_L24;
  kcg_copy_SSP_t_list_t_TA_MRSP(&outC->_L25, TargetList);
  outC->_L214 = i;
  if ((0 <= outC->_L214) & (outC->_L214 < 363)) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
      &outC->_L213,
      &outC->_L25[outC->_L214]);
  }
  else {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L213, &outC->_L977);
  }
  outC->_L792 = outC->_L213.Loc;
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->_L26, SSP_matrix);
  /* 1 */
  MRSP_Determine_MRS_TA_MRSP(outC->_L792, &outC->_L26, &outC->Context_1);
  outC->_L27 = outC->Context_1.MRS;
  outC->_L211.valid = outC->_L976;
  outC->_L211.Loc_Abs = outC->_L792;
  outC->_L211.Loc_LRBG = outC->_L792;
  outC->_L211.MRS = outC->_L27;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(
    &outC->MRSP_section_out,
    &outC->_L211);
  outC->cont = outC->_L976;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Build_MRSP_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

