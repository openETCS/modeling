/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_close_RadioLib.h"

void RBC_close_reset_RadioLib(outC_RBC_close_RadioLib *outC)
{
}

/* RadioLib::RBC_close */
void RBC_close_RadioLib(
  /* RadioLib::RBC_close::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_close_RadioLib *outC)
{
  kcg_int noname;
  kcg_bool _1_noname;
  
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, RadiaDataIn);
  outC->_L5 = outC->_L1.message_sent;
  outC->_L4 = outC->_L1.trigger;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, &outC->_L1.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L3);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L2,
    &outC->_L1.message);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L2);
  _1_noname = outC->_L5;
  noname = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_close_RadioLib.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

