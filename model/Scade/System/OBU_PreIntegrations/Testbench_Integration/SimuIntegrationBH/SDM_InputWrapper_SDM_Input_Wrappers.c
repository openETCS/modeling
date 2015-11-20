/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"

#ifndef KCG_USER_DEFINED_INIT
void SDM_InputWrapper_init_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L255.valid = kcg_true;
  outC->_L255.v_main = 0.0;
  outC->_L255.EOA.Location = 0.0;
  outC->_L255.EOA.TargetSpeed = 0.0;
  outC->_L255.DP_valid = kcg_true;
  outC->_L255.DangerPoint = 0.0;
  outC->_L255.OL_valid = kcg_true;
  outC->_L255.Overlap = 0.0;
  outC->_L255.q_calculate_release = kcg_true;
  outC->_L255.ReleaseSpeed = 0.0;
  outC->_L255.level = MA_L1_TrackAtlasTypes;
  outC->offsetAntennaL1 = 0;
  outC->gp_update_out = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->gp_out[i].location = 0.0;
    outC->gp_out[i].gradient = 0.0;
    outC->gp_out[i].valid = kcg_true;
  }
  outC->trainLocations.trainPositionIsValid = kcg_true;
  outC->trainLocations.d_est_frontendPos = 0.0;
  outC->trainLocations.d_minSafeFrontEndPos = 0.0;
  outC->trainLocations.d_maxSafeFrontEndPos = 0.0;
  outC->trainLocations.d_LRBG = 0.0;
  outC->trainLocations.d_accLRBG = 0.0;
  outC->ma_update_out = kcg_true;
  outC->ma_out.valid = kcg_true;
  outC->ma_out.v_main = 0.0;
  outC->ma_out.EOA.Location = 0.0;
  outC->ma_out.EOA.TargetSpeed = 0.0;
  outC->ma_out.DP_valid = kcg_true;
  outC->ma_out.DangerPoint = 0.0;
  outC->ma_out.OL_valid = kcg_true;
  outC->ma_out.Overlap = 0.0;
  outC->ma_out.q_calculate_release = kcg_true;
  outC->ma_out.ReleaseSpeed = 0.0;
  outC->ma_out.level = MA_L1_TrackAtlasTypes;
  outC->mrsp_update_out = kcg_true;
  for (i1 = 0; i1 < 110; i1++) {
    outC->mrsp_out[i1].Loc_Abs = 0.0;
    outC->mrsp_out[i1].MRS = 0.0;
    outC->mrsp_out[i1].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Input_Wrappers::SDM_InputWrapper */
void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  static kcg_int i1;
  /* SDM_Input_Wrappers::SDM_InputWrapper */
  static MA_section_real_T_TargetManagement_types tmp;
  static kcg_int i;
  /* SDM_Input_Wrappers::SDM_InputWrapper */
  static MA_section_real_T_TargetManagement_types op_call;
  /* SDM_Input_Wrappers::SDM_InputWrapper */
  static kcg_bool ck_every;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L5 */
  static trainPosition_T_TrainPosition_Types_Pck _L5;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L74 */
  static kcg_bool _L74;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L75 */
  static Location_T_Obu_BasicTypes_Pkg _L75;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L77 */
  static kcg_bool _L77;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L94 */
  static kcg_bool _L94;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L95 */
  static kcg_bool _L95;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L96 */
  static L_internal_real_Type_SDM_Types_Pkg _L96;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L106 */
  static Location_T_Obu_BasicTypes_Pkg _L106;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L105 */
  static L_internal_real_Type_SDM_Types_Pkg _L105;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L110 */
  static L_internal_real_Type_SDM_Types_Pkg _L110;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L109 */
  static Location_T_Obu_BasicTypes_Pkg _L109;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L151 */
  static TrainLocations_real_T_SDM_Types_Pkg _L151;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L167 */
  static MRSP_internal_T_TargetManagement_types _L167;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L237 */
  static trainPosition_T_TrainPosition_Types_Pck _L237;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L238 */
  static positionedBG_T_TrainPosition_Types_Pck _L238;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L239 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L239;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L240 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L240;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L241 */
  static L_internal_real_Type_SDM_Types_Pkg _L241;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L245 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L245;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L246 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L246;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L247 */
  static kcg_int _L247;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L248 */
  static kcg_int _L248;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L249 */
  static kcg_int _L249;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L250 */
  static L_internal_real_Type_SDM_Types_Pkg _L250;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L262 */
  static kcg_bool _L262;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L263 */
  static MovementAuthority_t_TrackAtlasTypes _L263;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L264 */
  static kcg_bool _L264;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L265 */
  static GradientProfile_t_TrackAtlasTypes _L265;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L266 */
  static kcg_bool _L266;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L267 */
  static MRSP_Profile_t_TrackAtlasTypes _L267;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L268 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L268;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L269 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L269;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L271 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L271;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L280 */
  static trainProperties_T_TrainPosition_Types_Pck _L280;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L279 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L279;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L281 */
  static kcg_int _L281;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L282 */
  static MA_Level_t_TrackAtlasTypes _L282;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L284 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L284;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L289 */
  static MA_section_real_T_TargetManagement_types _L289;
  
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L268,
    dataFromTrackAtlas);
  _L262 = _L268.freshMA;
  ck_every = _L262;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L263, &_L268.MA);
  /* ck_SDM_InputWrapper */ if (ck_every) {
    /* 2 */ ConvertMA_SDM_Input_Wrappers(&_L263, &op_call);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L5, TrainPosition);
  _L74 = _L5.trainPositionIsUnknown;
  _L75 = _L5.minSafeFrontEndPosition;
  _L77 = !_L74;
  _L94 = _L5.valid;
  _L95 = _L77 & _L94;
  _L96 = /* 4 */ TransformL_intToL_real_SDM_Types_Pkg(_L75);
  _L106 = _L5.estimatedFrontEndPosition;
  _L105 = /* 9 */ TransformL_intToL_real_SDM_Types_Pkg(_L106);
  _L109 = _L5.maxSafeFrontEndPostion;
  _L110 = /* 11 */ TransformL_intToL_real_SDM_Types_Pkg(_L109);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L237, TrainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L238, &_L237.LRBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L239, &_L238.location);
  _L240 = _L239.nominal;
  _L241 = /* 12 */ TransformL_intToL_real_SDM_Types_Pkg(_L240);
  _L245 = _L239.d_max;
  _L246 = _L239.d_min;
  _L247 = _L245 - _L246;
  _L249 = 2;
  _L248 = _L247 / _L249;
  _L250 = /* 16 */ TransformL_intToL_real_SDM_Types_Pkg(_L248);
  _L151.trainPositionIsValid = _L95;
  _L151.d_est_frontendPos = _L105;
  _L151.d_minSafeFrontEndPos = _L96;
  _L151.d_maxSafeFrontEndPos = _L110;
  _L151.d_LRBG = _L241;
  _L151.d_accLRBG = _L250;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->trainLocations, &_L151);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_L267, &_L268.MRSP);
  for (i1 = 0; i1 < 110; i1++) {
    /* ConvertMRSP_section */
    ConvertMRSP_section_SDM_Input_Wrappers(&_L267[i1], &_L167[i1]);
  }
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->mrsp_out, &_L167);
  /* 1 */ defaultMA_SDM_Input_Wrappers(&_L289);
  /* ck_SDM_InputWrapper */ if (ck_every) {
    kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L255, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_MA_section_real_T_TargetManagement_types(&tmp, &_L289);
    }
    else {
      kcg_copy_MA_section_real_T_TargetManagement_types(&tmp, &outC->_L255);
    }
    kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L255, &tmp);
  }
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->ma_out,
    &outC->_L255);
  outC->ma_update_out = _L262;
  _L266 = _L268.freshMRSP;
  outC->mrsp_update_out = _L266;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L265, &_L268.GradientProfile);
  _L264 = _L268.freshGradientProfile;
  /* 2 */ for (i = 0; i < 50; i++) {
    /* 1 */ ConvertGradient_section_SDM_Input_Wrappers(&_L265[i], &_L269[i]);
  }
  outC->gp_update_out = _L264;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->gp_out,
    &_L269);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L284,
    dataFromTrackAtlas);
  _L282 = _L284.MA.Level;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L280, trainProps);
  _L279 = _L280.d_baliseAntenna_2_frontend.nominal;
  _L281 = 0;
  switch (_L282) {
    case MA_L1_TrackAtlasTypes :
      _L271 = _L279;
      break;
    
    default :
      _L271 = _L281;
  }
  outC->offsetAntennaL1 = _L271;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

