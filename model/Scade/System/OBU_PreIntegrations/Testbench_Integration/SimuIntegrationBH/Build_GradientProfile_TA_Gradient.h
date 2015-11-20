/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradient_H_
#define _Build_GradientProfile_TA_Gradient_H_

#include "kcg_types.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "GP_Preprocessing_TA_Gradient.h"
#include "GP_Postprocessing_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient::Build_GradientProfile::updated */ updated;
  kcg_bool /* TA_Gradient::Build_GradientProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_Gradient::Build_GradientProfile::_L111 */ _L111;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::_L237 */ _L237;
  kcg_bool /* TA_Gradient::Build_GradientProfile::_L241 */ _L241;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::_L242 */ _L242;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Postprocessing_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_GradientProfile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Build_GradientProfile */
extern void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::reset */ kcg_bool reset,
  /* TA_Gradient::Build_GradientProfile::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_GradientProfile_init_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_GradientProfile_TA_Gradient_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_GradientProfile_TA_Gradient.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

