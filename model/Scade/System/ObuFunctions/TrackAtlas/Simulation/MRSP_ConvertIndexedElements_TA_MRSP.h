/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MRSP_ConvertIndexedElements_TA_MRSP_H_
#define _MRSP_ConvertIndexedElements_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_ConvertIndexedElements::SSP_indexed_matrix_element_list */ SSP_indexed_matrix_element_list;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_indexed_trgt_t_TA_MRSP /* TA_MRSP::MRSP_ConvertIndexedElements::_L1 */ _L1;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_ConvertIndexedElements::_L7 */ _L7;
  kcg_int /* TA_MRSP::MRSP_ConvertIndexedElements::_L8 */ _L8;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_ConvertIndexedElements::_L4 */ _L4;
  kcg_int /* TA_MRSP::MRSP_ConvertIndexedElements::_L3 */ _L3;
} outC_MRSP_ConvertIndexedElements_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_ConvertIndexedElements */
extern void MRSP_ConvertIndexedElements_TA_MRSP(
  /* TA_MRSP::MRSP_ConvertIndexedElements::SSP_indexed_targets_list */SSP_t_indexed_trgt_t_TA_MRSP *SSP_indexed_targets_list,
  outC_MRSP_ConvertIndexedElements_TA_MRSP *outC);

extern void MRSP_ConvertIndexedElements_reset_TA_MRSP(
  outC_MRSP_ConvertIndexedElements_TA_MRSP *outC);

#endif /* _MRSP_ConvertIndexedElements_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_ConvertIndexedElements_TA_MRSP.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

