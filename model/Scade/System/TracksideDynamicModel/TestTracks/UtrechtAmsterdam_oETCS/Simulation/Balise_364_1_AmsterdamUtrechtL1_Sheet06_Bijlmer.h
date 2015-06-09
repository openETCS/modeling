/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */
#ifndef _Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_
#define _Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_

#include "kcg_types.h"
#include "Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"
#include "Balise_Localisation_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Packets_BG364_AmsterdamUtrechtL1_Sheet06_Bijlmer /* 1 */ _1_Context_1;
  outC_Balise_Localisation_InfraLib /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L2 */ _L2;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L4 */ _L4;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L5 */ _L5;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L15 */ _L15;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L17 */ _L17;
  BaliseTelegramHeader_int_T_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L19 */ _L19;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L20 */ _L20;
  kcg_int /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::_L23 */ _L23;
} outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1 */
extern void Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1::PIG_nom */kcg_int PIG_nom,
  outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC);

extern void Balise_364_1_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  outC_Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC);

#endif /* _Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_364_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

