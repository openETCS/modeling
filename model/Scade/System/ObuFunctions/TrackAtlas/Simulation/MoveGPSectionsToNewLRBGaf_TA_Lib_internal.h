/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T17:23:27
*************************************************************$ */
#ifndef _MoveGPSectionsToNewLRBGaf_TA_Lib_internal_H_
#define _MoveGPSectionsToNewLRBGaf_TA_Lib_internal_H_

#include "kcg_types.h"
#include "NormalizePos_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NormalizePos_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L3 */ _L3;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L5 */ _L5;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L8 */ _L8;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L10 */ _L10;
  kcg_int /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::_L12 */ _L12;
} outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop */
extern void MoveGPSectionsToNewLRBGaf_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::FirstElement */kcg_int FirstElement,
  /* TA_Lib_internal::MoveGPSectionsToNewLRBGafter_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal *outC);

extern void MoveGPSectionsToNewLRBGaf_reset_TA_Lib_internal(
  outC_MoveGPSectionsToNewLRBGaf_TA_Lib_internal *outC);

#endif /* _MoveGPSectionsToNewLRBGaf_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsToNewLRBGaf_TA_Lib_internal.h
** Generation date: 2015-08-31T17:23:27
*************************************************************$ */

