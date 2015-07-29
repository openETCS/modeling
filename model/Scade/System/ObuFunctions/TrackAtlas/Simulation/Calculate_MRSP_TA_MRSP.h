/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Calculate_MRSP_TA_MRSP_H_
#define _Calculate_MRSP_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_BuildTargetList_TA_MRSP.h"
#include "MRSP_Build_MRSP_LOOP_TA_MRSP.h"
#include "MRSP_Split_And_Reverse_SS_TA_MRSP.h"
#include "_18_MRSP_Determine_LengthOfTa_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_Profile_t_TrackAtlasTypes /* TA_MRSP::Calculate_MRSP::MRSP */ MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Build_MRSP_LOOP_TA_MRSP /* 1 */ _3_Context_1[200];
  outC__18_MRSP_Determine_LengthOfTa_TA_MRSP /* 1 */ _2_Context_1;
  outC_MRSP_BuildTargetList_TA_MRSP /* 1 */ _1_Context_1;
  outC_MRSP_Split_And_Reverse_SS_TA_MRSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_t_list_t_TA_MRSP /* TA_MRSP::Calculate_MRSP::_L1 */ _L1;
  SSP_matrix_t_TA_MRSP /* TA_MRSP::Calculate_MRSP::_L4 */ _L4;
  SSP_t_matrix_t_TA_MRSP /* TA_MRSP::Calculate_MRSP::_L3 */ _L3;
  kcg_int /* TA_MRSP::Calculate_MRSP::_L6 */ _L6;
  kcg_bool /* TA_MRSP::Calculate_MRSP::_L8 */ _L8;
  array__10564 /* TA_MRSP::Calculate_MRSP::_L9 */ _L9;
  array__10567 /* TA_MRSP::Calculate_MRSP::_L10 */ _L10;
  array__10491 /* TA_MRSP::Calculate_MRSP::_L12 */ _L12;
  array_int_200 /* TA_MRSP::Calculate_MRSP::_L14 */ _L14;
  SSP_matrix_t_TA_MRSP /* TA_MRSP::Calculate_MRSP::_L15 */ _L15;
  kcg_int /* TA_MRSP::Calculate_MRSP::_L17 */ _L17;
} outC_Calculate_MRSP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Calculate_MRSP */
extern void Calculate_MRSP_TA_MRSP(
  /* TA_MRSP::Calculate_MRSP::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_Calculate_MRSP_TA_MRSP *outC);

extern void Calculate_MRSP_reset_TA_MRSP(outC_Calculate_MRSP_TA_MRSP *outC);

#endif /* _Calculate_MRSP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calculate_MRSP_TA_MRSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

