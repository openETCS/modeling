/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
#ifndef _Balise_Group_Init_FirstTest_InfraLibInt_H_
#define _Balise_Group_Init_FirstTest_InfraLibInt_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_Group_Init::BG_internal_out */ BG_internal_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseGroupData_TM /* FirstTest::InfraLibInt::Balise_Group_Init::_L2 */ _L2;
  kcg_int /* FirstTest::InfraLibInt::Balise_Group_Init::_L14 */ _L14;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_Group_Init::_L26 */ _L26;
  BaliseTelegramHeader_int_T_TM /* FirstTest::InfraLibInt::Balise_Group_Init::_L27 */ _L27;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::InfraLibInt::Balise_Group_Init::_L28 */ _L28;
  kcg_int /* FirstTest::InfraLibInt::Balise_Group_Init::_L29 */ _L29;
  kcg_real /* FirstTest::InfraLibInt::Balise_Group_Init::_L30 */ _L30;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Group_Init::_L31 */ _L31;
} outC_Balise_Group_Init_FirstTest_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLibInt::Balise_Group_Init */
extern void Balise_Group_Init_FirstTest_InfraLibInt(
  /* FirstTest::InfraLibInt::Balise_Group_Init::TrainPos */kcg_real TrainPos,
  /* FirstTest::InfraLibInt::Balise_Group_Init::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_FirstTest_InfraLibInt *outC);

extern void Balise_Group_Init_reset_FirstTest_InfraLibInt(
  outC_Balise_Group_Init_FirstTest_InfraLibInt *outC);

#endif /* _Balise_Group_Init_FirstTest_InfraLibInt_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Init_FirstTest_InfraLibInt.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */

