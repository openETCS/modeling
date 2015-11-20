/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SDM_InputWrapper_SDM_Input_Wrappers_H_
#define _SDM_InputWrapper_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"
#include "ConvertMA_SDM_Input_Wrappers.h"
#include "ConvertGradient_section_SDM_Input_Wrappers.h"
#include "defaultMA_SDM_Input_Wrappers.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_internal_T_TargetManagement_types /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_out */ mrsp_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_update_out */ mrsp_update_out;
  MA_section_real_T_TargetManagement_types /* SDM_Input_Wrappers::SDM_InputWrapper::ma_out */ ma_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::ma_update_out */ ma_update_out;
  TrainLocations_real_T_SDM_Types_Pkg /* SDM_Input_Wrappers::SDM_InputWrapper::trainLocations */ trainLocations;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* SDM_Input_Wrappers::SDM_InputWrapper::gp_out */ gp_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::gp_update_out */ gp_update_out;
  L_internal_Type_Obu_BasicTypes_Pkg /* SDM_Input_Wrappers::SDM_InputWrapper::offsetAntennaL1 */ offsetAntennaL1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MA_section_real_T_TargetManagement_types /* SDM_Input_Wrappers::SDM_InputWrapper::_L255 */ _L255;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_InputWrapper_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::SDM_InputWrapper */
extern void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_InputWrapper_init_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SDM_InputWrapper_SDM_Input_Wrappers_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

