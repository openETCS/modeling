/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _MRSP_DetermineRelevantSpe_TA_MRSP_H_
#define _MRSP_DetermineRelevantSpe_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::cont */ cont;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetCurrentCycle */ TargetCurrentCycle;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L120 */ _L120;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L124 */ _L124;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L140 */ _L140;
  SSP_valid_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L141 */ _L141;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L142 */ _L142;
  kcg_int /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L143 */ _L143;
  kcg_int /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L144 */ _L144;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L145 */ _L145;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L146 */ _L146;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L147 */ _L147;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L148 */ _L148;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L149 */ _L149;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L150 */ _L150;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L151 */ _L151;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L154 */ _L154;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L159 */ _L159;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L160 */ _L160;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L162 */ _L162;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L161 */ _L161;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L163 */ _L163;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L165 */ _L165;
  SSP_relevant_target_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L166 */ _L166;
  SSP_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L167 */ _L167;
  SSP_t_section_t_TA_MRSP /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L168 */ _L168;
  kcg_bool /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::_L169 */ _L169;
} outC_MRSP_DetermineRelevantSpe_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP */
extern void MRSP_DetermineRelevantSpe_TA_MRSP(
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetCycleBefore */SSP_relevant_target_t_TA_MRSP *TargetCycleBefore,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::Relevant_Section */SSP_valid_section_t_TA_MRSP *Relevant_Section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::SSP_section */SSP_section_t_TA_MRSP *SSP_section,
  /* TA_MRSP::MRSP_DetermineRelevantSpeedperCat_LOOP::TargetLookedFor */SSP_t_section_t_TA_MRSP TargetLookedFor,
  outC_MRSP_DetermineRelevantSpe_TA_MRSP *outC);

extern void MRSP_DetermineRelevantSpe_reset_TA_MRSP(
  outC_MRSP_DetermineRelevantSpe_TA_MRSP *outC);

#endif /* _MRSP_DetermineRelevantSpe_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_DetermineRelevantSpe_TA_MRSP.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

