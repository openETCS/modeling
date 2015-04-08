/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-06T10:19:02
*************************************************************$ */
#ifndef _INFRA_Balise_Localisation_H_
#define _INFRA_Balise_Localisation_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* INFRA_Balise_Localisation::Loc */ Loc;
  kcg_real /* INFRA_Balise_Localisation::TrainPos */ TrainPos;
  kcg_int /* INFRA_Balise_Localisation::accuracy */ accuracy;
} inC_INFRA_Balise_Localisation;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* INFRA_Balise_Localisation::TrainPass */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* INFRA_Balise_Localisation::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* INFRA_Balise_Localisation::_L1 */ _L1;
  kcg_int /* INFRA_Balise_Localisation::_L3 */ _L3;
  kcg_real /* INFRA_Balise_Localisation::_L7 */ _L7;
  kcg_real /* INFRA_Balise_Localisation::_L8 */ _L8;
  kcg_real /* INFRA_Balise_Localisation::_L9 */ _L9;
  kcg_real /* INFRA_Balise_Localisation::_L10 */ _L10;
  kcg_bool /* INFRA_Balise_Localisation::_L12 */ _L12;
  kcg_bool /* INFRA_Balise_Localisation::_L13 */ _L13;
  kcg_bool /* INFRA_Balise_Localisation::_L14 */ _L14;
} outC_INFRA_Balise_Localisation;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_Balise_Localisation */
extern void INFRA_Balise_Localisation(
  inC_INFRA_Balise_Localisation *inC,
  outC_INFRA_Balise_Localisation *outC);

extern void INFRA_Balise_Localisation_reset(
  outC_INFRA_Balise_Localisation *outC);

#endif /* _INFRA_Balise_Localisation_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** INFRA_Balise_Localisation.h
** Generation date: 2015-03-06T10:19:02
*************************************************************$ */

