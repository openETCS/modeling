/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */
#ifndef _T_Decode_metadata_new_TM_lib_internal_H_
#define _T_Decode_metadata_new_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::nid_packet */ nid_packet;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::id */ id;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::m_version */ m_version;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L3 */ _L3;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L4 */ _L4;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L5 */ _L5;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L6 */ _L6;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L7 */ _L7;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L8 */ _L8;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L9 */ _L9;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L10 */ _L10;
  kcg_int /* TM_lib_internal::T_Decode_metadata_new::_L11 */ _L11;
} outC_T_Decode_metadata_new_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Decode_metadata_new */
extern void T_Decode_metadata_new_TM_lib_internal(
  /* TM_lib_internal::T_Decode_metadata_new::Metadata_in */kcg_int Metadata_in,
  outC_T_Decode_metadata_new_TM_lib_internal *outC);

extern void T_Decode_metadata_new_reset_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC);

#endif /* _T_Decode_metadata_new_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Decode_metadata_new_TM_lib_internal.h
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */

