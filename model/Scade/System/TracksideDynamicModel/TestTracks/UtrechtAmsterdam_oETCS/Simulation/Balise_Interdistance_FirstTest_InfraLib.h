/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _Balise_Interdistance_FirstTest_InfraLib_H_
#define _Balise_Interdistance_FirstTest_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::distance_BB */ distance_BB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* math::Abs::_L1 */ _L1_1;
  kcg_int /* math::Abs::_L2 */ _L2_1;
  kcg_int /* math::Abs::_L3 */ _L3_1;
  kcg_int /* math::Abs::_L5 */ _L5_1;
  kcg_int /* math::Abs::_L8 */ _L8_1;
  kcg_int /* math::Abs::A_Output */ A_Output_1;
  kcg_int /* math::Abs::A_Input */ A_Input_1;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L1 */ _L1;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L2 */ _L2;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L3 */ _L3;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L4 */ _L4;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L5 */ _L5;
  kcg_int /* FirstTest::InfraLib::Balise_Interdistance::_L6 */ _L6;
  kcg_bool /* FirstTest::InfraLib::Balise_Interdistance::_L8 */ _L8;
  kcg_int /* FirstTest::InfraLib::Balise_Interdistance::_L9 */ _L9;
  kcg_int /* FirstTest::InfraLib::Balise_Interdistance::_L10 */ _L10;
  kcg_int /* FirstTest::InfraLib::Balise_Interdistance::_L11 */ _L11;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L12 */ _L12;
  kcg_int /* FirstTest::InfraLib::Balise_Interdistance::_L13 */ _L13;
  kcg_real /* FirstTest::InfraLib::Balise_Interdistance::_L14 */ _L14;
} outC_Balise_Interdistance_FirstTest_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLib::Balise_Interdistance */
extern void Balise_Interdistance_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_Interdistance::pig0 */kcg_int pig0,
  /* FirstTest::InfraLib::Balise_Interdistance::n_pig */kcg_int n_pig,
  outC_Balise_Interdistance_FirstTest_InfraLib *outC);

extern void Balise_Interdistance_reset_FirstTest_InfraLib(
  outC_Balise_Interdistance_FirstTest_InfraLib *outC);

#endif /* _Balise_Interdistance_FirstTest_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Interdistance_FirstTest_InfraLib.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

