/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Determine_LengthOfTargetList.h"

void Determine_LengthOfTargetList_reset(outC_Determine_LengthOfTargetList *outC)
{
  kcg_int i;
  
  for (i = 0; i < 88; i++) {
    /* 1 */ Determine_LengthOfTargetL_reset(&outC->Context_1[i]);
  }
}

/* Determine_LengthOfTargetList */
void Determine_LengthOfTargetList(
  inC_Determine_LengthOfTargetList *inC,
  outC_Determine_LengthOfTargetList *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L183 = 0;
  kcg_copy_SSP_t_list_t(&outC->_L2, &inC->SSP_t_list_in);
  for (i1 = 0; i1 < 88; i1++) {
    kcg_copy_SSP_t_indexed_matrix_element(
      &outC->_L179[i1],
      &outC->_L2[87 - i1]);
  }
  outC->_L181 = kcg_true;
  outC->_L182 = outC->_L183;
  if (outC->_L181) {
    for (i = 0; i < 88; i++) {
      tmp = outC->_L182;
      /* 1 */
      Determine_LengthOfTargetL(i, tmp, &outC->_L179[i], &outC->Context_1[i]);
      outC->_L182 = outC->Context_1[i].length;
      outC->_L180 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L180 = 0;
  }
  noname = outC->_L180;
  outC->length = outC->_L182;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_LengthOfTargetList.c
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

