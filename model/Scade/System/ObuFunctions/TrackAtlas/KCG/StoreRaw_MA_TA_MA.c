/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_MA_TA_MA.h"

void StoreRaw_MA_reset_TA_MA(outC_StoreRaw_MA_TA_MA *outC)
{
  outC->init = kcg_true;
}

/* TA_MA::StoreRaw_MA */
void StoreRaw_MA_TA_MA(
  /* TA_MA::StoreRaw_MA::packets_in */CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_StoreRaw_MA_TA_MA *outC)
{
  /* TA_MA::StoreRaw_MA::_L22 */ P015_OBU_T_TM _L22;
  
  /* 1 */ Read_P015_TM(packets_in, &outC->new_MA, &_L22);
  if (outC->new_MA) {
    /* 1 */ MA_storage_TA_MA(&_L22, &outC->MA_onboard_out, &outC->vald_MA);
  }
  else if (outC->init) {
    outC->vald_MA = kcg_false;
    kcg_copy_P015_OBU_T_TM(
      &outC->MA_onboard_out,
      (P015_OBU_T_TM *) &INIT_P15_OBU_TA_MA);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_MA_TA_MA.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

