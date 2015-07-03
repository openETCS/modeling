/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */
#ifndef _Send_P015_MessageLibBaseline2_H_
#define _Send_P015_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "Write_P015_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P015::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P015_TM_trackside /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P015::_L3 */ _L3;
  P015_trackside_int_T_TM /* MessageLibBaseline2::Send_P015::_L4 */ _L4;
  kcg_bool /* MessageLibBaseline2::Send_P015::_L8 */ _L8;
  kcg_bool /* MessageLibBaseline2::Send_P015::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* MessageLibBaseline2::Send_P015::_L7 */ _L7;
  kcg_bool /* MessageLibBaseline2::Send_P015::_L5 */ _L5;
} outC_Send_P015_MessageLibBaseline2;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLibBaseline2::Send_P015 */
extern void Send_P015_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P015::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P015::P015 */P015_trackside_int_T_TM *P015,
  outC_Send_P015_MessageLibBaseline2 *outC);

extern void Send_P015_reset_MessageLibBaseline2(
  outC_Send_P015_MessageLibBaseline2 *outC);

#endif /* _Send_P015_MessageLibBaseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P015_MessageLibBaseline2.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

