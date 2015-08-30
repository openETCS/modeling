/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfil_TA_Lib_internal_H_
#define _FindStartOfNewSpeedProfil_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::cont */ cont;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  D_STATIC /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L3 */ _L3;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L4 */ _L4;
  SSP_t_section_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L5 */ _L5;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L7 */ _L7;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L8 */ _L8;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L12 */ _L12;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L13 */ _L13;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L14 */ _L14;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L15 */ _L15;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L16 */ _L16;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L17 */ _L17;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L18 */ _L18;
} outC_FindStartOfNewSpeedProfil_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP */
extern void FindStartOfNewSpeedProfil_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::distance_in */D_STATIC distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  outC_FindStartOfNewSpeedProfil_TA_Lib_internal *outC);

extern void FindStartOfNewSpeedProfil_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfil_TA_Lib_internal *outC);

#endif /* _FindStartOfNewSpeedProfil_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfil_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

