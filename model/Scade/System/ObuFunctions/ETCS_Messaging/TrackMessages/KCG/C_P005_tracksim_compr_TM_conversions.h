/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-17T13:45:16
*************************************************************$ */
#ifndef _C_P005_tracksim_compr_TM_conversions_H_
#define _C_P005_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "C_P005_flatten_sections_TM_lib_internal.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  P005_trackside_int_T_TM /* TM_conversions::C_P005_tracksim_compr::P005_from_track */ P005_from_track;
} inC_C_P005_tracksim_compr_TM_conversions;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P005_tracksim_compr::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P005_tracksim_compr::P005_compressed */ P005_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_C_P005_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_tracksim_compr */
extern void C_P005_tracksim_compr_TM_conversions(
  inC_C_P005_tracksim_compr_TM_conversions *inC,
  outC_C_P005_tracksim_compr_TM_conversions *outC);

extern void C_P005_tracksim_compr_reset_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC);

#endif /* _C_P005_tracksim_compr_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_tracksim_compr_TM_conversions.h
** Generation date: 2015-08-17T13:45:16
*************************************************************$ */

