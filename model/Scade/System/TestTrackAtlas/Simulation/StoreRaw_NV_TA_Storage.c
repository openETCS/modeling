/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_NV_TA_Storage.h"

void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  outC->init = kcg_true;
  /* 3 */ NV_storage_reset_TA_Storage(&outC->_1_Context_3);
  /* 3 */ Read_P003V1_reset_TM_baseline2(&outC->Context_3);
}

/* TA_Storage::StoreRaw_NV */
void StoreRaw_NV_TA_Storage(
  /* TA_Storage::StoreRaw_NV::mesaage_in */ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC)
{
  P003V1_OBU_T_TM_baseline2 tmp1;
  kcg_bool tmp;
  P003V1_OBU_T_TM_baseline2 tmp2;
  kcg_bool tmp3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L25, mesaage_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L26,
    &outC->_L25.packets);
  /* 3 */ Read_P003V1_TM_baseline2(&outC->_L26, &outC->Context_3);
  outC->_L21 = outC->Context_3.received;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L22,
    &outC->Context_3.P003V1_OBU_out);
  outC->tmp = outC->_L21;
  if (outC->tmp) {
    /* 3 */ NV_storage_TA_Storage(&outC->_L22, &outC->_1_Context_3);
    tmp3 = outC->_1_Context_3.P3_received;
    kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp2, &outC->_1_Context_3.Packet3_out);
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &tmp2);
  }
  else {
    if (outC->init) {
      kcg_copy_P003V1_OBU_T_TM_baseline2(
        &tmp1,
        (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_TA_Storage);
    }
    else {
      kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp1, &outC->_L24);
    }
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &tmp1);
  }
  outC->new_NV = outC->_L21;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->NV_onboard_out, &outC->_L24);
  if (outC->tmp) {
    outC->_L23 = tmp3;
  }
  else {
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L23;
    }
    outC->_L23 = tmp;
  }
  outC->vald_NV = outC->_L23;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** StoreRaw_NV_TA_Storage.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

