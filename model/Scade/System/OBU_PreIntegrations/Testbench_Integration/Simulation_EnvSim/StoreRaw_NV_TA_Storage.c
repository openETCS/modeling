/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_NV_TA_Storage.h"

void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  outC->init = kcg_true;
}

/* TA_Storage::StoreRaw_NV */
void StoreRaw_NV_TA_Storage(
  /* TA_Storage::StoreRaw_NV::mesaage_in */ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC)
{
  /* TA_Storage::StoreRaw_NV::_L22 */
  static P003V1_OBU_T_TM_baseline2 _L22;
  
  /* 3 */
  Read_P003V1_TM_baseline2(&(*mesaage_in).packets, &outC->new_NV, &_L22);
  if (outC->new_NV) {
    /* 3 */ NV_storage_TA_Storage(&_L22, &outC->vald_NV, &outC->NV_onboard_out);
  }
  else if (outC->init) {
    outC->vald_NV = kcg_false;
    kcg_copy_P003V1_OBU_T_TM_baseline2(
      &outC->NV_onboard_out,
      (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_TA_Storage);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_NV_TA_Storage.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

