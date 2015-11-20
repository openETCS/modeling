/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_DP_and_OL_LRBG_TA_MA.h"

/* TA_MA::Normalize_DP_and_OL_LRBG */
void Normalize_DP_and_OL_LRBG_TA_MA(
  /* TA_MA::Normalize_DP_and_OL_LRBG::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA::Normalize_DP_and_OL_LRBG::MA_in */ MovementAuthority_t_TrackAtlasTypes *MA_in,
  /* TA_MA::Normalize_DP_and_OL_LRBG::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint,
  /* TA_MA::Normalize_DP_and_OL_LRBG::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap)
{
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L8 */
  static MovementAuthority_t_TrackAtlasTypes _L8;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L61 */
  static DP_or_OL_t_TrackAtlasTypes _L61;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L64 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L64;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L63 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L63;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L62 */
  static kcg_bool _L62;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L65 */
  static kcg_int _L65;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L66 */
  static DP_or_OL_t_TrackAtlasTypes _L66;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L74 */
  static MovementAuthority_t_TrackAtlasTypes _L74;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L73 */
  static DP_or_OL_t_TrackAtlasTypes _L73;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L72 */
  static kcg_int _L72;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L69 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L69;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L70 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L70;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L71 */
  static kcg_bool _L71;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L68 */
  static DP_or_OL_t_TrackAtlasTypes _L68;
  /* TA_MA::Normalize_DP_and_OL_LRBG::_L67 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L67;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L8, MA_in);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L61, &_L8.dangerpoint);
  _L64 = _L61.d_DP_or_OL;
  _L12 = pos_LRBG;
  _L65 = _L64 - _L12;
  _L63 = _L61.v_release;
  _L62 = _L61.calc_v_release_onboard;
  _L66.d_DP_or_OL = _L65;
  _L66.v_release = _L63;
  _L66.calc_v_release_onboard = _L62;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(dangerpoint, &_L66);
  _L67 = pos_LRBG;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L74, MA_in);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L68, &_L74.overlap);
  _L71 = _L68.calc_v_release_onboard;
  _L70 = _L68.v_release;
  _L69 = _L68.d_DP_or_OL;
  _L72 = _L69 - _L67;
  _L73.d_DP_or_OL = _L72;
  _L73.v_release = _L70;
  _L73.calc_v_release_onboard = _L71;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(overlap, &_L73);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_DP_and_OL_LRBG_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

