/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMA */
void ConvertMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMA::Ma_in */ MovementAuthority_t_TrackAtlasTypes *Ma_in,
  /* SDM_Input_Wrappers::ConvertMA::Ma_out */ MA_section_real_T_TargetManagement_types *Ma_out)
{
  /* SDM_Input_Wrappers::ConvertMA */
  static kcg_int acc;
  /* SDM_Input_Wrappers::ConvertMA */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* SDM_Input_Wrappers::ConvertMA::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* SDM_Input_Wrappers::ConvertMA::_L20 */
  static V_internal_real_Type_SDM_Types_Pkg _L20;
  /* SDM_Input_Wrappers::ConvertMA::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  /* SDM_Input_Wrappers::ConvertMA::_L23 */
  static V_internal_real_Type_SDM_Types_Pkg _L23;
  /* SDM_Input_Wrappers::ConvertMA::_L25 */
  static L_internal_real_Type_SDM_Types_Pkg _L25;
  /* SDM_Input_Wrappers::ConvertMA::_L39 */
  static EOA_real_T_TargetManagement_types _L39;
  /* SDM_Input_Wrappers::ConvertMA::_L89 */
  static MovementAuthority_t_TrackAtlasTypes _L89;
  /* SDM_Input_Wrappers::ConvertMA::_L114 */
  static MA_section_real_T_TargetManagement_types _L114;
  /* SDM_Input_Wrappers::ConvertMA::_L115 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L115;
  /* SDM_Input_Wrappers::ConvertMA::_L116 */
  static kcg_bool _L116;
  /* SDM_Input_Wrappers::ConvertMA::_L117 */
  static DP_or_OL_t_TrackAtlasTypes _L117;
  /* SDM_Input_Wrappers::ConvertMA::_L118 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L118;
  /* SDM_Input_Wrappers::ConvertMA::_L119 */
  static kcg_bool _L119;
  /* SDM_Input_Wrappers::ConvertMA::_L120 */
  static DP_or_OL_t_TrackAtlasTypes _L120;
  /* SDM_Input_Wrappers::ConvertMA::_L121 */
  static kcg_bool _L121;
  /* SDM_Input_Wrappers::ConvertMA::_L125 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L125;
  /* SDM_Input_Wrappers::ConvertMA::_L129 */
  static DP_or_OL_t_TrackAtlasTypes _L129;
  /* SDM_Input_Wrappers::ConvertMA::_L131 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L131;
  /* SDM_Input_Wrappers::ConvertMA::_L132 */
  static DP_or_OL_t_TrackAtlasTypes _L132;
  /* SDM_Input_Wrappers::ConvertMA::_L133 */
  static kcg_bool _L133;
  /* SDM_Input_Wrappers::ConvertMA::_L134 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L134;
  /* SDM_Input_Wrappers::ConvertMA::_L186 */
  static MA_Level_t_TrackAtlasTypes _L186;
  /* SDM_Input_Wrappers::ConvertMA::_L187 */
  static V_internal_real_Type_SDM_Types_Pkg _L187;
  /* SDM_Input_Wrappers::ConvertMA::_L192 */
  static kcg_bool _L192;
  /* SDM_Input_Wrappers::ConvertMA::_L191 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L191;
  /* SDM_Input_Wrappers::ConvertMA::_L193 */
  static MovementAuthority_t_TrackAtlasTypes _L193;
  /* SDM_Input_Wrappers::ConvertMA::_L199 */
  static kcg_int _L199;
  /* SDM_Input_Wrappers::ConvertMA::_L200 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L200;
  /* SDM_Input_Wrappers::ConvertMA::_L201 */
  static kcg_int _L201;
  /* SDM_Input_Wrappers::ConvertMA::_L202 */
  static kcg_bool _L202;
  /* SDM_Input_Wrappers::ConvertMA::_L204 */
  static kcg_bool _L204;
  /* SDM_Input_Wrappers::ConvertMA::_L205 */
  static kcg_int _L205;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L89, Ma_in);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L120, &_L89.dangerpoint);
  _L131 = _L120.d_DP_or_OL;
  _L19 = /* 1 */ TransformL_intToL_real_SDM_Types_Pkg(_L131);
  _L119 = _L89.q_overlap;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L117, &_L89.overlap);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L132, &_L89.dangerpoint);
  /* 1 */ if (_L119) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L129, &_L117);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L129, &_L132);
  }
  _L115 = _L129.v_release;
  _L20 = /* 1 */ TransformV_intToV_real_SDM_Types_Pkg(_L115);
  _L201 = 0;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L193, Ma_in);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L191,
    &_L193.sections);
  _L192 = _L193.valid;
  _L200 = _L201;
  /* 3 */ if (_L192) {
    /* 3 */ for (i = 0; i < 10; i++) {
      acc = _L200;
      /* 2 */
      SelectEndSection_SDM_Input_Wrappers(acc, &_L191[i], &cond_iterw, &_L200);
      _L199 = i + 1;
      /* 3 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L199 = 0;
  }
  _L21 = /* 2 */ TransformL_intToL_real_SDM_Types_Pkg(_L200);
  _L125 = _L89.v_loa;
  _L23 = /* 2 */ TransformV_intToV_real_SDM_Types_Pkg(_L125);
  _L118 = _L117.d_DP_or_OL;
  _L25 = /* 3 */ TransformL_intToL_real_SDM_Types_Pkg(_L118);
  _L39.Location = _L21;
  _L39.TargetSpeed = _L23;
  _L133 = _L89.valid;
  _L205 = 0;
  _L204 = _L200 > _L205;
  _L202 = _L133 & _L204;
  _L134 = _L89.v_main;
  _L187 = /* 3 */ TransformV_intToV_real_SDM_Types_Pkg(_L134);
  _L121 = _L89.q_dangerpoint;
  _L116 = _L129.calc_v_release_onboard;
  _L186 = _L89.Level;
  _L114.valid = _L202;
  _L114.v_main = _L187;
  kcg_copy_EOA_real_T_TargetManagement_types(&_L114.EOA, &_L39);
  _L114.DP_valid = _L121;
  _L114.DangerPoint = _L19;
  _L114.OL_valid = _L119;
  _L114.Overlap = _L25;
  _L114.q_calculate_release = _L116;
  _L114.ReleaseSpeed = _L20;
  _L114.level = _L186;
  kcg_copy_MA_section_real_T_TargetManagement_types(Ma_out, &_L114);
  noname = _L199;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMA_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

