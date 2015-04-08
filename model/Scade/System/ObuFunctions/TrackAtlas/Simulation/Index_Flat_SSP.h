/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T14:17:21
*************************************************************$ */
#ifndef _Index_Flat_SSP_H_
#define _Index_Flat_SSP_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_list_t /* Index_Flat_SSP::SSP_element */ SSP_element;
} inC_Index_Flat_SSP;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_indexed_list_t /* Index_Flat_SSP::SSP_flat_indexed */ SSP_flat_indexed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_list_t /* Index_Flat_SSP::_L5 */ _L5;
  SSP_indexed_list_t /* Index_Flat_SSP::_L4 */ _L4;
  SSP_index_t /* Index_Flat_SSP::_L3 */ _L3;
} outC_Index_Flat_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* Index_Flat_SSP */
extern void Index_Flat_SSP(inC_Index_Flat_SSP *inC, outC_Index_Flat_SSP *outC);

extern void Index_Flat_SSP_reset(outC_Index_Flat_SSP *outC);

#endif /* _Index_Flat_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Index_Flat_SSP.h
** Generation date: 2015-04-03T14:17:21
*************************************************************$ */

