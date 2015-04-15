/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindLastSSPSection.h"

void FindLastSSPSection_reset(outC_FindLastSSPSection *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */ FindLastSSPSection_LOOP_reset(&outC->Context_1[i]);
  }
}

/* FindLastSSPSection */
void FindLastSSPSection(
  /* FindLastSSPSection::SSP_Reverse_In */SSP_cat_t *SSP_Reverse_In,
  outC_FindLastSSPSection *outC)
{
  SSP_Mark_ValidSSPsection tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_Mark_ValidSSPsection(
    &outC->_L18,
    (SSP_Mark_ValidSSPsection *) &DEFAULT_SSP_Init_ValidSSPsection);
  kcg_copy_SSP_cat_t(&outC->_L1, SSP_Reverse_In);
  outC->_L16 = kcg_true;
  kcg_copy_SSP_Mark_ValidSSPsection(&outC->_L14, &outC->_L18);
  if (outC->_L16) {
    for (i = 0; i < 8; i++) {
      kcg_copy_SSP_Mark_ValidSSPsection(&tmp, &outC->_L14);
      /* 1 */
      FindLastSSPSection_LOOP(i, &tmp, &outC->_L1[i], &outC->Context_1[i]);
      kcg_copy_SSP_Mark_ValidSSPsection(&outC->_L14, &outC->Context_1[i].i_out);
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
  if ((0 <= outC->_L28) & (outC->_L28 < 8)) {
    kcg_copy_SSP_section_t(&outC->_L19, &outC->_L1[outC->_L28]);
  }
  else {
    kcg_copy_SSP_section_t(&outC->_L19, (SSP_section_t *) &DEFAULT_SSP_section);
  }
  outC->_L21 = outC->_L19.target;
  outC->_L30.found = outC->_L29;
  outC->_L30.index = outC->_L28;
  outC->_L30.target = outC->_L21;
  noname = outC->_L13;
  kcg_copy_SSP_valid_section_t(&outC->Index_Last, &outC->_L30);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindLastSSPSection.c
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

