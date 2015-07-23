/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _No_Radio_Packets_RadioLib_H_
#define _No_Radio_Packets_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* RadioLib::No_Radio_Packets::Radio_packets_out */ Radio_packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* RadioLib::No_Radio_Packets::_L30 */ _L30;
} outC_No_Radio_Packets_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::No_Radio_Packets */
extern void No_Radio_Packets_RadioLib(
  /* RadioLib::No_Radio_Packets::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_No_Radio_Packets_RadioLib *outC);

extern void No_Radio_Packets_reset_RadioLib(
  outC_No_Radio_Packets_RadioLib *outC);

#endif /* _No_Radio_Packets_RadioLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Radio_Packets_RadioLib.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

