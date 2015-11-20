/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_close_RadioLib.h"

/* RadioLib::RBC_close */
void RBC_close_RadioLib(
  /* RadioLib::RBC_close::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* RadioLib::RBC_close::Message_out */M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* RadioLib::RBC_close::Packets_out */CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    Packets_out,
    &(*RadiaDataIn).packets);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    Message_out,
    &(*RadiaDataIn).message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_close_RadioLib.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

