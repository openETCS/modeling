/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.h"

void MRSP_FindMax_of_all_t_cats_LOOP_reset_TA_MRSP(
  outC_MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP */
void MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::Init_target */SSP_t_indexed_matrix_element_TA_MRSP *Init_target,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::SSP_indexed_target */SSP_t_indexed_matrix_element_TA_MRSP *SSP_indexed_target,
  outC_MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP *outC)
{
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->_L23,
    SSP_indexed_target);
  outC->_L26 = i;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L32, &outC->_L23);
  if (kcg_true) {
    outC->_L32.Category_Index = outC->_L26;
  }
  outC->_L28 = 0;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->_L14,
    SSP_indexed_target);
  outC->_L20 = outC->_L14.Loc;
  outC->_L27 = outC->_L28 != outC->_L20;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L13, Init_target);
  outC->_L15 = outC->_L13.Loc;
  outC->_L21 = outC->_L20 >= outC->_L15;
  outC->_L29 = outC->_L27 & outC->_L21;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L24, Init_target);
  if (outC->_L29) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L25, &outC->_L32);
  }
  else {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L25, &outC->_L24);
  }
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->Max, &outC->_L25);
  outC->_L30 = kcg_true;
  outC->cont = outC->_L30;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

