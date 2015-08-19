/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradient_H_
#define _Build_GradientProfile_TA_Gradient_H_

#include "kcg_types.h"
#include "Update_LRBG_then_GP_TA_Gradient.h"
#include "Update_GP_then_LRBG_TA_Gradient.h"
#include "Update_GP_only_TA_Gradient.h"
#include "Update_LRBG_only_TA_Gradient.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient::Build_GradientProfile::updated */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* TA_Gradient::Build_GradientProfile::_L111 */ rem__L111;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_GradientProfile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Build_GradientProfile */
extern void Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_GradientProfile_TA_Gradient *outC);

extern void Build_GradientProfile_reset_TA_Gradient(
  outC_Build_GradientProfile_TA_Gradient *outC);

#endif /* _Build_GradientProfile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_GradientProfile_TA_Gradient.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

