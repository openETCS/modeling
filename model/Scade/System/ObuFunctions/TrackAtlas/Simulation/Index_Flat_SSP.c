/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T14:17:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Index_Flat_SSP.h"

void Index_Flat_SSP_reset(outC_Index_Flat_SSP *outC)
{
}

/* Index_Flat_SSP */
void Index_Flat_SSP(inC_Index_Flat_SSP *inC, outC_Index_Flat_SSP *outC)
{
  kcg_copy_SSP_list_t(&outC->_L5, &inC->SSP_element);
  kcg_copy_SSP_index_t(&outC->_L3, (SSP_index_t *) &SSP_Index);
  kcg_copy_SSP_list_t(&outC->_L4.SSP, &outC->_L5);
  kcg_copy_SSP_index_t(&outC->_L4.Index, &outC->_L3);
  kcg_copy_SSP_indexed_list_t(&outC->SSP_flat_indexed, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Index_Flat_SSP.c
** Generation date: 2015-04-03T14:17:21
*************************************************************$ */

