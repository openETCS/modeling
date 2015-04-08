/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertIndexedElements.h"

void ConvertIndexedElements_reset(outC_ConvertIndexedElements *outC)
{
}

/* ConvertIndexedElements */
void ConvertIndexedElements(
  /* ConvertIndexedElements::SSP_indexed_targets_list */SSP_t_indexed_trgt_t *SSP_indexed_targets_list,
  outC_ConvertIndexedElements *outC)
{
  kcg_copy_SSP_t_indexed_trgt_t(&outC->_L1, SSP_indexed_targets_list);
  outC->_L4 = outC->_L1.Loc;
  outC->_L8 = 99;
  outC->_L3 = outC->_L1.Index;
  outC->_L7.Category_Index = outC->_L8;
  outC->_L7.Pos_Index = outC->_L3;
  outC->_L7.Loc = outC->_L4;
  kcg_copy_SSP_t_indexed_matrix_element(
    &outC->SSP_indexed_matrix_element_list,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertIndexedElements.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

