/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfile_TA_Lib_internal_H_
#define _FindStartOfNewSpeedProfile_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewSpeedProfil_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewSpeedProfil_TA_Lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L1 */ _L1;
  SSP_t_section_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L2 */ _L2;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L96 */ _L96;
  array__10579 /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L98 */ _L98;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L99 */ _L99;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L100 */ _L100;
  array_int_33 /* TA_Lib_internal::FindStartOfNewSpeedProfile::_L167 */ _L167;
} outC_FindStartOfNewSpeedProfile_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewSpeedProfile */
extern void FindStartOfNewSpeedProfile_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile::New_Profile */SSP_cat_t_TA_MRSP *New_Profile,
  outC_FindStartOfNewSpeedProfile_TA_Lib_internal *outC);

extern void FindStartOfNewSpeedProfile_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfile_TA_Lib_internal *outC);

#endif /* _FindStartOfNewSpeedProfile_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfile_TA_Lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

