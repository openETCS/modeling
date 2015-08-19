/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MRSP_Split_And_Reverse_SS_TA_MRSP_H_
#define _MRSP_Split_And_Reverse_SS_TA_MRSP_H_

#include "kcg_types.h"
#include "_19_MRSP_SplitAndReverseSSP_L_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_reverse_t_matrix_out */ SSP_reverse_t_matrix_out;
  SSP_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_reverse_matrix_out */ SSP_reverse_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::_L1 */ _L1;
  array_int_33_11 /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::_L27 */ _L27;
  array__10459 /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::_L51 */ _L51;
} outC_MRSP_Split_And_Reverse_SS_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix */
extern void MRSP_Split_And_Reverse_SS_TA_MRSP(
  /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_Split_And_Reverse_SS_TA_MRSP *outC);

extern void MRSP_Split_And_Reverse_SS_reset_TA_MRSP(
  outC_MRSP_Split_And_Reverse_SS_TA_MRSP *outC);

#endif /* _MRSP_Split_And_Reverse_SS_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Split_And_Reverse_SS_TA_MRSP.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

