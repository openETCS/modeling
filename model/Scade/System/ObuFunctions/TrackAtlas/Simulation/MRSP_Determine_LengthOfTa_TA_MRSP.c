/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_LengthOfTa_TA_MRSP.h"

void MRSP_Determine_LengthOfTa_reset_TA_MRSP(
  outC_MRSP_Determine_LengthOfTa_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP */
void MRSP_Determine_LengthOfTa_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::Acc */kcg_int Acc,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::SSP_target_in */SSP_t_indexed_matrix_element_TA_MRSP *SSP_target_in,
  outC_MRSP_Determine_LengthOfTa_TA_MRSP *outC)
{
  kcg_int noname;
  
  outC->_L15 = DIM_SSP_TA_MRSP;
  outC->_L1 = i;
  outC->_L14 = outC->_L15 - outC->_L1;
  outC->_L2 = Acc;
  noname = outC->_L2;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L3, SSP_target_in);
  outC->_L10 = outC->_L3.Loc;
  outC->_L11 = int_ZERO_TA_MRSP;
  outC->_L12 = outC->_L10 == outC->_L11;
  outC->length = outC->_L14;
  outC->cont = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTa_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

