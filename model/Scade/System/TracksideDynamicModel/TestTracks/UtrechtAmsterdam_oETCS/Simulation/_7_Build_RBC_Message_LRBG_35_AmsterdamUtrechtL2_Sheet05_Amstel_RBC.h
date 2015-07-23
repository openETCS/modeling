/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef __7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_
#define __7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_

#include "kcg_types.h"
#include "Send_M008_JRU_MessageLibBaseline2.h"
#include "No_Radio_Packets_RadioLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M008_JRU_MessageLibBaseline2 /* 1 */ _1_Context_1;
  outC_No_Radio_Packets_RadioLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L38 */ _L38;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L39 */ _L39;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L40 */ _L40;
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L42 */ _L42;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L43 */ _L43;
  kcg_bool /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::_L44 */ _L44;
} outC__7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008 */
extern void _7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00421_9_M008::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC__7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

extern void _7_Build_RBC_Message_LRBG_35_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC__7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

#endif /* __7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

