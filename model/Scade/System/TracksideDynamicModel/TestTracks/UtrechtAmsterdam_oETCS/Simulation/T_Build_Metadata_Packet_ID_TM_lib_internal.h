/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-10T16:11:03
*************************************************************$ */
#ifndef _T_Build_Metadata_Packet_ID_TM_lib_internal_H_
#define _T_Build_Metadata_Packet_ID_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  nid_packet_meta_TM /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_meta */ nid_packet_meta;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L2 */ _L2;
  NID_PACKET /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L3 */ _L3;
  kcg_bool /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L4 */ _L4;
  kcg_bool /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L6 */ _L6;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L8 */ _L8;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L9 */ _L9;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L10 */ _L10;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L11 */ _L11;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L12 */ _L12;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L13 */ _L13;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L14 */ _L14;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L18 */ _L18;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L20 */ _L20;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L22 */ _L22;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L17 */ _L17;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L16 */ _L16;
  kcg_int /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L15 */ _L15;
} outC_T_Build_Metadata_Packet_ID_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Build_Metadata_Packet_ID */
extern void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::q_dir */kcg_int q_dir,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::id */kcg_int id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_defined */NID_PACKET nid_packet_defined,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::m_version */kcg_int m_version,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);

extern void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);

#endif /* _T_Build_Metadata_Packet_ID_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.h
** Generation date: 2015-08-10T16:11:03
*************************************************************$ */

