/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_FindMax_of_all_t_cats_TA_MRSP_H_
#define _MRSP_FindMax_of_all_t_cats_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.h"
#include "MRSP_ConvertIndexedElements_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats::SSP_largest_target */ SSP_largest_target;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP /* 1 */ _1_Context_1[11];
  outC_MRSP_ConvertIndexedElements_TA_MRSP /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_targets_list_t_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L1 */ _L1;
  kcg_bool /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L25 */ _L25;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L26 */ _L26;
  kcg_int /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L24 */ _L24;
  array__24063 /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L61 */ _L61;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_FindMax_of_all_t_cats::_L62 */ _L62;
} outC_MRSP_FindMax_of_all_t_cats_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_FindMax_of_all_t_cats */
extern void MRSP_FindMax_of_all_t_cats_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats::SSP_indexed_targets_per_cat */SSP_t_indexed_targets_list_t_TA_MRSP *SSP_indexed_targets_per_cat,
  outC_MRSP_FindMax_of_all_t_cats_TA_MRSP *outC);

extern void MRSP_FindMax_of_all_t_cats_reset_TA_MRSP(
  outC_MRSP_FindMax_of_all_t_cats_TA_MRSP *outC);

#endif /* _MRSP_FindMax_of_all_t_cats_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cats_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

