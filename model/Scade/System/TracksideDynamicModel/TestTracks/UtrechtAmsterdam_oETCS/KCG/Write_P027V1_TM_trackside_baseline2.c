/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside_baseline2::Write_P027V1::Error */kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P027V1::PacketsOut */CompressedPackets_T_Common_Types_Pkg *PacketsOut)
{
  static struct__30860 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_trackside_baseline2::Write_P027V1::_L21 */
  static kcg_int _L21;
  /* TM_trackside_baseline2::Write_P027V1::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside_baseline2::Write_P027V1::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  /* TM_trackside_baseline2::Write_P027V1::_L45 */
  static P027V1_OBU_sectionlist_int_T_TM_baseline2 _L45;
  /* TM_trackside_baseline2::Write_P027V1::_L46 */
  static kcg_int _L46;
  /* TM_trackside_baseline2::Write_P027V1::_L56 */
  static kcg_int _L56;
  
  *Error = kcg_false;
  /* 1 */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    Packet27V1,
    &_L43,
    &_L44,
    &_L45,
    &_L46,
    &_L56);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*PacketsOut).PacketHeaders,
    &_L21,
    &i);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    i,
    &(*Packets).PacketData,
    &_L44,
    &(*PacketsOut).PacketData);
  for (i = 0; i < 33; i++) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp1, PacketsOut);
    /* 1 */
    C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
      i,
      &tmp1,
      &_L45[i],
      _L46,
      _L56,
      &tmp,
      PacketsOut);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

