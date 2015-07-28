/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _MoveGPSectionsToNewLRBGafter_TA_Lib_internal_H_
#define _MoveGPSectionsToNewLRBGafter_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantGPForNewLRBG_TA_Lib_internal.h"
#include "MoveGPSectionsToNewLRBGaf_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L3 */ _L3;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L4 */ _L4;
  array_int_33 /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::_L6 */ _L6;
} outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter */
extern void MoveGPSectionsToNewLRBGafter_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal *outC);

extern void MoveGPSectionsToNewLRBGafter_reset_TA_Lib_internal(
  outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal *outC);

#endif /* _MoveGPSectionsToNewLRBGafter_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsToNewLRBGafter_TA_Lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

