/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"

void SP_SignalingRelated_reset_TA_SpeedProfiles(
  outC_SP_SignalingRelated_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::SP_SignalingRelated */
void SP_SignalingRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SignalingRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_SP_SignalingRelated_TA_SpeedProfiles *outC)
{
  ReceivedMessage_T_Common_Types_Pkg noname;
  
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L2,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SignalingRelated, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SignalingRelated_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

