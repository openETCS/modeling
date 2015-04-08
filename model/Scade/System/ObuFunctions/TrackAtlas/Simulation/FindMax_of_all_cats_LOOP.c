/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindMax_of_all_cats_LOOP.h"

void FindMax_of_all_cats_LOOP_reset(outC_FindMax_of_all_cats_LOOP *outC)
{
}

/* FindMax_of_all_cats_LOOP */
void FindMax_of_all_cats_LOOP(
  /* FindMax_of_all_cats_LOOP::i */kcg_int i,
  /* FindMax_of_all_cats_LOOP::Init_target */SSP_indexed_matrix_element *Init_target,
  /* FindMax_of_all_cats_LOOP::SSP_indexed_target */SSP_indexed_matrix_element *SSP_indexed_target,
  outC_FindMax_of_all_cats_LOOP *outC)
{
  kcg_copy_SSP_indexed_matrix_element(&outC->_L23, SSP_indexed_target);
  outC->_L26 = i;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L32, &outC->_L23);
  if (kcg_true) {
    outC->_L32.Category_Index = outC->_L26;
  }
  outC->_L28 = 0;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L14, SSP_indexed_target);
  outC->_L20 = outC->_L14.Loc;
  outC->_L27 = outC->_L28 != outC->_L20;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L13, Init_target);
  outC->_L15 = outC->_L13.Loc;
  outC->_L21 = outC->_L20 >= outC->_L15;
  outC->_L29 = outC->_L27 & outC->_L21;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L24, Init_target);
  if (outC->_L29) {
    kcg_copy_SSP_indexed_matrix_element(&outC->_L25, &outC->_L32);
  }
  else {
    kcg_copy_SSP_indexed_matrix_element(&outC->_L25, &outC->_L24);
  }
  kcg_copy_SSP_indexed_matrix_element(&outC->Max, &outC->_L25);
  outC->_L30 = kcg_true;
  outC->cont = outC->_L30;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMax_of_all_cats_LOOP.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

