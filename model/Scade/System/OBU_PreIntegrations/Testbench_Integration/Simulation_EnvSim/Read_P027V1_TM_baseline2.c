/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_TM_baseline2.h"

/* TM_baseline2::Read_P027V1 */
void Read_P027V1_TM_baseline2(
  /* TM_baseline2::Read_P027V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1::received */kcg_bool *received,
  /* TM_baseline2::Read_P027V1::P027V1_out */P027V1_OBU_T_TM_baseline2 *P027V1_out)
{
  static kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_body::_L6 */
  static array_int_5 _L6_1;
  /* TM_baseline2::Read_P027V1::_L5 */
  static array_int_500 _L5;
  /* TM_baseline2::Read_P027V1::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM_baseline2::Read_P027V1::_L166 */
  static P027V1_OBU_body_enum_T_TM_baseline2 _L166;
  /* TM_baseline2::Read_P027V1::_L182 */
  static array__157177 _L182;
  /* TM_baseline2::Read_P027V1::_L184 */
  static kcg_int _L184;
  
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    NID_META_P027V1_body_TM_baseline2,
    kcg_true,
    kcg_true,
    &_L5,
    &_L30,
    received);
  _L166.valid = _L5[0] == 27;
  kcg_copy_array_int_5(&_L6_1, (array_int_5 *) &_L5[1]);
  for (i = 0; i < 33; i++) {
    /* 1 */
    Read_P027V1_sections_TM_baseline2(
      i,
      Message_IN,
      _L6_1[3],
      _L6_1[4],
      &else_clock_1_1_IfBlock1,
      &_L182[i]);
    _L184 = i + 1;
    if (!else_clock_1_1_IfBlock1) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L184; i < 33; i++) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &_L182[i],
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &(*P027V1_out).sections,
    &_L182);
  else_clock_1_1_IfBlock1 = _L6_1[0] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1_1 = _L6_1[2] == INT_Q_SCALE_10cm_TM_conversions;
  if (else_clock_1_1_IfBlock1) {
    _L166.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_1_1_IfBlock1 = _L6_1[0] == INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_1_1_IfBlock1) {
      _L166.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _1_else_clock_1_1_IfBlock1 = _L6_1[0] == INT_Q_DIR_both_TM_conversions;
      if (_1_else_clock_1_1_IfBlock1) {
        _L166.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        _L166.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_1_1) {
    _L166.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_1_IfBlock1 = _L6_1[2] == INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_1_IfBlock1) {
      _L166.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_1_IfBlock1 = _L6_1[2] == INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_1_IfBlock1) {
        _L166.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        _L166.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P027V1_out).valid = _L166.valid;
  (*P027V1_out).q_dir = _L166.q_dir;
  (*P027V1_out).q_scale = _L166.q_scale;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_TM_baseline2.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

