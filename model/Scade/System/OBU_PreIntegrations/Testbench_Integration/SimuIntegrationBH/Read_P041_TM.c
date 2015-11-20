/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P041_TM.h"

/* TM::Read_P041 */
void Read_P041_TM(
  /* TM::Read_P041::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P041::received */ kcg_bool *received,
  /* TM::Read_P041::P041_OBU_out */ P041_OBU_T_TM *P041_OBU_out)
{
  /* TM::Read_P041::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* TM::Read_P041::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* TM::Read_P041::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P041::_L166 */
  static P041_OBU_T_TM _L166;
  /* TM::Read_P041::_L167 */
  static kcg_bool _L167;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L6,
    41032000,
    kcg_false,
    kcg_false,
    &_L5,
    &_L30,
    &_L167);
  /* 1 */ C_P041_compr_onboard_TM_conversions(&_L5, &_L30, &_L166);
  kcg_copy_P041_OBU_T_TM(P041_OBU_out, &_L166);
  *received = _L167;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P041_TM.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

