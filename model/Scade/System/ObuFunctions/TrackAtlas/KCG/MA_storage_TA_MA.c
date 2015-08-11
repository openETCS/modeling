/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_storage_TA_MA.h"

/* TA_MA::MA_storage */
void MA_storage_TA_MA(
  /* TA_MA::MA_storage::Packet15_in */P015_OBU_T_TM *Packet15_in,
  /* TA_MA::MA_storage::Packet15_out */P015_OBU_T_TM *Packet15_out,
  /* TA_MA::MA_storage::vald_MA */kcg_bool *vald_MA)
{
  kcg_copy_P015_OBU_T_TM(Packet15_out, Packet15_in);
  *vald_MA = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MA_storage_TA_MA.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

