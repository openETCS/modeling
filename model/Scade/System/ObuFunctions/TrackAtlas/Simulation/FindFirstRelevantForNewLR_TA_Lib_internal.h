/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */
#ifndef _FindFirstRelevantForNewLR_TA_Lib_internal_H_
#define _FindFirstRelevantForNewLR_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::cont */ cont;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L168 */ _L168;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L169 */ _L169;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L170 */ _L170;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L171 */ _L171;
  SSP_section_t_TA_MRSP /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L172 */ _L172;
  SSP_t_section_t_TA_MRSP /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L173 */ _L173;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L174 */ _L174;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L175 */ _L175;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L181 */ _L181;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L180 */ _L180;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L179 */ _L179;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L178 */ _L178;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L177 */ _L177;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L176 */ _L176;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::_L182 */ _L182;
} outC_FindFirstRelevantForNewLR_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop */
extern void FindFirstRelevantForNewLR_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::SpeedProfile_in */SSP_cat_t_TA_MRSP *SpeedProfile_in,
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantForNewLR_TA_Lib_internal *outC);

extern void FindFirstRelevantForNewLR_reset_TA_Lib_internal(
  outC_FindFirstRelevantForNewLR_TA_Lib_internal *outC);

#endif /* _FindFirstRelevantForNewLR_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantForNewLR_TA_Lib_internal.h
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */

