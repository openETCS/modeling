/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineRelevantSpeedperCat.h"

void DetermineRelevantSpeedperCat_reset(outC_DetermineRelevantSpeedperCat *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */ DetermineRelevantSpeedper_reset(&outC->Context_1[i]);
  }
  /* 2 */ FindLastSSPSection_reset(&outC->Context_2);
}

/* DetermineRelevantSpeedperCat */
void DetermineRelevantSpeedperCat(
  /* DetermineRelevantSpeedperCat::CurrentTarget */SSP_t_section_t CurrentTarget,
  /* DetermineRelevantSpeedperCat::SSP_cat */SSP_cat_t *SSP_cat,
  outC_DetermineRelevantSpeedperCat *outC)
{
  kcg_int i2;
  kcg_int i1;
  SSP_relevant_target_t tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_relevant_target_t(
    &outC->_L63,
    (SSP_relevant_target_t *) &DEFAULT_relevant_target);
  kcg_copy_SSP_cat_t(&outC->_L3, SSP_cat);
  /* 2 */ FindLastSSPSection(&outC->_L3, &outC->Context_2);
  kcg_copy_SSP_valid_section_t(&outC->_L11, &outC->Context_2.Index_Last);
  for (i2 = 0; i2 < 8; i2++) {
    kcg_copy_SSP_valid_section_t(&outC->_L29[i2], &outC->_L11);
  }
  outC->_L4 = CurrentTarget;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L12[i1] = outC->_L4;
  }
  outC->_L8 = kcg_true;
  kcg_copy_SSP_relevant_target_t(&outC->_L30, &outC->_L63);
  if (outC->_L8) {
    for (i = 0; i < 8; i++) {
      kcg_copy_SSP_relevant_target_t(&tmp, &outC->_L30);
      /* 1 */
      DetermineRelevantSpeedper(
        i,
        &tmp,
        &outC->_L29[i],
        &outC->_L3[i],
        outC->_L12[i],
        &outC->Context_1[i]);
      kcg_copy_SSP_relevant_target_t(
        &outC->_L30,
        &outC->Context_1[i].TargetCurrentCycle);
      outC->_L2 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  outC->_L64 = outC->_L30.index;
  noname = outC->_L2;
  if ((0 <= outC->_L64) & (outC->_L64 < 8)) {
    kcg_copy_SSP_section_t(&outC->_L52, &outC->_L3[outC->_L64]);
  }
  else {
    kcg_copy_SSP_section_t(&outC->_L52, (SSP_section_t *) &DEFAULT_SSP_section);
  }
  outC->_L53 = outC->_L52.speed;
  outC->ValidSpeed = outC->_L53;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineRelevantSpeedperCat.c
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

