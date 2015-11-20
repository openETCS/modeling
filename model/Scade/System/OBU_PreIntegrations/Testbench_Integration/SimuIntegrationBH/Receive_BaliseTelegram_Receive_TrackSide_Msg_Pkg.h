/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::outTrackMessage_for_check */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
extern void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

