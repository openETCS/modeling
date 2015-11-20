/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P045_TM.h"

/* TM::Read_P045 */
void Read_P045_TM(
  /* TM::Read_P045::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P045::received */ kcg_bool *received,
  /* TM::Read_P045::P045_OBU_out */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *P045_OBU_out)
{
  /* TM::Read_P045::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* TM::Read_P045::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* TM::Read_P045::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P045::_L166 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L166;
  /* TM::Read_P045::_L167 */
  static kcg_bool _L167;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L6,
    45032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    &_L167);
  /* 1 */ C_P045_compr_onboard_TM_conversions(&_L5, &_L30, &_L166);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    P045_OBU_out,
    &_L166);
  *received = _L167;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P045_TM.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

