/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P021_TM.h"

/* TM::Read_P021 */
void Read_P021_TM(
  /* TM::Read_P021::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P021::received */ kcg_bool *received,
  /* TM::Read_P021::P021_OBU_out */ P021_OBU_T_TM *P021_OBU_out)
{
  /* TM::Read_P021::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* TM::Read_P021::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* TM::Read_P021::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM::Read_P021::_L166 */
  static P021_OBU_T_TM _L166;
  /* TM::Read_P021::_L167 */
  static kcg_bool _L167;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L6,
    21032000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    &_L167);
  /* 1 */ C_P021_compr_onboard_TM_conversions(&_L5, &_L30, &_L166);
  kcg_copy_P021_OBU_T_TM(P021_OBU_out, &_L166);
  *received = _L167;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P021_TM.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

