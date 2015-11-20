/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ModeRelated */
void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */ kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */ SSP_cat_t_TA_MRSP *ModeRelated)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;
  static T_Mode_Level_Level_And_Mode_Types_Pkg _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  /* TA_SpeedProfiles::SP_ModeRelated::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_SpeedProfiles::SP_ModeRelated::_L2 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L2;
  /* TA_SpeedProfiles::SP_ModeRelated::_L3 */
  static SSP_cat_t_TA_MRSP _L3;
  /* TA_SpeedProfiles::SP_ModeRelated::_L4 */
  static kcg_bool _L4;
  /* TA_SpeedProfiles::SP_ModeRelated::_L5 */
  static SSP_cat_t_TA_MRSP _L5;
  /* TA_SpeedProfiles::SP_ModeRelated::_L6 */
  static SSP_cat_t_TA_MRSP _L6;
  /* TA_SpeedProfiles::SP_ModeRelated::_L7 */
  static kcg_bool _L7;
  /* TA_SpeedProfiles::SP_ModeRelated::_L8 */
  static kcg_bool _L8;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L2, ModeDataIn);
  _L7 = kcg_true;
  kcg_copy_SSP_cat_t_TA_MRSP(&_L3, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L5, (SSP_cat_t_TA_MRSP *) &SP_NTC_TA_MRSP);
  /* 1 */ if (_L7) {
    kcg_copy_SSP_cat_t_TA_MRSP(&_L6, &_L3);
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&_L6, &_L5);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(ModeRelated, &_L6);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &_L1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_1_noname, &_L2);
  _L4 = reset;
  _2_noname = _L4;
  _L8 = SP_available;
  _3_noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

