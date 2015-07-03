/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */
#ifndef _Write_P003V1_TM_trackside_baseline2_H_
#define _Write_P003V1_TM_trackside_baseline2_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "C_P003V1_tracksim_compr_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside_baseline2::Write_P003V1::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _2_Context_1;
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_trackside_int_T_TM_baseline2 /* TM_trackside_baseline2::Write_P003V1::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L10 */ _L10;
  kcg_bool /* TM_trackside_baseline2::Write_P003V1::_L18 */ _L18;
  kcg_int /* TM_trackside_baseline2::Write_P003V1::_L21 */ _L21;
  kcg_int /* TM_trackside_baseline2::Write_P003V1::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P003V1::_L43 */ _L43;
} outC_Write_P003V1_TM_trackside_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside_baseline2::Write_P003V1 */
extern void Write_P003V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P003V1::Packet003V1 */P003V1_trackside_int_T_TM_baseline2 *Packet003V1,
  /* TM_trackside_baseline2::Write_P003V1::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P003V1_TM_trackside_baseline2 *outC);

extern void Write_P003V1_reset_TM_trackside_baseline2(
  outC_Write_P003V1_TM_trackside_baseline2 *outC);

#endif /* _Write_P003V1_TM_trackside_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P003V1_TM_trackside_baseline2.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

