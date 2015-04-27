/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioMessages_radioOutput_Pkg.h"

/* radioOutput_Pkg::collectRadioMessages */
void collectRadioMessages_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioMessages::inFromPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::collectRadioMessages::inFromRadioSessionManagement */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromRadioSessionManagement,
  /* radioOutput_Pkg::collectRadioMessages::inFromOther */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromOther,
  /* radioOutput_Pkg::collectRadioMessages::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::collectRadioMessages::outRadioToAPI */ API_EuroRadioOutput_T_API_RadioCommunication_Pkg *outRadioToAPI)
{
  Radio_TrainTrack_Message_T_Radio_Types_Pkg tmp;
  /* radioOutput_Pkg::collectRadioMessages::_L18 */ kcg_bool _L18;
  
  _L18 = (*inFromRadioSessionManagement).present &
    (*inFromPositionReport).present;
  if ((*inFromRadioSessionManagement).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromRadioSessionManagement);
  }
  else if ((*inFromPositionReport).present) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromPositionReport);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).firstOutput,
      inFromOther);
  }
  if (_L18) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      inFromPositionReport);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&tmp, inFromOther);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &(*outRadioToAPI).secondOutput,
      inFromOther);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &tmp,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
        &cInitOutputToRadioAPI_API_RadioCommunication_Pkg);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &(*outRadioToAPI).thirdOutput,
    &tmp);
  /* 1 */
  mapToRTM_radioOutput_Pkg(cmdsToMobile, &(*outRadioToAPI).radioEVCtoUnit);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** collectRadioMessages_radioOutput_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

