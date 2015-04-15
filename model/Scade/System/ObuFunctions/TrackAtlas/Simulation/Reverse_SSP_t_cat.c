/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reverse_SSP_t_cat.h"

void Reverse_SSP_t_cat_reset(outC_Reverse_SSP_t_cat *outC)
{
}

/* Reverse_SSP_t_cat */
void Reverse_SSP_t_cat(
  /* Reverse_SSP_t_cat::SSP_cat_in */SSP_t_cat_t *SSP_cat_in,
  outC_Reverse_SSP_t_cat *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_t_cat_t(&outC->_L1, SSP_cat_in);
  for (i = 0; i < 8; i++) {
    outC->_L2[i] = outC->_L1[7 - i];
  }
  kcg_copy_SSP_t_cat_t(&outC->SSP_cat_out, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reverse_SSP_t_cat.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

