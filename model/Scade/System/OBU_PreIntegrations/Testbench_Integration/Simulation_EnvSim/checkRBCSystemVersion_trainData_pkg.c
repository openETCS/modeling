/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRBCSystemVersion_trainData_pkg.h"

/* trainData_pkg::checkRBCSystemVersion */
void checkRBCSystemVersion_trainData_pkg(
  /* trainData_pkg::checkRBCSystemVersion::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkRBCSystemVersion::lastStatus */trainDataStatus_T_trainData_Types_pkg *lastStatus,
  /* trainData_pkg::checkRBCSystemVersion::updatedStatus */trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, lastStatus);
  (*updatedStatus).RBCsystemVersionOnboard = ((*trackMessages).valid &
      ((*trackMessages).source == msrc_Euroradio_Common_Types_Pkg) &
      ((*trackMessages).Radio_Common_Header.nid_message ==
        cm32_RBC_RIU_System_Version_Id_Pkg)) |
    (*lastStatus).RBCsystemVersionOnboard;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkRBCSystemVersion_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

