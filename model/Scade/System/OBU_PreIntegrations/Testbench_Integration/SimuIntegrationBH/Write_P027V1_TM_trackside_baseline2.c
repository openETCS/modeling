/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */ P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside_baseline2::Write_P027V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P027V1::PacketsOut */ CompressedPackets_T_Common_Types_Pkg *PacketsOut)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TM_trackside_baseline2::Write_P027V1 */
  static CompressedPackets_T_Common_Types_Pkg acc;
  /* TM_trackside_baseline2::Write_P027V1 */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_trackside_baseline2::Write_P027V1::_L1 */
  static P027V1_trackside_int_T_TM_baseline2 _L1;
  /* TM_trackside_baseline2::Write_P027V1::_L4 */
  static Metadata_T_Common_Types_Pkg _L4;
  /* TM_trackside_baseline2::Write_P027V1::_L10 */
  static CompressedPacketData_T_Common_Types_Pkg _L10;
  /* TM_trackside_baseline2::Write_P027V1::_L18 */
  static kcg_bool _L18;
  /* TM_trackside_baseline2::Write_P027V1::_L21 */
  static kcg_int _L21;
  /* TM_trackside_baseline2::Write_P027V1::_L22 */
  static kcg_int _L22;
  /* TM_trackside_baseline2::Write_P027V1::_L39 */
  static CompressedPackets_T_Common_Types_Pkg _L39;
  /* TM_trackside_baseline2::Write_P027V1::_L40 */
  static CompressedPackets_T_Common_Types_Pkg _L40;
  /* TM_trackside_baseline2::Write_P027V1::_L42 */
  static CompressedPacketData_T_Common_Types_Pkg _L42;
  /* TM_trackside_baseline2::Write_P027V1::_L41 */
  static Metadata_T_Common_Types_Pkg _L41;
  /* TM_trackside_baseline2::Write_P027V1::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside_baseline2::Write_P027V1::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  /* TM_trackside_baseline2::Write_P027V1::_L45 */
  static P027V1_OBU_sectionlist_int_T_TM_baseline2 _L45;
  /* TM_trackside_baseline2::Write_P027V1::_L46 */
  static kcg_int _L46;
  /* TM_trackside_baseline2::Write_P027V1::_L50 */
  static kcg_int _L50;
  /* TM_trackside_baseline2::Write_P027V1::_L51 */
  static CompressedPackets_T_Common_Types_Pkg _L51;
  /* TM_trackside_baseline2::Write_P027V1::_L52 */
  static kcg_bool _L52;
  /* TM_trackside_baseline2::Write_P027V1::_L54 */
  static array_int_33 _L54;
  /* TM_trackside_baseline2::Write_P027V1::_L55 */
  static array_int_33 _L55;
  /* TM_trackside_baseline2::Write_P027V1::_L56 */
  static kcg_int _L56;
  /* TM_trackside_baseline2::Write_P027V1::_L59 */
  static Q_DIR _L59;
  /* TM_trackside_baseline2::Write_P027V1::_L60 */
  static array_170543 _L60;
  
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&_L1, Packet27V1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L41, &_L40.PacketHeaders);
  /* 1 */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    &_L1,
    &_L43,
    &_L44,
    &_L45,
    &_L46,
    &_L56,
    &_L59);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(&_L41, &_L43, &_L4, &_L21, &_L22);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L42, &_L40.PacketData);
  /* 1 */ SEND_MessageData_TM_lib_internal(_L21, _L22, &_L42, &_L44, &_L10);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L39.PacketHeaders, &_L4);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L39.PacketData, &_L10);
  /* pow */ for (i3 = 0; i3 < 33; i3++) {
    _L54[i3] = _L46;
  }
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    _L55[i2] = _L56;
  }
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    _L60[i1] = _L59;
  }
  _L52 = kcg_true;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L51, &_L39);
  if (_L52) {
    for (i = 0; i < 33; i++) {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&acc, &_L51);
      /* 1 */
      C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
        i,
        &acc,
        &_L45[i],
        _L54[i],
        _L55[i],
        _L60[i],
        &cond_iterw,
        &_L51);
      _L50 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L50 = 0;
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(PacketsOut, &_L51);
  _L18 = kcg_false;
  *Error = _L18;
  noname = _L50;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

