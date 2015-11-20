/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ASP_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ASP */
void SP_ASP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ASP::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ASP::PacketsIn */ ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_ASP::ASP */ SSP_cat_t_TA_MRSP *ASP)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_ASP::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SpeedProfiles::SP_ASP::_L3 */
  static SSP_cat_t_TA_MRSP _L3;
  /* TA_SpeedProfiles::SP_ASP::_L4 */
  static kcg_bool _L4;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, PacketsIn);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L3, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(ASP, &_L3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L1);
  _L4 = reset;
  _1_noname = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ASP_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

