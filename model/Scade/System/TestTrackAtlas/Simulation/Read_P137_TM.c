/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_TM.h"

void Read_P137_reset_TM(outC_Read_P137_TM *outC)
{
  /* 1 */ C_P137_compr_onboard_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::Read_P137 */
void Read_P137_TM(
  /* TM::Read_P137::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P137_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    137032000,
    kcg_false,
    kcg_false,
    &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  outC->_L167 = outC->Context_1.received;
  outC->received = outC->_L167;
  /* 1 */
  C_P137_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->_1_Context_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L166,
    &outC->_1_Context_1.P137_onboard);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->P137_OBU_out,
    &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P137_TM.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

