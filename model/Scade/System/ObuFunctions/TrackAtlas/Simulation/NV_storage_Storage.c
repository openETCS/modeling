/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_Storage.h"

void NV_storage_reset_Storage(outC_NV_storage_Storage *outC)
{
}

/* Storage::NV_storage */
void NV_storage_Storage(
  /* Storage::NV_storage::Packet3_in */P003V1_OBU_T_TM_baseline2 *Packet3_in,
  outC_NV_storage_Storage *outC)
{
  outC->_L2 = kcg_true;
  outC->P3_received = outC->_L2;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L1, Packet3_in);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->Packet3_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NV_storage_Storage.c
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

