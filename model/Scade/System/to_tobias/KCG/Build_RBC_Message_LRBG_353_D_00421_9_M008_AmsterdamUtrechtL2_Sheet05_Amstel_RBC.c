/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_Message_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008 */
void Build_RBC_Message_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, RadiaDataIn);
  /* 1 */
  No_Radio_Packets_RadioLib(&(*RadiaDataIn).packets, &(*R_data_out).packets);
  /* 1 */
  Send_M008_JRU_MessageLibBaseline2(
    (M_008_int_T_TM_radio_messages *) &LRBG_353_D_00421_9_M008_Messages_426,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_Message_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

