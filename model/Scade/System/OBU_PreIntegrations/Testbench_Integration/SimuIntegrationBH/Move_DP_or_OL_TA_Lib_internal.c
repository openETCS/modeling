/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Move_DP_or_OL_TA_Lib_internal.h"

/* TA_Lib_internal::Move_DP_or_OL */
void Move_DP_or_OL_TA_Lib_internal(
  /* TA_Lib_internal::Move_DP_or_OL::DP_or_OL_in */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* TA_Lib_internal::Move_DP_or_OL::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::Move_DP_or_OL::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::Move_DP_or_OL::DP_or_OL_out */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_out)
{
  /* TA_Lib_internal::Move_DP_or_OL::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_offset;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1::then::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* TA_Lib_internal::Move_DP_or_OL::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg offset;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1::else::else::_L1 */
  static kcg_int _L15_IfBlock1;
  /* TA_Lib_internal::Move_DP_or_OL::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_offset;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1::else::then::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14_IfBlock1;
  /* TA_Lib_internal::Move_DP_or_OL::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_offset;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Move_DP_or_OL::offset */
  static L_internal_Type_Obu_BasicTypes_Pkg _6_offset;
  /* TA_Lib_internal::Move_DP_or_OL::_L2 */
  static DP_or_OL_t_TrackAtlasTypes _L2;
  /* TA_Lib_internal::Move_DP_or_OL::_L9 */
  static DP_or_OL_t_TrackAtlasTypes _L9;
  /* TA_Lib_internal::Move_DP_or_OL::_L10 */
  static kcg_int _L10;
  /* TA_Lib_internal::Move_DP_or_OL::_L130 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L130;
  /* TA_Lib_internal::Move_DP_or_OL::_L141 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L141;
  
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L2, DP_or_OL_in);
  _L130 = _L2.d_DP_or_OL;
  IfBlock1_clock = (msg_LRBG == kcg_true) & (msg_prvLRBG == kcg_false);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = pos_LRBG;
    _1_offset = _L1_IfBlock1;
    _6_offset = _1_offset;
  }
  else {
    else_clock_IfBlock1 = (msg_LRBG == kcg_false) & (msg_prvLRBG == kcg_true);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = pos_prvLRBG;
      _3_offset = _L14_IfBlock1;
      offset = _3_offset;
    }
    else {
      _L15_IfBlock1 = 0;
      _2_offset = _L15_IfBlock1;
      offset = _2_offset;
    }
    _6_offset = offset;
  }
  _L141 = _6_offset;
  _L10 = _L130 + _L141;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L9, &_L2);
  if (kcg_true) {
    _L9.d_DP_or_OL = _L10;
  }
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(DP_or_OL_out, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Move_DP_or_OL_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

