/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T15:03:10
*************************************************************$ */
#ifndef _T_Decode_Metadata_L2_TM_lib_internal_H_
#define _T_Decode_Metadata_L2_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::T_Decode_Metadata_L2::nid_packet */ nid_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_Decode_Metadata_L2::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_Decode_Metadata_L2::_L2 */ _L2;
  kcg_int /* TM_lib_internal::T_Decode_Metadata_L2::_L3 */ _L3;
} outC_T_Decode_Metadata_L2_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Decode_Metadata_L2 */
extern void T_Decode_Metadata_L2_TM_lib_internal(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */kcg_int i,
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC);

extern void T_Decode_Metadata_L2_reset_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC);

#endif /* _T_Decode_Metadata_L2_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Decode_Metadata_L2_TM_lib_internal.h
** Generation date: 2015-08-20T15:03:10
*************************************************************$ */

