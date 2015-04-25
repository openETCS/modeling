/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _generateSettings_H_
#define _generateSettings_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* generateSettings */
extern void generateSettings(
  /* generateSettings::mode */ kcg_int mode,
  /* generateSettings::level */ kcg_int level,
  /* generateSettings::mobileHWStatus */ kcg_int mobileHWStatus,
  /* generateSettings::directionIn */ kcg_int directionIn,
  /* generateSettings::cabStatusIin */ kcg_bool cabStatusIin,
  /* generateSettings::modeOut */ M_MODE *modeOut,
  /* generateSettings::levelOut */ M_LEVEL *levelOut,
  /* generateSettings::mobileHWStatusOut */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatusOut,
  /* generateSettings::directionOut */ M_directioncontroller_signal_status_T_TIU_Types_Pkg *directionOut,
  /* generateSettings::cabStatusOut */ M_cab_signal_status_T_TIU_Types_Pkg *cabStatusOut,
  /* generateSettings::apiConnectionStatus */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg *apiConnectionStatus);

#endif /* _generateSettings_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** generateSettings.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

