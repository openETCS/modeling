/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _BuildTargetList_H_
#define _BuildTargetList_H_

#include "kcg_types.h"
#include "BuildTargetList_LOOP.h"
#include "Reverse_SSP_t_matrix.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_t_matrix_t /* BuildTargetList::SSP_Matrix_In */ SSP_Matrix_In;
} inC_BuildTargetList;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_list_t /* BuildTargetList::SSP_list_out */ SSP_list_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildTargetList_LOOP /* 1 */ _1_Context_1[33];
  outC_Reverse_SSP_t_matrix /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__360 /* BuildTargetList::_L1 */ _L1;
  SSP_t_list_t /* BuildTargetList::_L2 */ _L2;
  SSP_t_matrix_t /* BuildTargetList::_L3 */ _L3;
  SSP_t_matrix_t /* BuildTargetList::_L4 */ _L4;
  SSP_t_matrix_t /* BuildTargetList::_L5 */ _L5;
} outC_BuildTargetList;

/* ===========  node initialization and cycle functions  =========== */
/* BuildTargetList */
extern void BuildTargetList(
  inC_BuildTargetList *inC,
  outC_BuildTargetList *outC);

extern void BuildTargetList_reset(outC_BuildTargetList *outC);

#endif /* _BuildTargetList_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildTargetList.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

