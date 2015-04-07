/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Determine_valid_speed_per_cat.h"

void Determine_valid_speed_per_cat_reset(
  outC_Determine_valid_speed_per_cat *outC)
{
  kcg_int i;
  
  for (i = 0; i < 3; i++) {
    /* 1 */ Determine_valid_speed_per_reset(&outC->_1_Context_1[i]);
  }
  /* 1 */ Reverse_SSP_cat_reset(&outC->Context_1);
}

/* Determine_valid_speed_per_cat */
void Determine_valid_speed_per_cat(
  /* Determine_valid_speed_per_cat::SSP_cat */SSP_cat_t *SSP_cat,
  /* Determine_valid_speed_per_cat::CurrentTarget */SSP_t_section_t CurrentTarget,
  outC_Determine_valid_speed_per_cat *outC)
{
  kcg_int i1;
  SSP_section_t tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_cat_t(&outC->_L1, SSP_cat);
  /* 1 */ Reverse_SSP_cat(&outC->_L1, &outC->Context_1);
  kcg_copy_SSP_cat_t(&outC->_L27, &outC->Context_1.SSP_cat_out);
  kcg_copy_SSP_section_t(&outC->_L21, (SSP_section_t *) &DEFAULT_SSP_section);
  outC->_L13 = CurrentTarget;
  for (i1 = 0; i1 < 3; i1++) {
    outC->_L17[i1] = outC->_L13;
  }
  outC->_L15 = kcg_true;
  kcg_copy_SSP_section_t(&outC->_L18, &outC->_L21);
  if (outC->_L15) {
    for (i = 0; i < 3; i++) {
      kcg_copy_SSP_section_t(&tmp, &outC->_L18);
      /* 1 */
      Determine_valid_speed_per(
        &tmp,
        outC->_L17[i],
        &outC->_L27[i],
        &outC->_1_Context_1[i]);
      kcg_copy_SSP_section_t(&outC->_L18, &outC->_1_Context_1[i].ValidSection);
      outC->_L14 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L14 = 0;
  }
  outC->_L26 = outC->_L18.speed;
  noname = outC->_L14;
  outC->ValidSpeed = outC->_L26;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_valid_speed_per_cat.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

