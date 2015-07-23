/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_InfraLib.h"

void Balise_Group_Close_reset_InfraLib(outC_Balise_Group_Close_InfraLib *outC)
{
}

/* InfraLib::Balise_Group_Close */
void Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_InfraLib *outC)
{
  outC->_L26 = kcg_false;
  outC->Error_out = outC->_L26;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L21, BG_internal_in);
  outC->_L25 = outC->_L21.balise_passed;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L22, &outC->_L21.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L23,
    &outC->_L21.packets);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L20.Header, &outC->_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20.Messages,
    &outC->_L23);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L2, BG_message_in);
  if (outC->_L25) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L20);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L2);
  }
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L24);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Close_InfraLib.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

