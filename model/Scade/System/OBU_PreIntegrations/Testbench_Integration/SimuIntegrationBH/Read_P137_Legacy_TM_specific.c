/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

/* TM_specific::Read_P137_Legacy */
void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P137_Legacy::P137_legacy_out */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_legacy_out)
{
  static kcg_bool noname;
  /* TM_specific::Read_P137_Legacy::_L2 */
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _L2;
  /* TM_specific::Read_P137_Legacy::_L1 */
  static kcg_bool _L1;
  /* TM_specific::Read_P137_Legacy::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, Message_IN);
  /* 1 */ Read_P137_TM(&_L3, &_L1, &_L2);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    P137_legacy_out,
    &_L2);
  noname = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_Legacy_TM_specific.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

