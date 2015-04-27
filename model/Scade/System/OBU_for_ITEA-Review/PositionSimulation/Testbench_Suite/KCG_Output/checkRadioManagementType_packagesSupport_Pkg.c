/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioManagementType_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::checkRadioManagementType */
kcg_bool checkRadioManagementType_packagesSupport_Pkg(
  /* packagesSupport_Pkg::checkRadioManagementType::inSource */ MsgSource_T_Common_Types_Pkg inSource,
  /* packagesSupport_Pkg::checkRadioManagementType::inMsg */ NID_MESSAGE inMsg)
{
  /* packagesSupport_Pkg::checkRadioManagementType::outValid */ kcg_bool outValid;
  
  outValid = (inSource == msrc_Euroradio_Common_Types_Pkg) & ((inMsg ==
        cm38_Initiation_of_a_Communication_Session_Id_Pkg) | (inMsg ==
        cm32_RBC_RIU_System_Version_Id_Pkg) | (inMsg ==
        cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg));
  return outValid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkRadioManagementType_packagesSupport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

