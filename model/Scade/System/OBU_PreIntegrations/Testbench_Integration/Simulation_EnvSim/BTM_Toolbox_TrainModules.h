/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _BTM_Toolbox_TrainModules_H_
#define _BTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */


/* Toolbox::TrainModules::BTM */
extern void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  /* Toolbox::TrainModules::BTM::TrackMessage */API_TrackSideInput_T_API_Msg_Pkg *TrackMessage);

#endif /* _BTM_Toolbox_TrainModules_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BTM_Toolbox_TrainModules.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

