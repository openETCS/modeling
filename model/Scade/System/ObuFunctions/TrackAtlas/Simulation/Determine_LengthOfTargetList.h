/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */
#ifndef _Determine_LengthOfTargetList_H_
#define _Determine_LengthOfTargetList_H_

#include "kcg_types.h"
#include "Determine_LengthOfTargetL.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_t_list_t /* Determine_LengthOfTargetList::SSP_t_list_in */ SSP_t_list_in;
} inC_Determine_LengthOfTargetList;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Determine_LengthOfTargetList::length */ length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Determine_LengthOfTargetL /* 1 */ Context_1[88];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_list_t /* Determine_LengthOfTargetList::_L2 */ _L2;
  SSP_t_list_t /* Determine_LengthOfTargetList::_L179 */ _L179;
  kcg_int /* Determine_LengthOfTargetList::_L180 */ _L180;
  kcg_bool /* Determine_LengthOfTargetList::_L181 */ _L181;
  kcg_int /* Determine_LengthOfTargetList::_L182 */ _L182;
  kcg_int /* Determine_LengthOfTargetList::_L183 */ _L183;
} outC_Determine_LengthOfTargetList;

/* ===========  node initialization and cycle functions  =========== */
/* Determine_LengthOfTargetList */
extern void Determine_LengthOfTargetList(
  inC_Determine_LengthOfTargetList *inC,
  outC_Determine_LengthOfTargetList *outC);

extern void Determine_LengthOfTargetList_reset(
  outC_Determine_LengthOfTargetList *outC);

#endif /* _Determine_LengthOfTargetList_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_LengthOfTargetList.h
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */

