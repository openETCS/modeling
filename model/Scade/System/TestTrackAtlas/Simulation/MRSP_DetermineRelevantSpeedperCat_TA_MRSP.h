/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MRSP_DetermineRelevantSpeedperCat_TA_MRSP_H_
#define _MRSP_DetermineRelevantSpeedperCat_TA_MRSP_H_

#include "kcg_types.h"
#include "MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.h"
#include "MRSP_FindLastSSPSection_TA_MRSP.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::ValidSpeed */ ValidSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP /* 1 */ _1_Context_1[33];
  outC_MRSP_FindLastSSPSection_TA_MRSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L2 */ _L2;
  SSP_cat_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L3 */ _L3;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L4 */ _L4;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L8 */ _L8;
  SSP_valid_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L11 */ _L11;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L30 */ _L30;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L52 */ _L52;
  SSP_s_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L53 */ _L53;
  kcg_int /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L64 */ _L64;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L65 */ _L65;
  array_int_33 /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L66 */ _L66;
  array__24066 /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::_L67 */ _L67;
} outC_MRSP_DetermineRelevantSpeedperCat_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat */
extern void MRSP_DetermineRelevantSpeedperCat_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat::SSP_cat */SSP_cat_t_TA_MRSP *SSP_cat,
  outC_MRSP_DetermineRelevantSpeedperCat_TA_MRSP *outC);

extern void MRSP_DetermineRelevantSpeedperCat_reset_TA_MRSP(
  outC_MRSP_DetermineRelevantSpeedperCat_TA_MRSP *outC);

#endif /* _MRSP_DetermineRelevantSpeedperCat_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_DetermineRelevantSpeedperCat_TA_MRSP.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

