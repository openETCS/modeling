/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MoveSSPSectionsAbsolute_TA_Lib_internal_H_
#define _MoveSSPSectionsAbsolute_TA_Lib_internal_H_

#include "kcg_types.h"
#include "MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSSPSectionsAbsolute_Loop_TA_Lib_internal /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L2 */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L4 */ _L4;
  array_bool_50 /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L6 */ _L6;
  kcg_bool /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L35 */ _L35;
  kcg_bool /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L36 */ _L36;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L37 */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L38 */ _L38;
  array_bool_50 /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L39 */ _L39;
  array_int_50 /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L40 */ _L40;
  array_int_50 /* TA_Lib_internal::MoveSSPSectionsAbsolute::_L41 */ _L41;
} outC_MoveSSPSectionsAbsolute_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSSPSectionsAbsolute */
extern void MoveSSPSectionsAbsolute_TA_Lib_internal(
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::MoveSSPSectionsAbsolute::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_MoveSSPSectionsAbsolute_TA_Lib_internal *outC);

extern void MoveSSPSectionsAbsolute_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_TA_Lib_internal *outC);

#endif /* _MoveSSPSectionsAbsolute_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveSSPSectionsAbsolute_TA_Lib_internal.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

