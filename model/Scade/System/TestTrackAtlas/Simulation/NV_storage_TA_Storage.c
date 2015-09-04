/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

void NV_storage_reset_TA_Storage(outC_NV_storage_TA_Storage *outC)
{
}

/* TA_Storage::NV_storage */
void NV_storage_TA_Storage(
  /* TA_Storage::NV_storage::Packet3_in */P003V1_OBU_T_TM_baseline2 *Packet3_in,
  outC_NV_storage_TA_Storage *outC)
{
  outC->_L2 = kcg_true;
  outC->P3_received = outC->_L2;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L1, Packet3_in);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->Packet3_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NV_storage_TA_Storage.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

