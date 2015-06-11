/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-11T11:38:20
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
} outC_T_Build_Metadata_Packet_ID_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Build_Metadata_Packet_ID */
extern void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::meta_id */kcg_int meta_id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet */NID_PACKET nid_packet,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);

extern void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);

#endif /* _T_Build_Metadata_Packet_ID_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.h
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */

