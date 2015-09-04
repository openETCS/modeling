/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP_H_
#define _MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::SSP_t_section_out */ SSP_t_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::_L1 */ _L1;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::_L6 */ _L6;
} outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2 */
extern void MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::SSP_section_in */SSP_section_t_TA_MRSP *SSP_section_in,
  outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP *outC);

extern void MRSP_SplitAndReverseSSP_LOOP2_reset_TA_MRSP(
  outC_MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP *outC);

#endif /* _MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

