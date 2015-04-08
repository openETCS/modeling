/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reverse_SSP_cat.h"

void Reverse_SSP_cat_reset(outC_Reverse_SSP_cat *outC)
{
  /* 2 */ FillUP_SSP_cat_reset(&outC->Context_2);
}

/* Reverse_SSP_cat */
void Reverse_SSP_cat(
  /* Reverse_SSP_cat::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_Reverse_SSP_cat *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_cat_t(&outC->_L1, SSP_cat_in);
  /* 2 */ FillUP_SSP_cat(&outC->_L1, &outC->Context_2);
  kcg_copy_SSP_cat_t(&outC->_L4, &outC->Context_2.SSP_cat_out);
  for (i = 0; i < 3; i++) {
    kcg_copy_SSP_section_t(&outC->_L2[i], &outC->_L4[2 - i]);
  }
  kcg_copy_SSP_cat_t(&outC->SSP_cat_out, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reverse_SSP_cat.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

