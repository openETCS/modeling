/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */
#ifndef _MoveSectionsToNewLRBG_TA_Lib_internal_H_
#define _MoveSectionsToNewLRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantForNewLRBG_TA_Lib_internal.h"
#include "MoveSectionsToNewLRBG_Loop_TA_Lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSectionsToNewLRBG::ProfileIn */ ProfileIn;
  kcg_int /* TA_Lib_internal::MoveSectionsToNewLRBG::Distance_2LRBGs */ Distance_2LRBGs;
} inC_MoveSectionsToNewLRBG_TA_Lib_internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSectionsToNewLRBG::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSectionsToNewLRBG_Loop_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindFirstRelevantForNewLRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::MoveSectionsToNewLRBG::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSectionsToNewLRBG::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::MoveSectionsToNewLRBG::_L3 */ _L3;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::MoveSectionsToNewLRBG::_L4 */ _L4;
  array_int_33 /* TA_Lib_internal::MoveSectionsToNewLRBG::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::MoveSectionsToNewLRBG::_L6 */ _L6;
} outC_MoveSectionsToNewLRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSectionsToNewLRBG */
extern void MoveSectionsToNewLRBG_TA_Lib_internal(
  inC_MoveSectionsToNewLRBG_TA_Lib_internal *inC,
  outC_MoveSectionsToNewLRBG_TA_Lib_internal *outC);

extern void MoveSectionsToNewLRBG_reset_TA_Lib_internal(
  outC_MoveSectionsToNewLRBG_TA_Lib_internal *outC);

#endif /* _MoveSectionsToNewLRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSectionsToNewLRBG_TA_Lib_internal.h
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */

