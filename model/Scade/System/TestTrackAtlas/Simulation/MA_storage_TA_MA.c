/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_storage_TA_MA.h"

void MA_storage_reset_TA_MA(outC_MA_storage_TA_MA *outC)
{
}

/* TA_MA::MA_storage */
void MA_storage_TA_MA(
  /* TA_MA::MA_storage::Packet15_in */P015_OBU_T_TM *Packet15_in,
  outC_MA_storage_TA_MA *outC)
{
  outC->_L2 = kcg_true;
  outC->vald_MA = outC->_L2;
  kcg_copy_P015_OBU_T_TM(&outC->_L1, Packet15_in);
  kcg_copy_P015_OBU_T_TM(&outC->Packet15_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_storage_TA_MA.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

