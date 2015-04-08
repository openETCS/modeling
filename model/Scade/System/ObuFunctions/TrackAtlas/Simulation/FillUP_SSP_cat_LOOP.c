/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FillUP_SSP_cat_LOOP.h"

void FillUP_SSP_cat_LOOP_reset(outC_FillUP_SSP_cat_LOOP *outC)
{
}

/* FillUP_SSP_cat_LOOP */
void FillUP_SSP_cat_LOOP(
  /* FillUP_SSP_cat_LOOP::i */kcg_int i,
  /* FillUP_SSP_cat_LOOP::SSP_cat_init */SSP_cat_t *SSP_cat_init,
  /* FillUP_SSP_cat_LOOP::SSP_sction_in */SSP_section_t *SSP_sction_in,
  outC_FillUP_SSP_cat_LOOP *outC)
{
  kcg_copy_SSP_section_t(&outC->_L26, SSP_sction_in);
  outC->_L34 = outC->_L26.speed;
  outC->_L48 = 1;
  outC->_L24 = i;
  outC->_L47 = outC->_L24 - outC->_L48;
  outC->_L46 = kcg_true;
  kcg_copy_SSP_cat_t(&outC->_L45, SSP_cat_init);
  outC->_L33 = outC->_L26.target;
  outC->_L38 = outC->_L33 + outC->_L34;
  outC->_L40 = 0;
  outC->_L39 = outC->_L38 > outC->_L40;
  kcg_copy_SSP_cat_t(&outC->_L25, SSP_cat_init);
  kcg_copy_SSP_section_t(&outC->_L42, (SSP_section_t *) &DEFAULT_SSP_section);
  if ((0 <= outC->_L47) & (outC->_L47 < 3)) {
    kcg_copy_SSP_section_t(&outC->_L41, &outC->_L25[outC->_L47]);
  }
  else {
    kcg_copy_SSP_section_t(&outC->_L41, &outC->_L42);
  }
  if (outC->_L39) {
    kcg_copy_SSP_section_t(&outC->_L43, &outC->_L26);
  }
  else {
    kcg_copy_SSP_section_t(&outC->_L43, &outC->_L41);
  }
  kcg_copy_SSP_cat_t(&outC->_L44, &outC->_L45);
  if ((0 <= outC->_L24) & (outC->_L24 < 3)) {
    kcg_copy_SSP_section_t(&outC->_L44[outC->_L24], &outC->_L43);
  }
  kcg_copy_SSP_cat_t(&outC->SSP_cat_out, &outC->_L44);
  outC->cont = outC->_L46;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FillUP_SSP_cat_LOOP.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

