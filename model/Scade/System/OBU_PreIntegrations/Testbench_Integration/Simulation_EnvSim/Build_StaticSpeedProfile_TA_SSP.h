/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Build_StaticSpeedProfile_TA_SSP_H_
#define _Build_StaticSpeedProfile_TA_SSP_H_

#include "kcg_types.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "SSP_Preprocessing_TA_SSP.h"
#include "SSP_Postprocessing_TA_SSP.h"

/* =====================  no input structure  ====================== */

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
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::Build_StaticSpeedProfile::_L237 */ _L237;
  NID_BG /* TA_SSP::Build_StaticSpeedProfile::_L111 */ rem__L111;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Postprocessing_TA_SSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_StaticSpeedProfile_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::Build_StaticSpeedProfile */
extern void Build_StaticSpeedProfile_TA_SSP(
  /* TA_SSP::Build_StaticSpeedProfile::reset */kcg_bool reset,
  /* TA_SSP::Build_StaticSpeedProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SSP::Build_StaticSpeedProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_SSP::Build_StaticSpeedProfile::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_Build_StaticSpeedProfile_TA_SSP *outC);

extern void Build_StaticSpeedProfile_reset_TA_SSP(
  outC_Build_StaticSpeedProfile_TA_SSP *outC);

#endif /* _Build_StaticSpeedProfile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_StaticSpeedProfile_TA_SSP.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

