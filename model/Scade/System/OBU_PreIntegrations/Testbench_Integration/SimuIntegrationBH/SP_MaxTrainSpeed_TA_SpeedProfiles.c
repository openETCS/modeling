/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_MaxTrainSpeed */
void SP_MaxTrainSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::reset */ kcg_bool reset,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::TrainDataIn */ kcg_int TrainDataIn,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::MaxTrainSpeed */ SSP_cat_t_TA_MRSP *MaxTrainSpeed)
{
  static kcg_int noname;
  static kcg_bool _1_noname;
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::_L1 */
  static kcg_int _L1;
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::_L2 */
  static SSP_cat_t_TA_MRSP _L2;
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::_L3 */
  static kcg_bool _L3;
  
  _L1 = TrainDataIn;
  kcg_copy_SSP_cat_t_TA_MRSP(&_L2, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(MaxTrainSpeed, &_L2);
  noname = _L1;
  _L3 = reset;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SP_MaxTrainSpeed_TA_SpeedProfiles.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

