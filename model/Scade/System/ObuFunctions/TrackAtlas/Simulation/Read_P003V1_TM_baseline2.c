/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P003V1_TM_baseline2.h"

void Read_P003V1_reset_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC)
{
  /* 1 */
  C_P003V1_compr_onboard_reset_TM_conversions_baseline2(&outC->_1_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_baseline2::Read_P003V1 */
void Read_P003V1_TM_baseline2(
  /* TM_baseline2::Read_P003V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P003V1_TM_baseline2 *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    3016000,
    kcg_true,
    kcg_false,
    &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  outC->_L167 = outC->Context_1.received;
  outC->received = outC->_L167;
  /* 1 */
  C_P003V1_compr_onboard_TM_conversions_baseline2(
    &outC->_L5,
    &outC->_L30,
    &outC->_1_Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L166,
    &outC->_1_Context_1.P003V1_onboard);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->P003V1_OBU_out, &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P003V1_TM_baseline2.c
** Generation date: 2015-07-07T01:45:05
*************************************************************$ */

