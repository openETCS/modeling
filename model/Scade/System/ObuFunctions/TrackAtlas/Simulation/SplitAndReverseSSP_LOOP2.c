/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SplitAndReverseSSP_LOOP2.h"

void SplitAndReverseSSP_LOOP2_reset(outC_SplitAndReverseSSP_LOOP2 *outC)
{
}

/* SplitAndReverseSSP_LOOP2 */
void SplitAndReverseSSP_LOOP2(
  /* SplitAndReverseSSP_LOOP2::SSP_section_in */SSP_section_t *SSP_section_in,
  outC_SplitAndReverseSSP_LOOP2 *outC)
{
  kcg_copy_SSP_section_t(&outC->_L1, SSP_section_in);
  outC->_L6 = outC->_L1.target;
  outC->SSP_t_section_out = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SplitAndReverseSSP_LOOP2.c
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

