/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */
#ifndef _MoveGPSectionsAbsolute_TA_Lib_internal_H_
#define _MoveGPSectionsAbsolute_TA_Lib_internal_H_

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_Loop_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute::_L4 */ _L4;
  array_bool_50 /* TA_Lib_internal::MoveGPSectionsAbsolute::_L6 */ _L6;
  kcg_bool /* TA_Lib_internal::MoveGPSectionsAbsolute::_L35 */ _L35;
  kcg_bool /* TA_Lib_internal::MoveGPSectionsAbsolute::_L36 */ _L36;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute::_L37 */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute::_L38 */ _L38;
  array_bool_50 /* TA_Lib_internal::MoveGPSectionsAbsolute::_L39 */ _L39;
  array_int_50 /* TA_Lib_internal::MoveGPSectionsAbsolute::_L40 */ _L40;
  array_int_50 /* TA_Lib_internal::MoveGPSectionsAbsolute::_L41 */ _L41;
} outC_MoveGPSectionsAbsolute_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsAbsolute */
extern void MoveGPSectionsAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveGPSectionsAbsolute_TA_Lib_internal *outC);

extern void MoveGPSectionsAbsolute_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_TA_Lib_internal *outC);

#endif /* _MoveGPSectionsAbsolute_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsAbsolute_TA_Lib_internal.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

