/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P065_TM.h"

void Read_P065_reset_TM(outC_Read_P065_TM *outC)
{
  /* 1 */ C_P065_compr_onboard_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::Read_P065 */
void Read_P065_TM(
  /* TM::Read_P065::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P065_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    65032000,
    kcg_false,
    kcg_false,
    &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  /* 1 */
  C_P065_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->_1_Context_1);
  kcg_copy_P065_OBU_T_TM(&outC->_L166, &outC->_1_Context_1.P065_onboard);
  kcg_copy_P065_OBU_T_TM(&outC->P065_OBU_out, &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P065_TM.c
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

