/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-06T10:19:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_Balise_Localisation.h"

void INFRA_Balise_Localisation_reset(outC_INFRA_Balise_Localisation *outC)
{
  outC->init = kcg_true;
}

/* INFRA_Balise_Localisation */
void INFRA_Balise_Localisation(
  inC_INFRA_Balise_Localisation *inC,
  outC_INFRA_Balise_Localisation *outC)
{
  kcg_int noname;
  
  if (outC->init) {
    outC->_L10 = 999999999999999999999.0;
  }
  else {
    outC->_L10 = outC->_L2;
  }
  outC->_L2 = inC->TrainPos;
  outC->_L1 = inC->Loc;
  outC->_L7 = (kcg_real) outC->_L1;
  outC->_L9 = 10.0;
  outC->_L8 = outC->_L7 / outC->_L9;
  outC->_L13 = outC->_L2 >= outC->_L8;
  outC->_L12 = outC->_L10 <= outC->_L8;
  outC->_L14 = outC->_L13 & outC->_L12;
  outC->_L3 = inC->accuracy;
  noname = outC->_L3;
  outC->TrainPass = outC->_L14;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** INFRA_Balise_Localisation.c
** Generation date: 2015-03-06T10:19:02
*************************************************************$ */

