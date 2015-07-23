/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_
#define _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_353_D_00319_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "Send_RBC_LRBG_353_D_00431_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_353_D_00431_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_353_D_00319_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::_L4 */ _L4;
} outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
extern void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

extern void RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

#endif /* _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

