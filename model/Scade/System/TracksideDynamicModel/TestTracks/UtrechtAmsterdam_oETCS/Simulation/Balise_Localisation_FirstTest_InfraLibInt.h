/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
#ifndef _Balise_Localisation_FirstTest_InfraLibInt_H_
#define _Balise_Localisation_FirstTest_InfraLibInt_H_

#include "kcg_types.h"
#include "Balise_Interdistance_FirstTest_InfraLibInt.h"
#include "TOOLS_convert_engineering_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::PIG_0_out */ PIG_0_out;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Localisation::TrainPass */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* FirstTest::InfraLibInt::Balise_Localisation::_L73 */ _L73;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Interdistance_FirstTest_InfraLibInt /* 1 */ _1_Context_1;
  outC_TOOLS_convert_engineering_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L15 */ _L15;
  BaliseTelegramHeader_int_T_TM /* FirstTest::InfraLibInt::Balise_Localisation::_L16 */ _L16;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L47 */ _L47;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L48 */ _L48;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Localisation::_L50 */ _L50;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L51 */ _L51;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L52 */ _L52;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_Localisation::_L65 */ _L65;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L66 */ _L66;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Localisation::_L72 */ _L72;
  B_data_internal_FirstTest_InfraLibInt /* FirstTest::InfraLibInt::Balise_Localisation::_L71 */ _L71;
  kcg_real /* FirstTest::InfraLibInt::Balise_Localisation::_L70 */ _L70;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Localisation::_L69 */ _L69;
  kcg_int /* FirstTest::InfraLibInt::Balise_Localisation::_L68 */ _L68;
  kcg_bool /* FirstTest::InfraLibInt::Balise_Localisation::_L67 */ _L67;
  kcg_real /* FirstTest::InfraLibInt::Balise_Localisation::_L75 */ _L75;
  kcg_real /* FirstTest::InfraLibInt::Balise_Localisation::_L76 */ _L76;
  kcg_real /* FirstTest::InfraLibInt::Balise_Localisation::_L77 */ _L77;
} outC_Balise_Localisation_FirstTest_InfraLibInt;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLibInt::Balise_Localisation */
extern void Balise_Localisation_FirstTest_InfraLibInt(
  /* FirstTest::InfraLibInt::Balise_Localisation::B_data_in */B_data_internal_FirstTest_InfraLibInt *B_data_in,
  /* FirstTest::InfraLibInt::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* FirstTest::InfraLibInt::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  outC_Balise_Localisation_FirstTest_InfraLibInt *outC);

extern void Balise_Localisation_reset_FirstTest_InfraLibInt(
  outC_Balise_Localisation_FirstTest_InfraLibInt *outC);

#endif /* _Balise_Localisation_FirstTest_InfraLibInt_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_FirstTest_InfraLibInt.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */

