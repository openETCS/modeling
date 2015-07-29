/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _MRSP_FindLastSSPSection_TA_MRSP_H_
#define _MRSP_FindLastSSPSection_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_FindLastSSPSection_LOOP_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_valid_section_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::Index_Last */ Index_Last;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_FindLastSSPSection_LOOP_TA_MRSP /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L1 */ _L1;
  kcg_int /* TA_MRSP::MRSP_FindLastSSPSection::_L13 */ _L13;
  SSP_Mark_ValidSSPsection_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L14 */ _L14;
  kcg_bool /* TA_MRSP::MRSP_FindLastSSPSection::_L16 */ _L16;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L19 */ _L19;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L21 */ _L21;
  SSP_valid_section_t_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L30 */ _L30;
  kcg_int /* TA_MRSP::MRSP_FindLastSSPSection::_L28 */ _L28;
  kcg_bool /* TA_MRSP::MRSP_FindLastSSPSection::_L29 */ _L29;
  SSP_Mark_ValidSSPsection_TA_MRSP /* TA_MRSP::MRSP_FindLastSSPSection::_L31 */ _L31;
} outC_MRSP_FindLastSSPSection_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_FindLastSSPSection */
extern void MRSP_FindLastSSPSection_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection::SSP_Reverse_In */SSP_cat_t_TA_MRSP *SSP_Reverse_In,
  outC_MRSP_FindLastSSPSection_TA_MRSP *outC);

extern void MRSP_FindLastSSPSection_reset_TA_MRSP(
  outC_MRSP_FindLastSSPSection_TA_MRSP *outC);

#endif /* _MRSP_FindLastSSPSection_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_TA_MRSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

