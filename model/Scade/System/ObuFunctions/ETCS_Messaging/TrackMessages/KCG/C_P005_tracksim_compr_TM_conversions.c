/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-17T13:45:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_tracksim_compr_TM_conversions.h"

void C_P005_tracksim_compr_reset_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC)
{
}

/* TM_conversions::C_P005_tracksim_compr */
void C_P005_tracksim_compr_TM_conversions(
  inC_C_P005_tracksim_compr_TM_conversions *inC,
  outC_C_P005_tracksim_compr_TM_conversions *outC)
{
  array__633 tmp1;
  nid_packet_meta_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::C_P005_tracksim_compr::_L209 */ array_int_264 _L209;
  
  outC->Header.valid = inC->P005_from_track.valid;
  outC->Header.startAddress = 0;
  (&(&(&outC->P005_compressed[0])[0])[0])[0] = inC->P005_from_track.NID_PACKET;
  (&(&(&outC->P005_compressed[0])[0])[0])[1] = inC->P005_from_track.Q_DIR;
  (&(&(&outC->P005_compressed[0])[0])[0])[2] = inC->P005_from_track.L_PACKET;
  (&(&(&outC->P005_compressed[0])[0])[0])[3] = inC->P005_from_track.Q_SCALE;
  (&tmp1[0])[0].D_LINK = inC->P005_from_track.D_LINK;
  (&tmp1[0])[0].Q_NEWCOUNTRY = inC->P005_from_track.Q_NEWCOUNTRY;
  (&tmp1[0])[0].NID_C = inC->P005_from_track.NID_C;
  (&tmp1[0])[0].NID_BG = inC->P005_from_track.NID_BG;
  (&tmp1[0])[0].Q_LINKORIENTATION = inC->P005_from_track.Q_LINKORIENTATION;
  (&tmp1[0])[0].Q_LINKREACTION = inC->P005_from_track.Q_LINKREACTION;
  (&tmp1[0])[0].Q_LOCACC = inC->P005_from_track.Q_LOCACC;
  (&(&(&outC->P005_compressed[0])[0])[4])[0] = inC->P005_from_track.N_ITER;
  for (tmp = 0; tmp < 264; tmp++) {
    _L209[tmp] = 0;
  }
  kcg_copy_P005_trackide_sectionlist_T_TM(
    &tmp1[1],
    &inC->P005_from_track.SECTIONS);
  /* 1 */
  C_P005_flatten_sections_TM_lib_internal(
    &tmp1,
    (P005_sections_array_flat_T_TM *) &(&outC->P005_compressed[0])[5]);
  kcg_copy_array_int_264(&outC->P005_compressed[236], &_L209);
  IfBlock1_clock_1 = inC->P005_from_track.Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
  }
  else {
    _2_else_clock_1_IfBlock1 = inC->P005_from_track.Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
    }
    else {
      else_clock_1_IfBlock1 = inC->P005_from_track.Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
    }
  }
  tmp = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      inC->P005_from_track.NID_PACKET,
      inC->P005_from_track.Q_DIR,
      0,
      5,
      INT_M_VERSION_2_0_TM);
  outC->Header.nid_packet = tmp;
  if (IfBlock1_clock_1) {
    outC->Header.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else if (_2_else_clock_1_IfBlock1) {
    outC->Header.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
  }
  else if (else_clock_1_IfBlock1) {
    outC->Header.q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
  else {
    outC->Header.q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
  outC->Header.endAddress = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      inC->P005_from_track.N_ITER,
      4 + 1 + 7,
      7) - 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_tracksim_compr_TM_conversions.c
** Generation date: 2015-08-17T13:45:16
*************************************************************$ */

