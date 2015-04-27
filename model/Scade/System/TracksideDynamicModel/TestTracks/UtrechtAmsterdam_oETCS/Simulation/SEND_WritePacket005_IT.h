/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */
#ifndef _SEND_WritePacket005_IT_H_
#define _SEND_WritePacket005_IT_H_

#include "kcg_types.h"
#include "SEND_ConvertP005forWrite_IT.h"
#include "SIM_SEND_WriteRadioMessag.h"
#include "SIM_SEND_WriteRadioMessageData.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SEND_WritePacket005_IT::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* SEND_WritePacket005_IT::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SIM_SEND_WriteRadioMessageData /* 1 */ _2_Context_1;
  outC_SIM_SEND_WriteRadioMessag /* 1 */ _1_Context_1;
  outC_SEND_ConvertP005forWrite_IT /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TM_P005 /* SEND_WritePacket005_IT::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L3 */ _L3;
  CompressedPacketData_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L2 */ _L2;
  Metadata_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L10 */ _L10;
  kcg_bool /* SEND_WritePacket005_IT::_L18 */ _L18;
  kcg_int /* SEND_WritePacket005_IT::_L21 */ _L21;
  kcg_int /* SEND_WritePacket005_IT::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* SEND_WritePacket005_IT::_L41 */ _L41;
} outC_SEND_WritePacket005_IT;

/* ===========  node initialization and cycle functions  =========== */
/* SEND_WritePacket005_IT */
extern void SEND_WritePacket005_IT(
  /* SEND_WritePacket005_IT::Packet05 */TM_P005 *Packet05,
  /* SEND_WritePacket005_IT::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_SEND_WritePacket005_IT *outC);

extern void SEND_WritePacket005_IT_reset(outC_SEND_WritePacket005_IT *outC);

#endif /* _SEND_WritePacket005_IT_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WritePacket005_IT.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */

