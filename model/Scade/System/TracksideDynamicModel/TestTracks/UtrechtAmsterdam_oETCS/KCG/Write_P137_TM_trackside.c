/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P137_TM_trackside.h"

/* TM_trackside::Write_P137 */
void Write_P137_TM_trackside(
  /* TM_trackside::Write_P137::Packet137 */P137_trackside_int_T_TM *Packet137,
  /* TM_trackside::Write_P137::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P137::Error */kcg_bool *Error,
  /* TM_trackside::Write_P137::RadioPacketsOut */CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_trackside::Write_P137::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P137::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P137::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside::Write_P137::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P137_tracksim_compr_TM_conversions(Packet137, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*RadioPacketsOut).PacketHeaders,
    &_L21,
    &_L22);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    _L22,
    &(*Packets).PacketData,
    &_L44,
    &(*RadioPacketsOut).PacketData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P137_TM_trackside.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

