/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Overlap_TA_MA.h"

/* TA_MA::Normalize_Overlap */
void Normalize_Overlap_TA_MA(
  /* TA_MA::Normalize_Overlap::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA::Normalize_Overlap::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Normalize_Overlap::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Normalize_Overlap::q_overlap */ kcg_bool *q_overlap,
  /* TA_MA::Normalize_Overlap::overlap */ DP_or_OL_t_TrackAtlasTypes *overlap)
{
  /* TA_MA::Normalize_Overlap::_L14 */
  static kcg_int _L14;
  /* TA_MA::Normalize_Overlap::_L13 */
  static V_RELEASEOL _L13;
  /* TA_MA::Normalize_Overlap::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* TA_MA::Normalize_Overlap::_L11 */
  static D_OL _L11;
  /* TA_MA::Normalize_Overlap::_L10 */
  static P003V1_OBU_T_TM_baseline2 _L10;
  /* TA_MA::Normalize_Overlap::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_MA::Normalize_Overlap::_L7 */
  static Q_OVERLAP _L7;
  /* TA_MA::Normalize_Overlap::_L6 */
  static Q_SCALE _L6;
  /* TA_MA::Normalize_Overlap::_L5 */
  static V_NVREL _L5;
  /* TA_MA::Normalize_Overlap::_L4 */
  static DP_or_OL_t_TrackAtlasTypes _L4;
  /* TA_MA::Normalize_Overlap::_L3 */
  static P015_OBU_T_TM _L3;
  /* TA_MA::Normalize_Overlap::_L1 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* TA_MA::Normalize_Overlap::_L2 */
  static kcg_bool _L2;
  /* TA_MA::Normalize_Overlap::_L15 */
  static kcg_bool _L15;
  /* TA_MA::Normalize_Overlap::_L16 */
  static DP_or_OL_t_TrackAtlasTypes _L16;
  /* TA_MA::Normalize_Overlap::_L17 */
  static DP_or_OL_t_TrackAtlasTypes _L17;
  
  kcg_copy_P015_OBU_T_TM(&_L3, Packet15_in);
  _L13 = _L3.v_releaseol;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L10, NV_in);
  _L5 = _L10.v_nvrel;
  /* 1 */ EVAL_V_Release_TA_Lib_internal(_L13, _L5, &_L1, &_L2);
  _L6 = _L3.q_scale;
  _L11 = _L3.d_ol;
  _L12 = /* 1 */ Eval_Q_SCALE_TA_MRSP(_L6, _L11);
  _L9 = d_endsection;
  _L14 = _L12 + _L9;
  _L4.d_DP_or_OL = _L14;
  _L4.v_release = _L1;
  _L4.calc_v_release_onboard = _L2;
  _L7 = _L3.q_overlap;
  _L15 = /* 1 */ EVAL_Q_OVERLAP_TA_Lib_internal(_L7);
  *q_overlap = _L15;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &_L16,
    (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  /* 1 */ if (_L15) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L17, &_L4);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L17, &_L16);
  }
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(overlap, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Overlap_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

