/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _MoveGPSectionsAbsolute_Loop_TA_Lib_internal_H_
#define _MoveGPSectionsAbsolute_Loop_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::else */ else_clock_IfBlock1;
  kcg_int /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::else::else::_L1 */ _L12_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::IfBlock1::else::then::_L1 */ _L11_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::offset */ offset;
  kcg_int /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L2 */ _L2;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L7 */ _L7;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L10 */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L130 */ _L130;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L141 */ _L141;
  kcg_bool /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L143 */ _L143;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L254 */ _L254;
  kcg_int /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L255 */ _L255;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L256 */ _L256;
  kcg_int /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::_L257 */ _L257;
} outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop */
extern void MoveGPSectionsAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveGPSectionsAbsolute_Loop::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal *outC);

extern void MoveGPSectionsAbsolute_Loop_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Loop_TA_Lib_internal *outC);

#endif /* _MoveGPSectionsAbsolute_Loop_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveGPSectionsAbsolute_Loop_TA_Lib_internal.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

