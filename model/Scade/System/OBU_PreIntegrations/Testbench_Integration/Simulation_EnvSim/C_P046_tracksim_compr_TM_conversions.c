/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P046_tracksim_compr */
void C_P046_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P046_tracksim_compr::P046_from_track */P046_trackside_int_T_TM *P046_from_track,
  /* TM_conversions::C_P046_tracksim_compr::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P046_tracksim_compr::P005_compressed */CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  static array__155123 tmp1;
  static nid_packet_meta_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */
  static array_int_430 _L209;
  
  (*Header).valid = (*P046_from_track).valid;
  (*Header).startAddress = 0;
  (&(&(&(*P005_compressed)[0])[0])[0])[0] = (*P046_from_track).NID_PACKET;
  (&(&(&(*P005_compressed)[0])[0])[0])[1] = (*P046_from_track).Q_DIR;
  (&(&(&(*P005_compressed)[0])[0])[0])[2] = (*P046_from_track).L_PACKET;
  (&tmp1[0])[0].M_LEVELTR = (*P046_from_track).M_LEVELTR;
  (&tmp1[0])[0].NID_NTC = (*P046_from_track).NID_NTC;
  (&(&(&(*P005_compressed)[0])[0])[3])[0] = (*P046_from_track).N_ITER;
  for (tmp = 0; tmp < 430; tmp++) {
    _L209[tmp] = 0;
  }
  kcg_copy_P046_trackide_sectionlist_T_TM(
    &tmp1[1],
    &(*P046_from_track).SECTIONS);
  /* 1 */
  C_P046_flatten_sections_TM_lib_internal(
    &tmp1,
    (P046_sections_array_flat_T_TM *) &(&(*P005_compressed)[0])[4]);
  kcg_copy_array_int_430(&(*P005_compressed)[70], &_L209);
  IfBlock1_clock_1 = (*P046_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  tmp = /* 2 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P046_from_track).NID_PACKET,
      (*P046_from_track).Q_DIR,
      0,
      46,
      INT_M_VERSION_2_0_TM);
  (*Header).nid_packet = tmp;
  if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = (*P046_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P046_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*Header).endAddress = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      (*P046_from_track).N_ITER,
      3 + 1 + 2,
      2) - 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_tracksim_compr_TM_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

