/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"

void SP_MaxTrainSpeed_reset_TA_SpeedProfiles(
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::SP_MaxTrainSpeed */
void SP_MaxTrainSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::TrainDataIn */kcg_int TrainDataIn,
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC)
{
  kcg_int noname;
  
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L2,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  outC->_L1 = TrainDataIn;
  noname = outC->_L1;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->MaxTrainSpeed, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_MaxTrainSpeed_TA_SpeedProfiles.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

