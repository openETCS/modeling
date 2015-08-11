/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_TA_MA.h"

void Build_MA_reset_TA_MA(outC_Build_MA_TA_MA *outC)
{
  /* 1 */ Decode_P015_reset_TA_MA(&outC->_1_Context_1);
  /* 1 */ StoreRaw_MA_reset_TA_MA(&outC->Context_1);
}

/* TA_MA::Build_MA */
void Build_MA_TA_MA(
  /* TA_MA::Build_MA::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA::NV_onboard_in */P003V1_OBU_T_TM_baseline2 *NV_onboard_in,
  outC_Build_MA_TA_MA *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, &outC->_L5.packets);
  /* 1 */ StoreRaw_MA_TA_MA(&outC->_L6, &outC->Context_1);
  outC->_L2 = outC->Context_1.vald_MA;
  outC->_L4 = outC->Context_1.new_MA;
  kcg_copy_P015_OBU_T_TM(&outC->_L3, &outC->Context_1.MA_onboard_out);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L7, NV_onboard_in);
  /* 1 */ Decode_P015_TA_MA(&outC->_L3, &outC->_L7, &outC->_1_Context_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L1,
    &outC->_1_Context_1.MA_decoded_out);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_L1);
  outC->new_MA = outC->_L4;
  outC->vald_MA = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_TA_MA.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

