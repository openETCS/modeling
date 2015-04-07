/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_First_in_SSP_t_cat_LOOP.h"

void Find_First_in_SSP_t_cat_LOOP_reset(outC_Find_First_in_SSP_t_cat_LOOP *outC)
{
}

/* Find_First_in_SSP_t_cat_LOOP */
void Find_First_in_SSP_t_cat_LOOP(
  /* Find_First_in_SSP_t_cat_LOOP::i */kcg_int i,
  /* Find_First_in_SSP_t_cat_LOOP::Loc */SSP_target_t Loc,
  /* Find_First_in_SSP_t_cat_LOOP::SSP_section_in */SSP_t_section_t SSP_section_in,
  outC_Find_First_in_SSP_t_cat_LOOP *outC)
{
  SSP_target_t noname;
  kcg_int _1_noname;
  
  outC->_L3 = SSP_section_in;
  outC->_L4 = 0;
  outC->_L5 = outC->_L3 > outC->_L4;
  outC->_L6 = !outC->_L5;
  outC->_L1 = i;
  _1_noname = outC->_L1;
  outC->_L2 = Loc;
  noname = outC->_L2;
  outC->Last_Loc = outC->_L3;
  outC->cont = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_SSP_t_cat_LOOP.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

