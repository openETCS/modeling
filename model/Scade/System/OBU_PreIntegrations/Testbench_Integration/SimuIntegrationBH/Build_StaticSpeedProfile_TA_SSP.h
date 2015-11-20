/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Build_StaticSpeedProfile_TA_SSP_H_
#define _Build_StaticSpeedProfile_TA_SSP_H_

#include "kcg_types.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "SSP_Preprocessing_TA_SSP.h"
#include "SSP_Postprocessing_TA_SSP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::SSP */ SSP;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::updated */ updated;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_SSP::Build_StaticSpeedProfile::_L111 */ _L111;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::_L237 */ _L237;
  kcg_bool /* TA_SSP::Build_StaticSpeedProfile::_L241 */ _L241;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::_L242 */ _L242;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Postprocessing_TA_SSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_StaticSpeedProfile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Build_StaticSpeedProfile */
extern void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */ kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_StaticSpeedProfile_init_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_StaticSpeedProfile_TA_SSP_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_StaticSpeedProfile_TA_SSP.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

