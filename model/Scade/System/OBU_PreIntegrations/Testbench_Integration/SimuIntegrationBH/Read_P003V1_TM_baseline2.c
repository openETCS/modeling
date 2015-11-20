/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P003V1_TM_baseline2.h"

/* TM_baseline2::Read_P003V1 */
void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P003V1::received */ kcg_bool *received,
  /* TM_baseline2::Read_P003V1::P003V1_OBU_out */ P003V1_OBU_T_TM_baseline2 *P003V1_OBU_out)
{
  /* TM_baseline2::Read_P003V1::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* TM_baseline2::Read_P003V1::_L166 */
  static P003V1_OBU_T_TM_baseline2 _L166;
  /* TM_baseline2::Read_P003V1::_L30 */
  static MetadataElement_T_Common_Types_Pkg _L30;
  /* TM_baseline2::Read_P003V1::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* TM_baseline2::Read_P003V1::_L167 */
  static kcg_bool _L167;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L6,
    3016000,
    kcg_true,
    kcg_false,
    &_L5,
    &_L30,
    &_L167);
  /* 1 */ C_P003V1_compr_onboard_TM_conversions_baseline2(&_L5, &_L30, &_L166);
  kcg_copy_P003V1_OBU_T_TM_baseline2(P003V1_OBU_out, &_L166);
  *received = _L167;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P003V1_TM_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

