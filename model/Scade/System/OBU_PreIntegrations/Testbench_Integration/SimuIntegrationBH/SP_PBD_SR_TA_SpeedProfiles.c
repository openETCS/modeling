/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_PBD_SR */
void SP_PBD_SR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_PBD_SR::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_PBD_SR::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_PBD_SR::PBD_SR */ SSP_cat_t_TA_MRSP *PBD_SR)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_PBD_SR::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SpeedProfiles::SP_PBD_SR::_L2 */
  static SSP_cat_t_TA_MRSP _L2;
  /* TA_SpeedProfiles::SP_PBD_SR::_L3 */
  static kcg_bool _L3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L2, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(PBD_SR, &_L2);
  _L3 = reset;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_PBD_SR_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

