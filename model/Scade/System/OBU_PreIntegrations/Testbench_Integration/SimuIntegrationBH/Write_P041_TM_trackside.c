/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P041_TM_trackside.h"

/* TM_trackside::Write_P041 */
void Write_P041_TM_trackside(
  /* TM_trackside::Write_P041::Packet41 */ P041_trackside_int_T_TM *Packet41,
  /* TM_trackside::Write_P041::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P041::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P041::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_trackside::Write_P041::_L1 */
  static P041_trackside_int_T_TM _L1;
  /* TM_trackside::Write_P041::_L4 */
  static Metadata_T_Common_Types_Pkg _L4;
  /* TM_trackside::Write_P041::_L10 */
  static CompressedPacketData_T_Common_Types_Pkg _L10;
  /* TM_trackside::Write_P041::_L18 */
  static kcg_bool _L18;
  /* TM_trackside::Write_P041::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P041::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P041::_L39 */
  static CompressedPackets_T_Common_Types_Pkg _L39;
  /* TM_trackside::Write_P041::_L40 */
  static CompressedPackets_T_Common_Types_Pkg _L40;
  /* TM_trackside::Write_P041::_L42 */
  static CompressedPacketData_T_Common_Types_Pkg _L42;
  /* TM_trackside::Write_P041::_L41 */
  static Metadata_T_Common_Types_Pkg _L41;
  /* TM_trackside::Write_P041::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside::Write_P041::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  
  kcg_copy_P041_trackside_int_T_TM(&_L1, Packet41);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L40, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L41, &_L40.PacketHeaders);
  /* 1 */ C_P041_tracksim_compr_TM_conversions(&_L1, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &_L41,
    &_L43,
    &_L4,
    &_L21,
    &_L22);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L42, &_L40.PacketData);
  /* 1 */ SEND_MessageData_TM_lib_internal(_L21, _L22, &_L42, &_L44, &_L10);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L39.PacketHeaders, &_L4);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L39.PacketData, &_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(RadioPacketsOut, &_L39);
  _L18 = kcg_false;
  *Error = _L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P041_TM_trackside.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

