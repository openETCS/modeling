/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-06T16:49:38
*************************************************************$ */
#ifndef _T_extract_nid_packet_from_TM_H_
#define _T_extract_nid_packet_from_TM_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* TM::T_extract_nid_packet_from_metadata::Metadata_in */ Metadata_in;
} inC_T_extract_nid_packet_from_TM;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM::T_extract_nid_packet_from_metadata::nid_packet */ nid_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM::T_extract_nid_packet_from_metadata::_L1 */ _L1;
  kcg_int /* TM::T_extract_nid_packet_from_metadata::_L3 */ _L3;
  kcg_int /* TM::T_extract_nid_packet_from_metadata::_L4 */ _L4;
} outC_T_extract_nid_packet_from_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::T_extract_nid_packet_from_metadata */
extern void T_extract_nid_packet_from_TM(
  inC_T_extract_nid_packet_from_TM *inC,
  outC_T_extract_nid_packet_from_TM *outC);

extern void T_extract_nid_packet_from_reset_TM(
  outC_T_extract_nid_packet_from_TM *outC);

#endif /* _T_extract_nid_packet_from_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_extract_nid_packet_from_TM.h
** Generation date: 2015-07-06T16:49:38
*************************************************************$ */

