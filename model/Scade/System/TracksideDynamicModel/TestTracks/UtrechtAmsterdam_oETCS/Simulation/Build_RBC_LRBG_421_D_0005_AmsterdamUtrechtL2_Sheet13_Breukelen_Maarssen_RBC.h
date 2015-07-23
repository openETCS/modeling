/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_
#define _Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_

#include "kcg_types.h"
#include "Send_M015_JRU_MessageLibBaseline2.h"
#include "No_Radio_Packets_RadioLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::R_data_out */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M015_JRU_MessageLibBaseline2 /* 1 */ _1_Context_1;
  outC_No_Radio_Packets_RadioLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L38 */ _L38;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L39 */ _L39;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L40 */ _L40;
  M_TrackTrain_Radio_T_TM_radio_messages /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L42 */ _L42;
  R_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L43 */ _L43;
  kcg_bool /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::_L44 */ _L44;
} outC_Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015 */
extern void Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  /* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Build_RBC_LRBG_421_D_00050_0_M015::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC);

extern void Build_RBC_LRBG_421_D_0005_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  outC_Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC);

#endif /* _Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_RBC_LRBG_421_D_0005_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

