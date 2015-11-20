/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _GP_Postprocessing_TA_Gradient_H_
#define _GP_Postprocessing_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Postprocessing::available */ available;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::_L4 */ rem__L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_GP_Postprocessing_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Postprocessing */
extern void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient *outC);

extern void GP_Postprocessing_reset_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC);

#endif /* _GP_Postprocessing_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Postprocessing_TA_Gradient.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

