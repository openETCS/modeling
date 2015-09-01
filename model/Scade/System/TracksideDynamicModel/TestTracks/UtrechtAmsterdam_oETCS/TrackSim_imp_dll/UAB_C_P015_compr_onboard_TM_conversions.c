/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P015_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P015_compr_onboard */
void UAB_C_P015_compr_onboard_TM_conversions(
  /* TM_conversions::C_P015_compr_onboard::PacketData */UAB_CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P015_compr_onboard::Metadata_Element */UAB_MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P015_compr_onboard::P015_onboard */UAB_P015_OBU_T_TM *P015_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_2;
  /* TM_conversions::C_P015_compr_onboard::nid_packet_ok */
  static kcg_bool nid_packet_ok;
  /* TM_conversions::C_P015_compr_onboard::_L138 */
  static UAB_array_int_15 _L138;
  /* TM_conversions::C_P015_compr_onboard::_L125 */
  static UAB_array_int_6 _L125;
  
  (*P015_onboard).n_iter = (*PacketData)[21];
  UAB_kcg_copy_array_int_15(&_L138, (UAB_array_int_15 *) &(*PacketData)[6]);
  UAB_kcg_copy_array_int_6(&_L125, (UAB_array_int_6 *) &(*PacketData)[0]);
  nid_packet_ok = 15 == _L125[0];
  (*P015_onboard).valid = nid_packet_ok;
  else_clock_2_IfBlock1 = _L125[1] == UAB_INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_2 = _L125[3] == UAB_INT_Q_SCALE_10cm_TM_conversions;
  if (else_clock_2_IfBlock1) {
    (*P015_onboard).q_dir = UAB_ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_2_IfBlock1 = _L125[1] == UAB_INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_2_IfBlock1) {
      (*P015_onboard).q_dir = UAB_ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _1_else_clock_2_IfBlock1 = _L125[1] == UAB_INT_Q_DIR_both_TM_conversions;
      if (_1_else_clock_2_IfBlock1) {
        (*P015_onboard).q_dir = UAB_ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P015_onboard).q_dir = UAB_ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_2) {
    (*P015_onboard).q_scale = UAB_ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_2_IfBlock1 = _L125[3] == UAB_INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_2_IfBlock1) {
      (*P015_onboard).q_scale = UAB_ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_2_IfBlock1 = _L125[3] == UAB_INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_2_IfBlock1) {
        (*P015_onboard).q_scale = UAB_ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P015_onboard).q_scale = UAB_ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P015_onboard).v_loa = /* 2 */
    UAB_CAST_Int_to_V_LOA_TM_conversions(_L125[4]);
  (*P015_onboard).t_loa = /* 2 */
    UAB_CAST_Int_to_T_LOA_TM_conversions(_L125[5]);
  /* 1 */
  UAB_C_P015_unflatten_sections_TM_lib_internal(
    nid_packet_ok,
    (*PacketData)[21],
    (UAB_P015_sections_array_flat_T_TM *) &(*PacketData)[22],
    &(*P015_onboard).sections);
  (*P015_onboard).l_endsection = /* 2 */
    UAB_CAST_Int_to_L_ENDSECTION_TM_conversions(_L138[0]);
  (*P015_onboard).q_sectiontimer = /* 2 */
    UAB_CAST_Int_to_Q_SECTIONTIMER_TM_conversions(_L138[1]);
  (*P015_onboard).t_sectiontimer = /* 1 */
    UAB_CAST_Int_to_T_SECTIONTIMER_TM_conversions(_L138[2]);
  (*P015_onboard).d_sectiontimerstoploc = /* 2 */
    UAB_CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(_L138[3]);
  (*P015_onboard).q_endtimer = /* 2 */
    UAB_CAST_Int_to_Q_ENDTIMER_TM_conversions(_L138[4]);
  (*P015_onboard).t_endtimer = /* 2 */
    UAB_CAST_Int_to_T_ENDTIMER_TM_conversions(_L138[5]);
  (*P015_onboard).d_endtimerstartloc = /* 2 */
    UAB_CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(_L138[6]);
  (*P015_onboard).q_dangerpoint = /* 2 */
    UAB_CAST_Int_to_Q_DANGERPOINT_TM_conversions(_L138[7]);
  (*P015_onboard).d_dp = /* 2 */ UAB_CAST_Int_to_D_DP_TM_conversions(_L138[8]);
  (*P015_onboard).v_releasedp = /* 2 */
    UAB_CAST_Int_to_V_RELEASEDP_TM_conversions(_L138[9]);
  (*P015_onboard).q_overlap = /* 2 */
    UAB_CAST_Int_to_Q_OVERLAP_TM_conversions(_L138[10]);
  (*P015_onboard).d_startol = /* 2 */
    UAB_CAST_Int_to_D_STARTOL_TM_conversions(_L138[11]);
  (*P015_onboard).t_ol = /* 2 */ UAB_CAST_Int_to_T_OL_TM_conversions(_L138[12]);
  (*P015_onboard).d_ol = /* 2 */ UAB_CAST_Int_to_D_OL_TM_conversions(_L138[13]);
  (*P015_onboard).v_releaseol = /* 2 */
    UAB_CAST_Int_to_V_RELEASEOL_TM_conversions(_L138[14]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P015_compr_onboard_TM_conversions.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

