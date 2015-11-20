/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchEmergencyBrakeMsg_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::patchEmergencyBrakeMsg */
void patchEmergencyBrakeMsg_EVC_Support_Pkg(
  /* EVC_Support_Pkg::patchEmergencyBrakeMsg::inFromTA */DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  /* EVC_Support_Pkg::patchEmergencyBrakeMsg::outToML */DataForModeAndLevel_t_TrackAtlasTypes *outToML)
{
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(outToML, inFromTA);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &(*outToML).train_messages,
    &(*inFromTA).train_messages);
  (*outToML).train_messages.Mess_15 = kcg_false;
  (*outToML).train_messages.Mess_15 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** patchEmergencyBrakeMsg_EVC_Support_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

