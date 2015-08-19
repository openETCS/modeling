/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _DetectSpeedIncrease_TA_Lib_internal_H_
#define _DetectSpeedIncrease_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::DetectSpeedIncrease::q_speed_increase */ q_speed_increase;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_Lib_internal::DetectSpeedIncrease::_L16 */ _L16;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* TA_Lib_internal::DetectSpeedIncrease::_L15 */ _L15;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L14 */ _L14;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L13 */ _L13;
  kcg_bool /* TA_Lib_internal::DetectSpeedIncrease::_L12 */ _L12;
  V_STATIC /* TA_Lib_internal::DetectSpeedIncrease::_L11 */ _L11;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L10 */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::DetectSpeedIncrease::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L8 */ _L8;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L7 */ _L7;
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::DetectSpeedIncrease::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::DetectSpeedIncrease::_L5 */ _L5;
  kcg_bool /* TA_Lib_internal::DetectSpeedIncrease::_L4 */ _L4;
  V_STATIC /* TA_Lib_internal::DetectSpeedIncrease::_L3 */ _L3;
  P027V1_section_enum_T_TM_baseline2 /* TA_Lib_internal::DetectSpeedIncrease::_L2 */ _L2;
  P027V1_section_enum_T_TM_baseline2 /* TA_Lib_internal::DetectSpeedIncrease::_L1 */ _L1;
} outC_DetectSpeedIncrease_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::DetectSpeedIncrease */
extern void DetectSpeedIncrease_TA_Lib_internal(
  /* TA_Lib_internal::DetectSpeedIncrease::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_Lib_internal::DetectSpeedIncrease::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_Lib_internal::DetectSpeedIncrease::i */kcg_int i,
  outC_DetectSpeedIncrease_TA_Lib_internal *outC);

extern void DetectSpeedIncrease_reset_TA_Lib_internal(
  outC_DetectSpeedIncrease_TA_Lib_internal *outC);

#endif /* _DetectSpeedIncrease_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetectSpeedIncrease_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

