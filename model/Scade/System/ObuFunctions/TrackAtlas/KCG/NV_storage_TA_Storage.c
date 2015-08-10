/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

/* TA_Storage::NV_storage */
void NV_storage_TA_Storage(
  /* TA_Storage::NV_storage::Packet3_in */P003V1_OBU_T_TM_baseline2 *Packet3_in,
  /* TA_Storage::NV_storage::P3_received */kcg_bool *P3_received,
  /* TA_Storage::NV_storage::Packet3_out */P003V1_OBU_T_TM_baseline2 *Packet3_out)
{
  kcg_copy_P003V1_OBU_T_TM_baseline2(Packet3_out, Packet3_in);
  *P3_received = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NV_storage_TA_Storage.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

