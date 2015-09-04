/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MoveSSPSectionsAbsolute_Loop_TA_Lib_internal_H_
#define _MoveSSPSectionsAbsolute_Loop_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1::else */ else_clock_IfBlock1;
  kcg_int /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1::else::else::_L1 */ _L12_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::IfBlock1::else::then::_L1 */ _L11_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::offset */ offset;
  kcg_int /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L2 */ _L2;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L6 */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L7 */ _L7;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L10 */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L130 */ _L130;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L141 */ _L141;
  kcg_bool /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L143 */ _L143;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L254 */ _L254;
  kcg_int /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L255 */ _L255;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L256 */ _L256;
  kcg_int /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::_L257 */ _L257;
} outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop */
extern void MoveSSPSectionsAbsolute_Loop_TA_Lib_internal(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::i */kcg_int i,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal *outC);

extern void MoveSSPSectionsAbsolute_Loop_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal *outC);

#endif /* _MoveSSPSectionsAbsolute_Loop_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

