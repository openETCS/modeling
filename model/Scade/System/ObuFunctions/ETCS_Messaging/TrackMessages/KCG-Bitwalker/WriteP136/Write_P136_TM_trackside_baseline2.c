/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:10:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P136_TM_trackside_baseline2.h"

void Write_P136_reset_TM_trackside_baseline2(
  outC_Write_P136_TM_trackside_baseline2 *outC)
{
}

/* TM_trackside_baseline2::Write_P136 */
void Write_P136_TM_trackside_baseline2(
  inC_Write_P136_TM_trackside_baseline2 *inC,
  outC_Write_P136_TM_trackside_baseline2 *outC)
{
  /* TM_trackside_baseline2::Write_P136::_L21 */ kcg_int _L21;
  /* TM_trackside_baseline2::Write_P136::_L22 */ kcg_int _L22;
  /* TM_trackside_baseline2::Write_P136::_L44 */ CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside_baseline2::Write_P136::_L43 */ MetadataElement_T_Common_Types_Pkg _L43;
  
  /* 1 */ C_P136_tracksim_compr_TM_conversions(&inC->Packet136, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &inC->Packets.PacketHeaders,
    &_L43,
    &outC->RadioPacketsOut.PacketHeaders,
    &_L21,
    &_L22);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    _L22,
    &inC->Packets.PacketData,
    &_L44,
    &outC->RadioPacketsOut.PacketData);
  outC->Error = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P136_TM_trackside_baseline2.c
** Generation date: 2015-08-21T16:10:26
*************************************************************$ */

