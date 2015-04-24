/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _Balise_364_1_FirstTest_InfraLib_H_
#define _Balise_364_1_FirstTest_InfraLib_H_

#include "kcg_types.h"
#include "Balise_Localisation_FirstTest_InfraLib.h"
#include "Balise_Packets_364_FirstTest_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_364_1::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Packets_364_FirstTest_InfraLib /* 1 */ _1_Context_1;
  outC_Balise_Localisation_FirstTest_InfraLib /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* FirstTest::InfraLib::Balise_364_1::_L2 */ _L2;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_364_1::_L4 */ _L4;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_364_1::_L5 */ _L5;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_364_1::_L15 */ _L15;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_364_1::_L17 */ _L17;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::Balise_364_1::_L19 */ _L19;
  kcg_int /* FirstTest::InfraLib::Balise_364_1::_L20 */ _L20;
  kcg_int /* FirstTest::InfraLib::Balise_364_1::_L21 */ _L21;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::Balise_364_1::_L23 */ _L23;
} outC_Balise_364_1_FirstTest_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLib::Balise_364_1 */
extern void Balise_364_1_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_364_1::B_data_in */B_data_internal_FirstTest_InfraLib *B_data_in,
  /* FirstTest::InfraLib::Balise_364_1::Header */TM_BaliseTelegramHeader_int_T *Header,
  /* FirstTest::InfraLib::Balise_364_1::PIG_nom */kcg_int PIG_nom,
  outC_Balise_364_1_FirstTest_InfraLib *outC);

extern void Balise_364_1_reset_FirstTest_InfraLib(
  outC_Balise_364_1_FirstTest_InfraLib *outC);

#endif /* _Balise_364_1_FirstTest_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_364_1_FirstTest_InfraLib.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

