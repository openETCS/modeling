/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */
#ifndef _Send_M003_JRU_MessageLibBaseline2_H_
#define _Send_M003_JRU_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "C_M003_int__to_header_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* MessageLibBaseline2::Send_M003_JRU::Message_Out */ Message_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_M003_int__to_header_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_003_int_T_TM_radio_messages /* MessageLibBaseline2::Send_M003_JRU::_L1 */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* MessageLibBaseline2::Send_M003_JRU::_L2 */ _L2;
} outC_Send_M003_JRU_MessageLibBaseline2;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLibBaseline2::Send_M003_JRU */
extern void Send_M003_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M003_JRU::M003 */M_003_int_T_TM_radio_messages *M003,
  outC_Send_M003_JRU_MessageLibBaseline2 *outC);

extern void Send_M003_JRU_reset_MessageLibBaseline2(
  outC_Send_M003_JRU_MessageLibBaseline2 *outC);

#endif /* _Send_M003_JRU_MessageLibBaseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M003_JRU_MessageLibBaseline2.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

