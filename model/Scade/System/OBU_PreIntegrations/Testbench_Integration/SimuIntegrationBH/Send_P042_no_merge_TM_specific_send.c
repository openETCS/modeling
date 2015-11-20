/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_no_merge_TM_specific_send.h"

/* TM_specific_send::Send_P042_no_merge */
void Send_P042_no_merge_TM_specific_send(
  /* TM_specific_send::Send_P042_no_merge::Packet42 */ P42_SessionManagement_T_Packet_Types_Pkg *Packet42,
  /* TM_specific_send::Send_P042_no_merge::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  static kcg_bool noname;
  /* TM_specific_send::Send_P042_no_merge::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* TM_specific_send::Send_P042_no_merge::_L1 */
  static kcg_bool _L1;
  /* TM_specific_send::Send_P042_no_merge::_L3 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L3;
  /* TM_specific_send::Send_P042_no_merge::_L5 */
  static P042_trackside_int_T_TM _L5;
  /* TM_specific_send::Send_P042_no_merge::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&_L3, Packet42);
  /* 1 */ C_P042_onboard_legacy_to_int_TM_conversions(&_L3, &_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L6,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_BaliseData_TM);
  /* 1 */ Write_P042_TM_trackside(&_L5, &_L6, &_L1, &_L2);
  noname = _L1;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(RadioPacketsOut, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P042_no_merge_TM_specific_send.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

