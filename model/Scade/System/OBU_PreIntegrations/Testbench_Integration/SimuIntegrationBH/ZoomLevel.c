/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ZoomLevel.h"

#ifndef KCG_USER_DEFINED_INIT
void ZoomLevel_init(outC_ZoomLevel *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_Zoom1_SM1;
  outC->zoomlevel = 0;
  for (i = 0; i < 9; i++) {
    outC->Scale[i] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void ZoomLevel_reset(outC_ZoomLevel *outC)
{
  outC->init = kcg_true;
}

/* ZoomLevel */
void ZoomLevel(
  /* ZoomLevel::ZoomIn */ kcg_bool ZoomIn,
  /* ZoomLevel::ZoomOut */ kcg_bool ZoomOut,
  outC_ZoomLevel *outC)
{
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _25_SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool _24_SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _23_SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int _22_zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale21;
  /* ZoomLevel::SM1::Zoom1::_L2 */
  static kcg_int _L2_SM1_Zoom1;
  /* ZoomLevel::SM1::Zoom1::_L1 */
  static tScale _L1_SM1_Zoom1;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _20_SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool _19_SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _18_SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int _17_zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale16;
  /* ZoomLevel::SM1::Zoom2::_L2 */
  static kcg_int _L2_SM1_Zoom2;
  /* ZoomLevel::SM1::Zoom2::_L1 */
  static tScale _L1_SM1_Zoom2;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _15_SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool _14_SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _13_SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int _12_zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale11;
  /* ZoomLevel::SM1::Zoom4::_L2 */
  static kcg_int _L2_SM1_Zoom4;
  /* ZoomLevel::SM1::Zoom4::_L1 */
  static tScale _L1_SM1_Zoom4;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _10_SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool _9_SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _8_SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int _7_zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale6;
  /* ZoomLevel::SM1::Zoom3::_L2 */
  static kcg_int _L2_SM1_Zoom3;
  /* ZoomLevel::SM1::Zoom3::_L1 */
  static tScale _L1_SM1_Zoom3;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _5_SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool _4_SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _3_SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int _2_zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale1;
  /* ZoomLevel::SM1::Zoom6::_L2 */
  static kcg_int _L2_SM1_Zoom6;
  /* ZoomLevel::SM1::Zoom6::_L1 */
  static tScale _L1_SM1_Zoom6;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 SM1_fired;
  /* ZoomLevel::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 SM1_state_nxt;
  /* ZoomLevel::zoomlevel */
  static kcg_int zoomlevel;
  /* ZoomLevel::Scale */
  static tScale Scale;
  /* ZoomLevel::SM1::Zoom5::_L2 */
  static kcg_int _L2_SM1_Zoom5;
  /* ZoomLevel::SM1::Zoom5::_L1 */
  static tScale _L1_SM1_Zoom5;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _40_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool _39_SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _38_SM1_state_act;
  /* ZoomLevel::SM1::Zoom1 */
  static kcg_bool br_1_guard_SM1_Zoom1;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _37_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool _36_SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _35_SM1_state_act;
  /* ZoomLevel::SM1::Zoom2 */
  static kcg_bool br_2_guard_SM1_Zoom2;
  /* ZoomLevel::SM1::Zoom2 */
  static kcg_bool br_1_guard_SM1_Zoom2;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _34_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool _33_SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _32_SM1_state_act;
  /* ZoomLevel::SM1::Zoom4 */
  static kcg_bool br_2_guard_SM1_Zoom4;
  /* ZoomLevel::SM1::Zoom4 */
  static kcg_bool br_1_guard_SM1_Zoom4;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _31_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool _30_SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _29_SM1_state_act;
  /* ZoomLevel::SM1::Zoom3 */
  static kcg_bool br_2_guard_SM1_Zoom3;
  /* ZoomLevel::SM1::Zoom3 */
  static kcg_bool br_1_guard_SM1_Zoom3;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _28_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool _27_SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _26_SM1_state_act;
  /* ZoomLevel::SM1::Zoom6 */
  static kcg_bool br_1_guard_SM1_Zoom6;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static kcg_bool SM1_reset_act;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 SM1_state_act;
  /* ZoomLevel::SM1::Zoom5 */
  static kcg_bool br_2_guard_SM1_Zoom5;
  /* ZoomLevel::SM1::Zoom5 */
  static kcg_bool br_1_guard_SM1_Zoom5;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 SM1_state_sel;
  /* ZoomLevel::SM1 */
  static SSM_ST_SM1 _43_SM1_state_act;
  /* ZoomLevel::SM1 */
  static kcg_bool SM1_reset_sel;
  /* ZoomLevel::SM1 */
  static kcg_bool SM1_reset_prv;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _42_SM1_fired_strong;
  /* ZoomLevel::SM1 */
  static SSM_TR_SM1 _41_SM1_fired;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_Zoom3_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Zoom1_SM1 :
      br_1_guard_SM1_Zoom1 = ZoomIn;
      if (br_1_guard_SM1_Zoom1) {
        _38_SM1_state_act = SSM_st_Zoom2_SM1;
      }
      else {
        _38_SM1_state_act = SSM_st_Zoom1_SM1;
      }
      _43_SM1_state_act = _38_SM1_state_act;
      _39_SM1_reset_act = br_1_guard_SM1_Zoom1;
      outC->SM1_reset_act = _39_SM1_reset_act;
      if (br_1_guard_SM1_Zoom1) {
        _40_SM1_fired_strong = SSM_TR_Zoom1_1_SM1;
      }
      else {
        _40_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = _40_SM1_fired_strong;
      break;
    case SSM_st_Zoom2_SM1 :
      br_1_guard_SM1_Zoom2 = ZoomIn;
      br_2_guard_SM1_Zoom2 = ZoomOut;
      if (br_1_guard_SM1_Zoom2) {
        _35_SM1_state_act = SSM_st_Zoom3_SM1;
      }
      else if (br_2_guard_SM1_Zoom2) {
        _35_SM1_state_act = SSM_st_Zoom1_SM1;
      }
      else {
        _35_SM1_state_act = SSM_st_Zoom2_SM1;
      }
      _43_SM1_state_act = _35_SM1_state_act;
      if (br_1_guard_SM1_Zoom2) {
        _36_SM1_reset_act = kcg_true;
      }
      else {
        _36_SM1_reset_act = br_2_guard_SM1_Zoom2;
      }
      outC->SM1_reset_act = _36_SM1_reset_act;
      if (br_1_guard_SM1_Zoom2) {
        _37_SM1_fired_strong = SSM_TR_Zoom2_1_SM1;
      }
      else if (br_2_guard_SM1_Zoom2) {
        _37_SM1_fired_strong = SSM_TR_Zoom2_2_SM1;
      }
      else {
        _37_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = _37_SM1_fired_strong;
      break;
    case SSM_st_Zoom4_SM1 :
      br_1_guard_SM1_Zoom4 = ZoomOut;
      br_2_guard_SM1_Zoom4 = ZoomIn;
      if (br_1_guard_SM1_Zoom4) {
        _32_SM1_state_act = SSM_st_Zoom3_SM1;
      }
      else if (br_2_guard_SM1_Zoom4) {
        _32_SM1_state_act = SSM_st_Zoom5_SM1;
      }
      else {
        _32_SM1_state_act = SSM_st_Zoom4_SM1;
      }
      _43_SM1_state_act = _32_SM1_state_act;
      if (br_1_guard_SM1_Zoom4) {
        _33_SM1_reset_act = kcg_true;
      }
      else {
        _33_SM1_reset_act = br_2_guard_SM1_Zoom4;
      }
      outC->SM1_reset_act = _33_SM1_reset_act;
      if (br_1_guard_SM1_Zoom4) {
        _34_SM1_fired_strong = SSM_TR_Zoom4_1_SM1;
      }
      else if (br_2_guard_SM1_Zoom4) {
        _34_SM1_fired_strong = SSM_TR_Zoom4_2_SM1;
      }
      else {
        _34_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = _34_SM1_fired_strong;
      break;
    case SSM_st_Zoom3_SM1 :
      br_1_guard_SM1_Zoom3 = ZoomIn;
      br_2_guard_SM1_Zoom3 = ZoomOut;
      if (br_1_guard_SM1_Zoom3) {
        _29_SM1_state_act = SSM_st_Zoom4_SM1;
      }
      else if (br_2_guard_SM1_Zoom3) {
        _29_SM1_state_act = SSM_st_Zoom2_SM1;
      }
      else {
        _29_SM1_state_act = SSM_st_Zoom3_SM1;
      }
      _43_SM1_state_act = _29_SM1_state_act;
      if (br_1_guard_SM1_Zoom3) {
        _30_SM1_reset_act = kcg_true;
      }
      else {
        _30_SM1_reset_act = br_2_guard_SM1_Zoom3;
      }
      outC->SM1_reset_act = _30_SM1_reset_act;
      if (br_1_guard_SM1_Zoom3) {
        _31_SM1_fired_strong = SSM_TR_Zoom3_1_SM1;
      }
      else if (br_2_guard_SM1_Zoom3) {
        _31_SM1_fired_strong = SSM_TR_Zoom3_2_SM1;
      }
      else {
        _31_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = _31_SM1_fired_strong;
      break;
    case SSM_st_Zoom6_SM1 :
      br_1_guard_SM1_Zoom6 = ZoomOut;
      if (br_1_guard_SM1_Zoom6) {
        _26_SM1_state_act = SSM_st_Zoom5_SM1;
      }
      else {
        _26_SM1_state_act = SSM_st_Zoom6_SM1;
      }
      _43_SM1_state_act = _26_SM1_state_act;
      _27_SM1_reset_act = br_1_guard_SM1_Zoom6;
      outC->SM1_reset_act = _27_SM1_reset_act;
      if (br_1_guard_SM1_Zoom6) {
        _28_SM1_fired_strong = SSM_TR_Zoom6_1_SM1;
      }
      else {
        _28_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = _28_SM1_fired_strong;
      break;
    case SSM_st_Zoom5_SM1 :
      br_1_guard_SM1_Zoom5 = ZoomIn;
      br_2_guard_SM1_Zoom5 = ZoomOut;
      if (br_1_guard_SM1_Zoom5) {
        SM1_state_act = SSM_st_Zoom6_SM1;
      }
      else if (br_2_guard_SM1_Zoom5) {
        SM1_state_act = SSM_st_Zoom4_SM1;
      }
      else {
        SM1_state_act = SSM_st_Zoom5_SM1;
      }
      _43_SM1_state_act = SM1_state_act;
      if (br_1_guard_SM1_Zoom5) {
        SM1_reset_act = kcg_true;
      }
      else {
        SM1_reset_act = br_2_guard_SM1_Zoom5;
      }
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_Zoom5) {
        SM1_fired_strong = SSM_TR_Zoom5_1_SM1;
      }
      else if (br_2_guard_SM1_Zoom5) {
        SM1_fired_strong = SSM_TR_Zoom5_2_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _42_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_43_SM1_state_act) {
    case SSM_st_Zoom1_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom1, (tScale *) &Scales[5]);
      kcg_copy_tScale(&Scale21, &_L1_SM1_Zoom1);
      kcg_copy_tScale(&outC->Scale, &Scale21);
      _L2_SM1_Zoom1 = 5;
      _22_zoomlevel = _L2_SM1_Zoom1;
      outC->zoomlevel = _22_zoomlevel;
      _23_SM1_state_nxt = SSM_st_Zoom1_SM1;
      outC->SM1_state_nxt = _23_SM1_state_nxt;
      _24_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _24_SM1_reset_nxt;
      _25_SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = _25_SM1_fired;
      break;
    case SSM_st_Zoom2_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom2, (tScale *) &Scales[4]);
      kcg_copy_tScale(&Scale16, &_L1_SM1_Zoom2);
      kcg_copy_tScale(&outC->Scale, &Scale16);
      _L2_SM1_Zoom2 = 4;
      _17_zoomlevel = _L2_SM1_Zoom2;
      outC->zoomlevel = _17_zoomlevel;
      _18_SM1_state_nxt = SSM_st_Zoom2_SM1;
      outC->SM1_state_nxt = _18_SM1_state_nxt;
      _19_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _19_SM1_reset_nxt;
      _20_SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = _20_SM1_fired;
      break;
    case SSM_st_Zoom4_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom4, (tScale *) &Scales[2]);
      kcg_copy_tScale(&Scale11, &_L1_SM1_Zoom4);
      kcg_copy_tScale(&outC->Scale, &Scale11);
      _L2_SM1_Zoom4 = 2;
      _12_zoomlevel = _L2_SM1_Zoom4;
      outC->zoomlevel = _12_zoomlevel;
      _13_SM1_state_nxt = SSM_st_Zoom4_SM1;
      outC->SM1_state_nxt = _13_SM1_state_nxt;
      _14_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _14_SM1_reset_nxt;
      _15_SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = _15_SM1_fired;
      break;
    case SSM_st_Zoom3_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom3, (tScale *) &Scales[3]);
      kcg_copy_tScale(&Scale6, &_L1_SM1_Zoom3);
      kcg_copy_tScale(&outC->Scale, &Scale6);
      _L2_SM1_Zoom3 = 3;
      _7_zoomlevel = _L2_SM1_Zoom3;
      outC->zoomlevel = _7_zoomlevel;
      _8_SM1_state_nxt = SSM_st_Zoom3_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      _9_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      _10_SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_Zoom6_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom6, (tScale *) &Scales[0]);
      kcg_copy_tScale(&Scale1, &_L1_SM1_Zoom6);
      kcg_copy_tScale(&outC->Scale, &Scale1);
      _L2_SM1_Zoom6 = 0;
      _2_zoomlevel = _L2_SM1_Zoom6;
      outC->zoomlevel = _2_zoomlevel;
      _3_SM1_state_nxt = SSM_st_Zoom6_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      _4_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      _5_SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = _5_SM1_fired;
      break;
    case SSM_st_Zoom5_SM1 :
      kcg_copy_tScale(&_L1_SM1_Zoom5, (tScale *) &Scales[1]);
      kcg_copy_tScale(&Scale, &_L1_SM1_Zoom5);
      kcg_copy_tScale(&outC->Scale, &Scale);
      _L2_SM1_Zoom5 = 1;
      zoomlevel = _L2_SM1_Zoom5;
      outC->zoomlevel = zoomlevel;
      SM1_state_nxt = SSM_st_Zoom5_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _42_SM1_fired_strong;
      _41_SM1_fired = SM1_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ZoomLevel.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

