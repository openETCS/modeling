/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindLastSSPSection_LOOP_TA_MRSP.h"

void MRSP_FindLastSSPSection_LOOP_reset_TA_MRSP(
  outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_FindLastSSPSection_LOOP */
void MRSP_FindLastSSPSection_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::Init */SSP_Mark_ValidSSPsection_TA_MRSP *Init,
  /* TA_MRSP::MRSP_FindLastSSPSection_LOOP::SSP_Reverse_In */SSP_section_t_TA_MRSP *SSP_Reverse_In,
  outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP *outC)
{
  SSP_Mark_ValidSSPsection_TA_MRSP noname;
  
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L1, SSP_Reverse_In);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->SSP_section_In_1, &outC->_L1);
  outC->_L28_1 = int_ZERO_TA_MRSP;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L1_1, &outC->SSP_section_In_1);
  outC->_L12_1 = outC->_L1_1.target;
  outC->_L6_1 = outC->_L28_1 < outC->_L12_1;
  outC->_L30_1 = int_ZERO_TA_MRSP;
  outC->_L9_1 = outC->_L12_1 == outC->_L30_1;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->_L14_1, &outC->SSP_section_In_1);
  outC->_L13_1 = outC->_L14_1.speed;
  outC->_L31_1 = int_ZERO_TA_MRSP;
  outC->_L19_1 = outC->_L13_1 > outC->_L31_1;
  outC->_L17 = i;
  outC->i_1 = outC->_L17;
  outC->_L22_1 = outC->i_1;
  outC->_L27_1 = DIM_maxSSP_individual_sections_TA_MRSP;
  outC->_L26_1 = 1;
  outC->_L25_1 = outC->_L27_1 - outC->_L26_1;
  outC->_L23_1 = outC->_L22_1 == outC->_L25_1;
  outC->_L21_1 = outC->_L9_1 & outC->_L19_1 & outC->_L23_1;
  outC->_L8_1 = outC->_L6_1 | outC->_L21_1;
  outC->valid_1 = outC->_L8_1;
  outC->_L16 = outC->valid_1;
  outC->_L18 = i;
  outC->_L22.Found = outC->_L16;
  outC->_L22.Index = outC->_L18;
  outC->_L20 = !outC->_L16;
  outC->cont = outC->_L20;
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&outC->_L19, Init);
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&noname, &outC->_L19);
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&outC->i_out, &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_LOOP_TA_MRSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

