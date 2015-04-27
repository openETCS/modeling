/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_Balise_Localisation.h"

void INFRA_Balise_Localisation_init(outC_INFRA_Balise_Localisation *outC)
{
  outC->init = kcg_true;
  outC->rem_TrainPos = 0.0;
  outC->TrainPass = kcg_true;
}


void INFRA_Balise_Localisation_reset(outC_INFRA_Balise_Localisation *outC)
{
  outC->init = kcg_true;
}

/* INFRA_Balise_Localisation */
void INFRA_Balise_Localisation(
  /* INFRA_Balise_Localisation::Loc */ kcg_real Loc,
  /* INFRA_Balise_Localisation::TrainPos */ kcg_real TrainPos,
  /* INFRA_Balise_Localisation::accuracy */ kcg_int accuracy,
  outC_INFRA_Balise_Localisation *outC)
{
  kcg_real tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = 999999999999999999999.0;
  }
  else {
    tmp = outC->rem_TrainPos;
  }
  outC->TrainPass = (TrainPos >= Loc) & (tmp <= Loc);
  outC->rem_TrainPos = TrainPos;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_Balise_Localisation.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

