/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"

void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  outC->init = kcg_true;
}

/* SDM_Input_Wrappers::SDM_InputWrapper */
void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  static kcg_int i;
  
  outC->trainLocations.trainPositionIsValid =
    !(*TrainPosition).trainPositionIsUnknown & (*TrainPosition).valid;
  outC->mrsp_update_out = (*dataFromTrackAtlas).freshMRSP;
  outC->gp_update_out = (*dataFromTrackAtlas).freshGradientProfile;
  switch ((*dataFromTrackAtlas).MA.Level) {
    case MA_L1_TrackAtlasTypes :
      outC->offsetAntennaL1 = (*trainProps).d_baliseAntenna_2_frontend.nominal;
      break;
    
    default :
      outC->offsetAntennaL1 = 0;
  }
  for (i = 0; i < 50; i++) {
    /* 1 */
    ConvertGradient_section_SDM_Input_Wrappers(
      &(*dataFromTrackAtlas).GradientProfile[i],
      &outC->gp_out[i]);
  }
  outC->ma_update_out = (*dataFromTrackAtlas).freshMA;
  if (outC->ma_update_out) {
    /* 2 */
    ConvertMA_SDM_Input_Wrappers(&(*dataFromTrackAtlas).MA, &outC->ma_out);
  }
  else if (outC->init) {
    /* 1 */ defaultMA_SDM_Input_Wrappers(&outC->ma_out);
  }
  outC->init = kcg_false;
  for (i = 0; i < 110; i++) {
    /* ConvertMRSP_section */
    ConvertMRSP_section_SDM_Input_Wrappers(
      &(*dataFromTrackAtlas).MRSP[i],
      &outC->mrsp_out[i]);
  }
  outC->trainLocations.d_est_frontendPos = /* 9 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).estimatedFrontEndPosition);
  outC->trainLocations.d_minSafeFrontEndPos = /* 4 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).minSafeFrontEndPosition);
  outC->trainLocations.d_maxSafeFrontEndPos = /* 11 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).maxSafeFrontEndPostion);
  outC->trainLocations.d_LRBG = /* 12 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).LRBG.location.nominal);
  outC->trainLocations.d_accLRBG = /* 16 */
    TransformL_intToL_real_SDM_Types_Pkg(
      ((*TrainPosition).LRBG.location.d_max -
        (*TrainPosition).LRBG.location.d_min) / 2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

