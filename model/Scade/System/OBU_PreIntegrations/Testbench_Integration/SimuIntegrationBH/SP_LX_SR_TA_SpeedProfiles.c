/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_LX_SR */
void SP_LX_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_LX_SR::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_LX_SR::PacketsIn */ ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_LX_SR::LX_SR */ SSP_cat_t_TA_MRSP *LX_SR)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_LX_SR::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L4;
  /* TA_SpeedProfiles::SP_LX_SR::_L5 */
  static SSP_cat_t_TA_MRSP _L5;
  /* TA_SpeedProfiles::SP_LX_SR::_L6 */
  static kcg_bool _L6;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L4, PacketsIn);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L5, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(LX_SR, &_L5);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L4);
  _L6 = reset;
  _1_noname = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_LX_SR_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

