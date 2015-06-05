/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
#ifndef _Balise_Localisation_InfraLib_H_
#define _Balise_Localisation_InfraLib_H_

#include "kcg_types.h"
#include "TOOLS_convert_engineering_TM_conversions.h"
#include "Balise_Interdistance_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* InfraLib::Balise_Localisation::PIG_0_out */ PIG_0_out;
  kcg_bool /* InfraLib::Balise_Localisation::TrainPass */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* InfraLib::Balise_Localisation::_L73 */ _L73;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TOOLS_convert_engineering_TM_conversions /* 1 */ _1_Context_1;
  outC_Balise_Interdistance_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* InfraLib::Balise_Localisation::_L15 */ _L15;
  BaliseTelegramHeader_int_T_TM /* InfraLib::Balise_Localisation::_L16 */ _L16;
  kcg_int /* InfraLib::Balise_Localisation::_L47 */ _L47;
  kcg_int /* InfraLib::Balise_Localisation::_L48 */ _L48;
  kcg_bool /* InfraLib::Balise_Localisation::_L50 */ _L50;
  kcg_int /* InfraLib::Balise_Localisation::_L51 */ _L51;
  kcg_int /* InfraLib::Balise_Localisation::_L52 */ _L52;
  B_data_internal_T_InfraLib /* InfraLib::Balise_Localisation::_L65 */ _L65;
  kcg_int /* InfraLib::Balise_Localisation::_L66 */ _L66;
  kcg_bool /* InfraLib::Balise_Localisation::_L72 */ _L72;
  B_data_internal_T_InfraLib /* InfraLib::Balise_Localisation::_L71 */ _L71;
  kcg_real /* InfraLib::Balise_Localisation::_L70 */ _L70;
  kcg_bool /* InfraLib::Balise_Localisation::_L69 */ _L69;
  kcg_int /* InfraLib::Balise_Localisation::_L68 */ _L68;
  kcg_bool /* InfraLib::Balise_Localisation::_L67 */ _L67;
  kcg_real /* InfraLib::Balise_Localisation::_L75 */ _L75;
  kcg_real /* InfraLib::Balise_Localisation::_L76 */ _L76;
  kcg_real /* InfraLib::Balise_Localisation::_L77 */ _L77;
  kcg_bool /* InfraLib::Balise_Localisation::_L80 */ _L80;
  kcg_bool /* InfraLib::Balise_Localisation::_L79 */ _L79;
  kcg_bool /* InfraLib::Balise_Localisation::_L78 */ _L78;
  kcg_bool /* InfraLib::Balise_Localisation::_L81 */ _L81;
} outC_Balise_Localisation_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Localisation */
extern void Balise_Localisation_InfraLib(
  /* InfraLib::Balise_Localisation::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* InfraLib::Balise_Localisation::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::Balise_Localisation::PIG_nom */kcg_int PIG_nom,
  outC_Balise_Localisation_InfraLib *outC);

extern void Balise_Localisation_reset_InfraLib(
  outC_Balise_Localisation_InfraLib *outC);

#endif /* _Balise_Localisation_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Localisation_InfraLib.h
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

