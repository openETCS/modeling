/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P027V1_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P027V1 */
void Send_P027V1_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P027V1::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P027V1::P027 */P027V1_trackside_int_T_TM_baseline2 *P027,
  /* MessageLibBaseline2::Send_P027V1::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_trackside_baseline2::Write_P027V1::_L21 */
  static kcg_int _L21_1;
  /* TM_trackside_baseline2::Write_P027V1::_L22 */
  static kcg_int _L22_1;
  /* TM_trackside_baseline2::Write_P027V1::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44_1;
  /* TM_trackside_baseline2::Write_P027V1::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43_1;
  /* TM_trackside_baseline2::Write_P027V1::_L45 */
  static P027V1_OBU_sectionlist_int_T_TM_baseline2 _L45_1;
  /* TM_trackside_baseline2::Write_P027V1::_L46 */
  static kcg_int _L46_1;
  /* TM_trackside_baseline2::Write_P027V1::_L56 */
  static kcg_int _L56_1;
  
  if ((*P027).valid) {
    /* 1_1 */
    C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
      P027,
      &_L43_1,
      &_L44_1,
      &_L45_1,
      &_L46_1,
      &_L56_1);
    /* 1_1 */
    SEND_WriteMessageHeader_TM_lib_internal(
      &(*B_data_in).PacketHeaders,
      &_L43_1,
      &(*B_data_out).PacketHeaders,
      &_L21_1,
      &_L22_1);
    /* 1_1 */
    SEND_MessageData_TM_lib_internal(
      _L21_1,
      _L22_1,
      &(*B_data_in).PacketData,
      &_L44_1,
      &(*B_data_out).PacketData);
    for (i = 0; i < 33; i++) {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp1, B_data_out);
      /* 1_1 */
      C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
        i,
        &tmp1,
        &_L45_1[i],
        _L46_1,
        _L56_1,
        &tmp,
        B_data_out);
      if (!tmp) {
        break;
      }
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P027V1_MessageLibBaseline2.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

