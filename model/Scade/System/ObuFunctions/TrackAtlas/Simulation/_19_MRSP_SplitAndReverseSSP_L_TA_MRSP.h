/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef __19_MRSP_SplitAndReverseSSP_L_TA_MRSP_H_
#define __19_MRSP_SplitAndReverseSSP_L_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_cat_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_reverse_t_cat_out */ SSP_reverse_t_cat_out;
  SSP_cat_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_reverse_cat_out */ SSP_reverse_cat_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::_L18 */ _L18;
  array_int_33 /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::_L35 */ _L35;
} outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1 */
extern void _19_MRSP_SplitAndReverseSSP_L_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_cat_in */SSP_cat_t_TA_MRSP *SSP_cat_in,
  outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP *outC);

extern void _19_MRSP_SplitAndReverseSSP_L_reset_TA_MRSP(
  outC__19_MRSP_SplitAndReverseSSP_L_TA_MRSP *outC);

#endif /* __19_MRSP_SplitAndReverseSSP_L_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _19_MRSP_SplitAndReverseSSP_L_TA_MRSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

