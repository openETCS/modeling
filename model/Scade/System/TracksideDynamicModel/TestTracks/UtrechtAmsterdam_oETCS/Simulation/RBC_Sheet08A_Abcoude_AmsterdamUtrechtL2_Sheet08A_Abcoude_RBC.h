/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_
#define _RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_374_D_00178_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"
#include "Send_RBC_LRBG_375_D_00054_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"
#include "Send_RBC_LRBG_376_D_00291_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_376_D_00291_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_375_D_00054_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_374_D_00178_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::_L13 */ _L13;
} outC_RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude */
extern void RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC *outC);

extern void RBC_Sheet08A_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  outC_RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC *outC);

#endif /* _RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

