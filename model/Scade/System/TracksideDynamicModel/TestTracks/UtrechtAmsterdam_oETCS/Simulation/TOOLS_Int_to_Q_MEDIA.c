/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_Q_MEDIA.h"

void TOOLS_Int_to_Q_MEDIA_reset(outC_TOOLS_Int_to_Q_MEDIA *outC)
{
}

/* TOOLS_Int_to_Q_MEDIA */
void TOOLS_Int_to_Q_MEDIA(
  /* TOOLS_Int_to_Q_MEDIA::int_in */kcg_int int_in,
  outC_TOOLS_Int_to_Q_MEDIA *outC)
{
  outC->_L18 = ENUM_Q_MEDIA_Loop_Q_MEDIA;
  outC->_L17 = ENUM_Q_MEDIA_Balise_Q_MEDIA;
  outC->_L16 = INT_Q_MEDIA_Balise;
  outC->_L2 = int_in;
  outC->_L12 = outC->_L2 == outC->_L16;
  if (outC->_L12) {
    outC->_L3 = outC->_L17;
  }
  else {
    outC->_L3 = outC->_L18;
  }
  outC->q_media = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_Int_to_Q_MEDIA.c
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

