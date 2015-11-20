/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_STM_MaxSpeed */
void SP_STM_MaxSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::PacketsIn */ ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::STM_MaxSpeed */ SSP_cat_t_TA_MRSP *STM_MaxSpeed)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::_L2 */
  static SSP_cat_t_TA_MRSP _L2;
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, PacketsIn);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L2, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(STM_MaxSpeed, &_L2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L1);
  _L3 = reset;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_STM_MaxSpeed_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

