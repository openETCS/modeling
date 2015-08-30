/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MRSP_RemoveLargestFromSSP_TA_MRSP_H_
#define _MRSP_RemoveLargestFromSSP_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::SSP_matrix_out */ SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L1 */ _L1;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L2 */ _L2;
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L3 */ _L3;
  kcg_int /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L10 */ _L10;
  kcg_int /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L17 */ _L17;
  kcg_int /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::_L18 */ _L18;
} outC_MRSP_RemoveLargestFromSSP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix */
extern void MRSP_RemoveLargestFromSSP_TA_MRSP(
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::Largest_Target */SSP_t_indexed_matrix_element_TA_MRSP *Largest_Target,
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_RemoveLargestFromSSP_TA_MRSP *outC);

extern void MRSP_RemoveLargestFromSSP_reset_TA_MRSP(
  outC_MRSP_RemoveLargestFromSSP_TA_MRSP *outC);

#endif /* _MRSP_RemoveLargestFromSSP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_RemoveLargestFromSSP_TA_MRSP.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

