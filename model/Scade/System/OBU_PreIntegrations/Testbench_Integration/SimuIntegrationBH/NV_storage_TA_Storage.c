/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

/* TA_Storage::NV_storage */
void NV_storage_TA_Storage(
  /* TA_Storage::NV_storage::Packet3_in */ P003V1_OBU_T_TM_baseline2 *Packet3_in,
  /* TA_Storage::NV_storage::P3_received */ kcg_bool *P3_received,
  /* TA_Storage::NV_storage::Packet3_out */ P003V1_OBU_T_TM_baseline2 *Packet3_out)
{
  /* TA_Storage::NV_storage::_L1 */
  static P003V1_OBU_T_TM_baseline2 _L1;
  /* TA_Storage::NV_storage::_L2 */
  static kcg_bool _L2;
  
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L1, Packet3_in);
  kcg_copy_P003V1_OBU_T_TM_baseline2(Packet3_out, &_L1);
  _L2 = kcg_true;
  *P3_received = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NV_storage_TA_Storage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

