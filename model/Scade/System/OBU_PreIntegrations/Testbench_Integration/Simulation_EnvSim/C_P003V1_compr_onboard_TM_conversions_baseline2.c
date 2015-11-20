/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_compr_onboard_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_compr_onboard */
void C_P003V1_compr_onboard_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L1 */
  static array_int_24 _L1;
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L22 */
  static kcg_bool _L22;
  
  kcg_copy_array_int_24(&_L1, (array_int_24 *) &(*PacketData)[0]);
  (*P003V1_onboard).n_iter = _L1[5];
  _L22 = _L1[0] == 3;
  (*P003V1_onboard).valid = _L22;
  else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1 = _L1[3] == INT_Q_SCALE_10cm_TM_conversions;
  if (else_clock_1_IfBlock1) {
    (*P003V1_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
      (*P003V1_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_both_TM_conversions;
      if (_1_else_clock_1_IfBlock1) {
        (*P003V1_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P003V1_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_1) {
    (*P003V1_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L1[3] == INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P003V1_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L1[3] == INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P003V1_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P003V1_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P003V1_onboard).d_validnv = /* 1 */
    CAST_Int_to_D_VALIDNV_TM_conversions(_L1[4]);
  /* 1 */
  C_P003V1_unflatten_sections_TM_lib_internal(
    _L22,
    _L1[5],
    (P003V1_OBU_sectionlist_int_T_TM_baseline2 *) &(*PacketData)[24],
    &(*P003V1_onboard).SECTIONS);
  (*P003V1_onboard).v_nvshunt = /* 1 */
    CAST_Int_to_V_NVSHUNT_TM_conversions(_L1[6]);
  (*P003V1_onboard).v_nvstff = /* 1 */
    CAST_Int_to_V_NVSTFF_TM_conversions(_L1[7]);
  (*P003V1_onboard).v_nvonsight = /* 1 */
    CAST_Int_to_V_NVONSIGHT_TM_conversions(_L1[8]);
  (*P003V1_onboard).v_nvunfit = /* 1 */
    CAST_Int_to_V_NVUNFIT_TM_conversions(_L1[9]);
  (*P003V1_onboard).v_nvrel = /* 1 */
    CAST_Int_to_V_NVREL_TM_conversions(_L1[10]);
  (*P003V1_onboard).d_nvroll = /* 1 */
    CAST_Int_to_D_NVROLL_TM_conversions(_L1[11]);
  (*P003V1_onboard).q_nvsbtsmperm = /* 1 */
    CAST_Int_to_Q_NVSBTSMPERM_TM_conversions(_L1[12]);
  (*P003V1_onboard).q_nvemrrls = /* 1 */
    CAST_Int_to_Q_NVEMRRLS_TM_conversions(_L1[13]);
  (*P003V1_onboard).v_nvallowovtrp = /* 1 */
    CAST_Int_to_V_NVALLOWOVTRP_TM_conversions(_L1[14]);
  (*P003V1_onboard).v_nvsopovtrp = /* 2 */
    CAST_Int_to_V_NVSUPOVTRP_TM_conversions(_L1[15]);
  (*P003V1_onboard).d_nvovtrp = /* 1 */
    CAST_Int_to_D_NVOVTRP_TM_conversions(_L1[16]);
  (*P003V1_onboard).t_nvovtrp = /* 1 */
    CAST_Int_to_T_NVOVTRP_TM_conversions(_L1[17]);
  (*P003V1_onboard).d_nvpotrp = /* 2 */
    CAST_Int_to_D_NVPOTRP_TM_conversions(_L1[18]);
  (*P003V1_onboard).m_nvcontact = /* 1 */
    CAST_Int_to_M_NVCONTACT_TM_conversions(_L1[19]);
  (*P003V1_onboard).t_nvcontact = /* 1 */
    CAST_Int_to_T_NVCONTACT_TM_conversions(_L1[20]);
  (*P003V1_onboard).m_nvderun = /* 1 */
    CAST_Int_to_M_NVDERUN_TM_conversions(_L1[21]);
  (*P003V1_onboard).d_nvstff = /* 1 */
    CAST_Int_to_D_NVSTFF_TM_conversions(_L1[22]);
  (*P003V1_onboard).q_nvdriver_adhes = /* 1 */
    CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions(_L1[23]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_compr_onboard_TM_conversions_baseline2.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

