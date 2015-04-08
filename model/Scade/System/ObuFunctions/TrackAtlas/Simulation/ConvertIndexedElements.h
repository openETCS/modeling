/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */
#ifndef _ConvertIndexedElements_H_
#define _ConvertIndexedElements_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_matrix_element /* ConvertIndexedElements::SSP_indexed_matrix_element_list */ SSP_indexed_matrix_element_list;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_trgt_t /* ConvertIndexedElements::_L1 */ _L1;
  SSP_target_t /* ConvertIndexedElements::_L4 */ _L4;
  kcg_int /* ConvertIndexedElements::_L3 */ _L3;
  SSP_t_indexed_matrix_element /* ConvertIndexedElements::_L7 */ _L7;
  kcg_int /* ConvertIndexedElements::_L8 */ _L8;
} outC_ConvertIndexedElements;

/* ===========  node initialization and cycle functions  =========== */
/* ConvertIndexedElements */
extern void ConvertIndexedElements(
  /* ConvertIndexedElements::SSP_indexed_targets_list */SSP_t_indexed_trgt_t *SSP_indexed_targets_list,
  outC_ConvertIndexedElements *outC);

extern void ConvertIndexedElements_reset(outC_ConvertIndexedElements *outC);

#endif /* _ConvertIndexedElements_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertIndexedElements.h
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

