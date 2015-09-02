/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MRSP_Build_MRSP_LOOP_TA_MRSP_H_
#define _MRSP_Build_MRSP_LOOP_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_Determine_MRS_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_Build_MRSP_LOOP::cont */ cont;
  MRSP_section_t_TrackAtlasTypes /* TA_MRSP::MRSP_Build_MRSP_LOOP::MRSP_section_out */ MRSP_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_Determine_MRS_TA_MRSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L22 */ _L22;
  kcg_int /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L24 */ _L24;
  SSP_t_list_t_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L25 */ _L25;
  SSP_matrix_t_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L26 */ _L26;
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L27 */ _L27;
  MRSP_section_t_TrackAtlasTypes /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L211 */ _L211;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L213 */ _L213;
  kcg_int /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L214 */ _L214;
  SSP_target_t_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L792 */ _L792;
  kcg_bool /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L976 */ _L976;
  SSP_t_indexed_matrix_element_TA_MRSP /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L977 */ _L977;
} outC_MRSP_Build_MRSP_LOOP_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_Build_MRSP_LOOP */
extern void MRSP_Build_MRSP_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::LengthOfTargetList */kcg_int LengthOfTargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::TargetList */SSP_t_list_t_TA_MRSP *TargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix,
  outC_MRSP_Build_MRSP_LOOP_TA_MRSP *outC);

extern void MRSP_Build_MRSP_LOOP_reset_TA_MRSP(
  outC_MRSP_Build_MRSP_LOOP_TA_MRSP *outC);

#endif /* _MRSP_Build_MRSP_LOOP_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Build_MRSP_LOOP_TA_MRSP.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

