/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeLevelByDiver_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::changeLevelByDiver */
void changeLevelByDiver_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::changeLevelByDiver::levelData */DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *levelData,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::lasttNTC */NID_STM_DMI_Types_Pkg lasttNTC,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::ML_levelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *ML_levelTransition,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::updatedNTC */NID_STM_DMI_Types_Pkg *updatedNTC)
{
  (*ML_levelTransition).is_set = (*levelData).valid;
  (*ML_levelTransition).LRBG = 0;
  (*ML_levelTransition).referenceLocation = 0;
  if ((*levelData).valid & ((*levelData).level.level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC)) {
    *updatedNTC = (*levelData).level.nid_stm;
  }
  else if ((*levelData).valid & ((*levelData).level.level !=
      M_LEVEL_Level_NTC_specified_by_NID_NTC)) {
    *updatedNTC = cNo_STM_manage_DMI_Input_Pkg;
  }
  else {
    *updatedNTC = lasttNTC;
  }
  if ((*levelData).valid) {
    (*ML_levelTransition).transition.level = (*levelData).level.level;
    (*ML_levelTransition).transition.position = 0;
    (*ML_levelTransition).transition.transitionType =
      M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
    (*ML_levelTransition).transition.immediateAck = kcg_true;
    (*ML_levelTransition).transition.AckLength = 0;
  }
  else {
    kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
      &(*ML_levelTransition).transition,
      (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *)
        &cNoLevelTransitionInfo_manage_DMI_Input_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** changeLevelByDiver_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

