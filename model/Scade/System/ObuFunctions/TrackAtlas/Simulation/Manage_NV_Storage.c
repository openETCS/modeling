/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NV_Storage.h"

void Manage_NV_reset_Storage(outC_Manage_NV_Storage *outC)
{
  outC->init = kcg_true;
  /* 1 */ NV_storage_reset_Storage(&outC->_1_Context_1);
  /* 1 */ Read_P003V1_reset_TM_baseline2(&outC->Context_1);
}

/* Storage::Manage_NV */
void Manage_NV_Storage(
  /* Storage::Manage_NV::packets_in */CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_Manage_NV_Storage *outC)
{
  P003V1_OBU_T_TM_baseline2 tmp1;
  kcg_bool tmp;
  P003V1_OBU_T_TM_baseline2 tmp2;
  kcg_bool tmp3;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1, packets_in);
  /* 1 */ Read_P003V1_TM_baseline2(&outC->_L1, &outC->Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L17,
    &outC->Context_1.P003V1_OBU_out);
  outC->_L18 = outC->Context_1.received;
  outC->tmp = outC->_L18;
  if (outC->tmp) {
    /* 1 */ NV_storage_Storage(&outC->_L17, &outC->_1_Context_1);
    tmp3 = outC->_1_Context_1.P3_received;
    kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp2, &outC->_1_Context_1.Packet3_out);
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L19, &tmp2);
  }
  else {
    if (outC->init) {
      kcg_copy_P003V1_OBU_T_TM_baseline2(
        &tmp1,
        (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_Storage);
    }
    else {
      kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp1, &outC->_L19);
    }
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L19, &tmp1);
  }
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->NV_onboard_out, &outC->_L19);
  if (outC->tmp) {
    outC->_L20 = tmp3;
  }
  else {
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L20;
    }
    outC->_L20 = tmp;
  }
  outC->vald_NV = outC->_L20;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_NV_Storage.c
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

