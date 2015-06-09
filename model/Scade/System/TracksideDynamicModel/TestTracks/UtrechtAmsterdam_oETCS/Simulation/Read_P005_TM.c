/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_TM.h"

void Read_P005_reset_TM(outC_Read_P005_TM *outC)
{
  /* 3 */ C_P005_compr_onboard_reset_TM_conversions(&outC->Context_3);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::Read_P005 */
void Read_P005_TM(
  /* TM::Read_P005::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P005_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* 1 */ RECV_ReadPackets_TM_lib_internal(&outC->_L6, 5, &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  /* 3 */
  C_P005_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->Context_3);
  kcg_copy_P005_OBU_T_TM(&outC->_L166, &outC->Context_3.P005_onboard);
  kcg_copy_P005_OBU_T_TM(&outC->P005_OBU_out, &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P005_TM.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

