/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-05T12:18:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindValidSSP_section.h"

void FindValidSSP_section_reset(outC_FindValidSSP_section *outC)
{
}

/* FindValidSSP_section */
void FindValidSSP_section(
  inC_FindValidSSP_section *inC,
  outC_FindValidSSP_section *outC)
{
  outC->_L26 = 1;
  outC->_L24 = DIM_maxSSP_individual_sections;
  outC->_L25 = outC->_L24 - outC->_L26;
  outC->_L22 = inC->i;
  outC->_L23 = outC->_L22 == outC->_L25;
  kcg_copy_SSP_section_t(&outC->_L1, &inC->SSP_section_In);
  outC->_L12 = outC->_L1.target;
  outC->_L11 = int_ZERO;
  outC->_L9 = outC->_L12 == outC->_L11;
  kcg_copy_SSP_section_t(&outC->_L14, &inC->SSP_section_In);
  outC->_L13 = outC->_L14.speed;
  outC->_L20 = int_ZERO;
  outC->_L19 = outC->_L13 > outC->_L20;
  outC->_L21 = outC->_L9 & outC->_L19 & outC->_L23;
  outC->_L10 = int_ZERO;
  outC->_L6 = outC->_L10 < outC->_L12;
  outC->_L8 = outC->_L6 | outC->_L21;
  outC->valid = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindValidSSP_section.c
** Generation date: 2015-04-05T12:18:17
*************************************************************$ */

