/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Dangerpoint_TA_MA.h"

/* TA_MA::Normalize_Dangerpoint */
void Normalize_Dangerpoint_TA_MA(
  /* TA_MA::Normalize_Dangerpoint::d_endsection */ L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* TA_MA::Normalize_Dangerpoint::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Normalize_Dangerpoint::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Normalize_Dangerpoint::q_dangerpoint */ kcg_bool *q_dangerpoint,
  /* TA_MA::Normalize_Dangerpoint::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint)
{
  /* TA_MA::Normalize_Dangerpoint::_L3 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_MA::Normalize_Dangerpoint::_L4 */
  static kcg_bool _L4;
  /* TA_MA::Normalize_Dangerpoint::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_MA::Normalize_Dangerpoint::_L1 */
  static kcg_bool _L1;
  /* TA_MA::Normalize_Dangerpoint::_L5 */
  static DP_or_OL_t_TrackAtlasTypes _L5;
  /* TA_MA::Normalize_Dangerpoint::_L6 */
  static V_NVREL _L6;
  /* TA_MA::Normalize_Dangerpoint::_L7 */
  static P003V1_OBU_T_TM_baseline2 _L7;
  /* TA_MA::Normalize_Dangerpoint::_L8 */
  static P015_OBU_T_TM _L8;
  /* TA_MA::Normalize_Dangerpoint::_L9 */
  static Q_DANGERPOINT _L9;
  /* TA_MA::Normalize_Dangerpoint::_L10 */
  static Q_SCALE _L10;
  /* TA_MA::Normalize_Dangerpoint::_L11 */
  static V_RELEASEDP _L11;
  /* TA_MA::Normalize_Dangerpoint::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* TA_MA::Normalize_Dangerpoint::_L13 */
  static D_DP _L13;
  /* TA_MA::Normalize_Dangerpoint::_L14 */
  static kcg_int _L14;
  /* TA_MA::Normalize_Dangerpoint::_L15 */
  static DP_or_OL_t_TrackAtlasTypes _L15;
  /* TA_MA::Normalize_Dangerpoint::_L16 */
  static DP_or_OL_t_TrackAtlasTypes _L16;
  
  kcg_copy_P015_OBU_T_TM(&_L8, Packet15_in);
  _L9 = _L8.q_dangerpoint;
  _L1 = /* 1 */ EVAL_Q_DANGERPOINT_TA_Lib_internal(_L9);
  _L10 = _L8.q_scale;
  _L13 = _L8.d_dp;
  _L2 = /* 1 */ Eval_Q_SCALE_TA_MRSP(_L10, _L13);
  _L11 = _L8.v_releasedp;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L7, NV_in);
  _L6 = _L7.v_nvrel;
  /* 1 */ EVAL_V_Release_TA_Lib_internal(_L11, _L6, &_L3, &_L4);
  _L12 = d_endsection;
  _L14 = _L2 + _L12;
  _L5.d_DP_or_OL = _L14;
  _L5.v_release = _L3;
  _L5.calc_v_release_onboard = _L4;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &_L15,
    (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  /* 1 */ if (_L1) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L16, &_L5);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L16, &_L15);
  }
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(dangerpoint, &_L16);
  *q_dangerpoint = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Dangerpoint_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

