/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Determine_LengthOfTargetL.h"

void Determine_LengthOfTargetL_reset(outC_Determine_LengthOfTargetL *outC)
{
}

/* Determine_LengthOfTargetList_LOOP */
void Determine_LengthOfTargetL(
  /* Determine_LengthOfTargetList_LOOP::i */kcg_int i,
  /* Determine_LengthOfTargetList_LOOP::Acc */kcg_int Acc,
  /* Determine_LengthOfTargetList_LOOP::SSP_target_in */SSP_t_indexed_matrix_element *SSP_target_in,
  outC_Determine_LengthOfTargetL *outC)
{
  kcg_int noname;
  
  outC->_L13 = DIM_SSP;
  outC->_L1 = i;
  outC->_L14 = outC->_L13 - outC->_L1;
  outC->_L2 = Acc;
  noname = outC->_L2;
  kcg_copy_SSP_t_indexed_matrix_element(&outC->_L3, SSP_target_in);
  outC->_L10 = outC->_L3.Loc;
  outC->_L11 = 0;
  outC->_L12 = outC->_L10 == outC->_L11;
  outC->length = outC->_L14;
  outC->cont = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_LengthOfTargetL.c
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

