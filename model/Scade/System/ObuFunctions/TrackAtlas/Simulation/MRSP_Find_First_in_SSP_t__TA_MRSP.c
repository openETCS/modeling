/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_SSP_t__TA_MRSP.h"

void MRSP_Find_First_in_SSP_t__reset_TA_MRSP(
  outC_MRSP_Find_First_in_SSP_t__TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP */
void MRSP_Find_First_in_SSP_t__TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::Loc */SSP_target_t_TA_MRSP Loc,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::SSP_section_in */SSP_t_section_t_TA_MRSP SSP_section_in,
  outC_MRSP_Find_First_in_SSP_t__TA_MRSP *outC)
{
  SSP_target_t_TA_MRSP noname;
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
** MRSP_Find_First_in_SSP_t__TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

