/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_MA_TA_MA.h"

void StoreRaw_MA_reset_TA_MA(outC_StoreRaw_MA_TA_MA *outC)
{
  outC->init = kcg_true;
  /* 1 */ MA_storage_reset_TA_MA(&outC->_1_Context_1);
  /* 1 */ Read_P015_reset_TM(&outC->Context_1);
}

/* TA_MA::StoreRaw_MA */
void StoreRaw_MA_TA_MA(
  /* TA_MA::StoreRaw_MA::packets_in */CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_StoreRaw_MA_TA_MA *outC)
{
  kcg_bool tmp1;
  P015_OBU_T_TM tmp;
  kcg_bool tmp2;
  P015_OBU_T_TM tmp3;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L25, packets_in);
  /* 1 */ Read_P015_TM(&outC->_L25, &outC->Context_1);
  outC->_L21 = outC->Context_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L22, &outC->Context_1.P015_OBU_out);
  outC->tmp = outC->_L21;
  if (outC->tmp) {
    /* 1 */ MA_storage_TA_MA(&outC->_L22, &outC->_1_Context_1);
    kcg_copy_P015_OBU_T_TM(&tmp3, &outC->_1_Context_1.Packet15_out);
    tmp2 = outC->_1_Context_1.vald_MA;
    outC->_L26 = tmp2;
  }
  else {
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L26;
    }
    outC->_L26 = tmp1;
  }
  outC->new_MA = outC->_L21;
  if (outC->tmp) {
    kcg_copy_P015_OBU_T_TM(&outC->_L24, &tmp3);
  }
  else {
    if (outC->init) {
      kcg_copy_P015_OBU_T_TM(&tmp, (P015_OBU_T_TM *) &INIT_P15_OBU_TA_MA);
    }
    else {
      kcg_copy_P015_OBU_T_TM(&tmp, &outC->_L24);
    }
    kcg_copy_P015_OBU_T_TM(&outC->_L24, &tmp);
  }
  kcg_copy_P015_OBU_T_TM(&outC->MA_onboard_out, &outC->_L24);
  outC->vald_MA = outC->_L26;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_MA_TA_MA.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

