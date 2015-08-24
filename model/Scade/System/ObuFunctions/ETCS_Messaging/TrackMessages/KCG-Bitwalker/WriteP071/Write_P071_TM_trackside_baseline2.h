/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */
#ifndef _Write_P071_TM_trackside_baseline2_H_
#define _Write_P071_TM_trackside_baseline2_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "C_P071_tracksim_compr_TM_conversions.h"

/* ========================  input structure  ====================== */
typedef struct {
  P071_trackside_int_T_TM /* TM_trackside_baseline2::Write_P071::Packet71 */ Packet71;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P071::Packets */ Packets;
} inC_Write_P071_TM_trackside_baseline2;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside_baseline2::Write_P071::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P071::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Write_P071_TM_trackside_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside_baseline2::Write_P071 */
extern void Write_P071_TM_trackside_baseline2(
  inC_Write_P071_TM_trackside_baseline2 *inC,
  outC_Write_P071_TM_trackside_baseline2 *outC);

extern void Write_P071_reset_TM_trackside_baseline2(
  outC_Write_P071_TM_trackside_baseline2 *outC);

#endif /* _Write_P071_TM_trackside_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P071_TM_trackside_baseline2.h
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */

