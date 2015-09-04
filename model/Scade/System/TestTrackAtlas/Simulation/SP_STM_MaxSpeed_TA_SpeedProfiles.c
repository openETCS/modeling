/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"

void SP_STM_MaxSpeed_reset_TA_SpeedProfiles(
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::SP_STM_MaxSpeed */
void SP_STM_MaxSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_STM_MaxSpeed::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles *outC)
{
  ReceivedMessage_T_Common_Types_Pkg noname;
  kcg_bool _1_noname;
  
  outC->_L3 = reset;
  _1_noname = outC->_L3;
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L2,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, PacketsIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L1);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->STM_MaxSpeed, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_STM_MaxSpeed_TA_SpeedProfiles.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

