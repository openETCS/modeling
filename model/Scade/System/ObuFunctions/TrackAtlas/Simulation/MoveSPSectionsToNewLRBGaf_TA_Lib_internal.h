/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MoveSPSectionsToNewLRBGaf_TA_Lib_internal_H_
#define _MoveSPSectionsToNewLRBGaf_TA_Lib_internal_H_

#include "kcg_types.h"
#include "NormalizePos_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NormalizePos_TA_Lib_internal /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L3 */ _L3;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L5 */ _L5;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L6 */ _L6;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L7 */ _L7;
  SSP_t_section_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L8 */ _L8;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L10 */ _L10;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::_L12 */ _L12;
} outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop */
extern void MoveSPSectionsToNewLRBGaf_TA_Lib_internal(
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::ProfileIn */SSP_cat_t_TA_MRSP *ProfileIn,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal *outC);

extern void MoveSPSectionsToNewLRBGaf_reset_TA_Lib_internal(
  outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal *outC);

#endif /* _MoveSPSectionsToNewLRBGaf_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSPSectionsToNewLRBGaf_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

