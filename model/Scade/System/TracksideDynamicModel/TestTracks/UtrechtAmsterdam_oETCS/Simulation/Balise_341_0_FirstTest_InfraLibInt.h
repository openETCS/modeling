/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T14:45:57
*************************************************************$ */
#ifndef _Balise_341_0_FirstTest_InfraLibInt_H_
#define _Balise_341_0_FirstTest_InfraLibInt_H_

#include "kcg_types.h"
#include "Balise_Localisation_FirstTest_InfraLibInt.h"
#include "TEMPLATE_Balise_Packets_FirstTest_InfraLibInt.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_341_0::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TEMPLATE_Balise_Packets_FirstTest_InfraLibInt /* 1 */ _1_Context_1;
  outC_Balise_Localisation_FirstTest_InfraLibInt /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_341_0::_L4 */ _L4;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_341_0::_L5 */ _L5;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_341_0::_L15 */ _L15;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_341_0::_L17 */ _L17;
  BaliseTelegramHeader_int_T_TM /* FirstTest::InfraLibInt::Balise_341_0::_L19 */ _L19;
  kcg_int /* FirstTest::InfraLibInt::Balise_341_0::_L20 */ _L20;
  BaliseTelegramHeader_int_T_TM /* FirstTest::InfraLibInt::Balise_341_0::_L23 */ _L23;
  kcg_bool /* FirstTest::InfraLibInt::Balise_341_0::_L2 */ _L2;
  kcg_int /* FirstTest::InfraLibInt::Balise_341_0::_L21 */ _L21;
} outC_Balise_341_0_FirstTest_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLibInt::Balise_341_0 */
extern void Balise_341_0_FirstTest_InfraLibInt(
  /* FirstTest::InfraLibInt::Balise_341_0::B_data_in */B_data_internal_FirstTest_InfraLibInt *B_data_in,
  /* FirstTest::InfraLibInt::Balise_341_0::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* FirstTest::InfraLibInt::Balise_341_0::PIG_nom */kcg_int PIG_nom,
  outC_Balise_341_0_FirstTest_InfraLibInt *outC);

extern void Balise_341_0_reset_FirstTest_InfraLibInt(
  outC_Balise_341_0_FirstTest_InfraLibInt *outC);

#endif /* _Balise_341_0_FirstTest_InfraLibInt_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_341_0_FirstTest_InfraLibInt.h
** Generation date: 2015-06-08T14:45:57
*************************************************************$ */

