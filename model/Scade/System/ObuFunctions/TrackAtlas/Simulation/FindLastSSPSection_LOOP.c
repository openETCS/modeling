/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindLastSSPSection_LOOP.h"

void FindLastSSPSection_LOOP_reset(outC_FindLastSSPSection_LOOP *outC)
{
}

/* FindLastSSPSection_LOOP */
void FindLastSSPSection_LOOP(
  /* FindLastSSPSection_LOOP::i */kcg_int i,
  /* FindLastSSPSection_LOOP::Init */SSP_Mark_ValidSSPsection *Init,
  /* FindLastSSPSection_LOOP::SSP_Reverse_In */SSP_section_t *SSP_Reverse_In,
  outC_FindLastSSPSection_LOOP *outC)
{
  SSP_Mark_ValidSSPsection noname;
  
  kcg_copy_SSP_section_t(&outC->_L1, SSP_Reverse_In);
  kcg_copy_SSP_section_t(&outC->SSP_section_In_1, &outC->_L1);
  outC->_L10_1 = int_ZERO;
  kcg_copy_SSP_section_t(&outC->_L1_1, &outC->SSP_section_In_1);
  outC->_L12_1 = outC->_L1_1.target;
  outC->_L6_1 = outC->_L10_1 < outC->_L12_1;
  outC->_L11_1 = int_ZERO;
  outC->_L9_1 = outC->_L12_1 == outC->_L11_1;
  kcg_copy_SSP_section_t(&outC->_L14_1, &outC->SSP_section_In_1);
  outC->_L13_1 = outC->_L14_1.speed;
  outC->_L20_1 = int_ZERO;
  outC->_L19_1 = outC->_L13_1 > outC->_L20_1;
  outC->_L17 = i;
  outC->i_1 = outC->_L17;
  outC->_L22_1 = outC->i_1;
  outC->_L24_1 = DIM_maxSSP_individual_sections;
  outC->_L26_1 = 1;
  outC->_L25_1 = outC->_L24_1 - outC->_L26_1;
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
  kcg_copy_SSP_Mark_ValidSSPsection(&outC->_L19, Init);
  kcg_copy_SSP_Mark_ValidSSPsection(&noname, &outC->_L19);
  kcg_copy_SSP_Mark_ValidSSPsection(&outC->i_out, &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindLastSSPSection_LOOP.c
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

