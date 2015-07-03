/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:35:44
*************************************************************$ */
#ifndef _TestP137_Internal_H_
#define _TestP137_Internal_H_

#include "kcg_types.h"
#include "Read_P137_TM.h"
#include "Write_P137_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* Internal::TestP137::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P137_TM /* 1 */ _1_Context_1;
  outC_Write_P137_TM_trackside /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* Internal::TestP137::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP137::_L3 */ _L3;
  kcg_bool /* Internal::TestP137::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestP137::_L4 */ _L4;
  P137_trackside_int_T_TM /* Internal::TestP137::_L5 */ _L5;
} outC_TestP137_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* Internal::TestP137 */
extern void TestP137_Internal(outC_TestP137_Internal *outC);

extern void TestP137_reset_Internal(outC_TestP137_Internal *outC);

#endif /* _TestP137_Internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestP137_Internal.h
** Generation date: 2015-07-03T00:35:44
*************************************************************$ */

