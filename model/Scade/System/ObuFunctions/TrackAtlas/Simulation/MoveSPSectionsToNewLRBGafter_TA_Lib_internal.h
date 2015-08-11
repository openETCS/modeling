/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _MoveSPSectionsToNewLRBGafter_TA_Lib_internal_H_
#define _MoveSPSectionsToNewLRBGafter_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantSPForNewLRBG_TA_Lib_internal.h"
#include "MoveSPSectionsToNewLRBGaf_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSPSectionsToNewLRBGaf_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindFirstRelevantSPForNewLRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L3 */ _L3;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L4 */ _L4;
  array_int_33 /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::_L6 */ _L6;
} outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSPSectionsToNewLRBGafter */
extern void MoveSPSectionsToNewLRBGafter_TA_Lib_internal(
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::ProfileIn */SSP_cat_t_TA_MRSP *ProfileIn,
  /* TA_Lib_internal::MoveSPSectionsToNewLRBGafter::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal *outC);

extern void MoveSPSectionsToNewLRBGafter_reset_TA_Lib_internal(
  outC_MoveSPSectionsToNewLRBGafter_TA_Lib_internal *outC);

#endif /* _MoveSPSectionsToNewLRBGafter_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSPSectionsToNewLRBGafter_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

