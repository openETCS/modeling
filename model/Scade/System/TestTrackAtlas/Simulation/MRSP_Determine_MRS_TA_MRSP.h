/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _MRSP_Determine_MRS_TA_MRSP_H_
#define _MRSP_Determine_MRS_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_DetermineRelevantSpeedperCat_TA_MRSP.h"
#include "MRSP_Determine_Lowest_Speed_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_Determine_MRS::MRS */ MRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Determine_Lowest_Speed_TA_MRSP /* 1 */ _1_Context_1[11];
  outC_MRSP_DetermineRelevantSpeedperCat_TA_MRSP /* 1 */ Context_1[11];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_Determine_MRS::_L3 */ _L3;
  SSP_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Determine_MRS::_L4 */ _L4;
  array_int_11 /* TA_MRSP::MRSP_Determine_MRS::_L5 */ _L5;
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_Determine_MRS::_L8 */ _L8;
  kcg_int /* TA_MRSP::MRSP_Determine_MRS::_L10 */ _L10;
  array_int_11 /* TA_MRSP::MRSP_Determine_MRS::_L11 */ _L11;
} outC_MRSP_Determine_MRS_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Determine_MRS */
extern void MRSP_Determine_MRS_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_MRS::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_Determine_MRS::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix,
  outC_MRSP_Determine_MRS_TA_MRSP *outC);

extern void MRSP_Determine_MRS_reset_TA_MRSP(
  outC_MRSP_Determine_MRS_TA_MRSP *outC);

#endif /* _MRSP_Determine_MRS_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_MRS_TA_MRSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

