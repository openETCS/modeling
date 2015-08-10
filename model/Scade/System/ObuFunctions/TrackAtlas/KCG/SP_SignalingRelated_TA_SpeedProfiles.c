/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_SignalingRelated */
void SP_SignalingRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_SignalingRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_SignalingRelated::SignalingRelated */SSP_cat_t_TA_MRSP *SignalingRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    SignalingRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_SignalingRelated_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

