/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_
#define _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_427_D_00047_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_428_D_00182_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_431_D_00410_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_432_D_00040_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_432_D_00040_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* 1 */ _3_Context_1;
  outC_Send_RBC_LRBG_431_D_00410_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_428_D_00182_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* 1 */ _1_Context_1;
  outC_Send_RBC_LRBG_427_D_00047_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L1 */ _L1;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L2 */ _L2;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L3 */ _L3;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L4 */ _L4;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::_L13 */ _L13;
} outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen */
extern void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);

extern void RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);

#endif /* _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

