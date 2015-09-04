/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

void SP_ModeRelated_reset_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::SP_ModeRelated */
void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  outC_SP_ModeRelated_TA_SpeedProfiles *outC)
{
  ReceivedMessage_T_Common_Types_Pkg noname;
  T_Mode_Level_Level_And_Mode_Types_Pkg _1_noname;
  kcg_bool _2_noname;
  kcg_bool _3_noname;
  
  outC->_L8 = SP_available;
  _3_noname = outC->_L8;
  outC->_L7 = kcg_true;
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L3,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L5, (SSP_cat_t_TA_MRSP *) &SP_NTC_TA_MRSP);
  if (outC->_L7) {
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, &outC->_L3);
  }
  else {
    kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L6, &outC->_L5);
  }
  outC->_L4 = reset;
  _2_noname = outC->_L4;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L2, ModeDataIn);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_1_noname, &outC->_L2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->ModeRelated, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

