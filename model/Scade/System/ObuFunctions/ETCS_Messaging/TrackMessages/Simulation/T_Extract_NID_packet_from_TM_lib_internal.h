/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T20:56:50
*************************************************************$ */
#ifndef _T_Extract_NID_packet_from_TM_lib_internal_H_
#define _T_Extract_NID_packet_from_TM_lib_internal_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TM_lib_internal::T_Extract_NID_packet_from_Meta::nid_packet_meta */ nid_packet_meta;
} inC_T_Extract_NID_packet_from_TM_lib_internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::T_Extract_NID_packet_from_Meta::nid_packet_int */ nid_packet_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::T_Extract_NID_packet_from_Meta::_L1 */ _L1;
  kcg_int /* TM_lib_internal::T_Extract_NID_packet_from_Meta::_L2 */ _L2;
  kcg_int /* TM_lib_internal::T_Extract_NID_packet_from_Meta::_L3 */ _L3;
} outC_T_Extract_NID_packet_from_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Extract_NID_packet_from_Meta */
extern void T_Extract_NID_packet_from_TM_lib_internal(
  inC_T_Extract_NID_packet_from_TM_lib_internal *inC,
  outC_T_Extract_NID_packet_from_TM_lib_internal *outC);

extern void T_Extract_NID_packet_from_reset_TM_lib_internal(
  outC_T_Extract_NID_packet_from_TM_lib_internal *outC);

#endif /* _T_Extract_NID_packet_from_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Extract_NID_packet_from_TM_lib_internal.h
** Generation date: 2015-06-09T20:56:50
*************************************************************$ */

