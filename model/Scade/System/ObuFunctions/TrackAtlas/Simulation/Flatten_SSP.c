/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T13:57:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Flatten_SSP.h"

void Flatten_SSP_reset(outC_Flatten_SSP *outC)
{
}

/* Flatten_SSP */
void Flatten_SSP(inC_Flatten_SSP *inC, outC_Flatten_SSP *outC)
{
  kcg_copy_SSP_matrix_t(&outC->_L1, &inC->SSP_matrix);
  kcg_copy_array_int_3(&outC->_L13, &outC->_L1[10]);
  kcg_copy_array_int_3(&outC->_L12, &outC->_L1[9]);
  kcg_copy_array_int_3(&outC->_L11, &outC->_L1[8]);
  kcg_copy_array_int_3(&outC->_L10, &outC->_L1[7]);
  kcg_copy_array_int_3(&outC->_L9, &outC->_L1[6]);
  kcg_copy_array_int_3(&outC->_L8, &outC->_L1[5]);
  kcg_copy_array_int_3(&outC->_L7, &outC->_L1[4]);
  kcg_copy_array_int_3(&outC->_L6, &outC->_L1[3]);
  kcg_copy_array_int_3(&outC->_L5, &outC->_L1[2]);
  kcg_copy_array_int_3(&outC->_L4, &outC->_L1[1]);
  kcg_copy_array_int_3(&outC->_L3, &outC->_L1[0]);
  kcg_copy_array_int_3(&outC->_L25[0], &outC->_L3);
  kcg_copy_array_int_3(&outC->_L25[3], &outC->_L4);
  kcg_copy_array_int_6(&outC->_L26[0], &outC->_L25);
  kcg_copy_array_int_3(&outC->_L26[6], &outC->_L5);
  kcg_copy_array_int_9(&outC->_L27[0], &outC->_L26);
  kcg_copy_array_int_3(&outC->_L27[9], &outC->_L6);
  kcg_copy_array_int_12(&outC->_L28[0], &outC->_L27);
  kcg_copy_array_int_3(&outC->_L28[12], &outC->_L7);
  kcg_copy_array_int_15(&outC->_L29[0], &outC->_L28);
  kcg_copy_array_int_3(&outC->_L29[15], &outC->_L8);
  kcg_copy_array_int_18(&outC->_L30[0], &outC->_L29);
  kcg_copy_array_int_3(&outC->_L30[18], &outC->_L9);
  kcg_copy_array_int_21(&outC->_L31[0], &outC->_L30);
  kcg_copy_array_int_3(&outC->_L31[21], &outC->_L10);
  kcg_copy_array_int_24(&outC->_L32[0], &outC->_L31);
  kcg_copy_array_int_3(&outC->_L32[24], &outC->_L11);
  kcg_copy_array_int_27(&outC->_L33[0], &outC->_L32);
  kcg_copy_array_int_3(&outC->_L33[27], &outC->_L12);
  kcg_copy_array_int_30(&outC->_L34[0], &outC->_L33);
  kcg_copy_array_int_3(&outC->_L34[30], &outC->_L13);
  kcg_copy_SSP_list_t(&outC->SSPflat, &outC->_L34);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Flatten_SSP.c
** Generation date: 2015-04-03T13:57:21
*************************************************************$ */

