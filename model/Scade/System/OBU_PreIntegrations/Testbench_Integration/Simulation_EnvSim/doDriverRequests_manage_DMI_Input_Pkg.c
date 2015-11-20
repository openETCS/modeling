/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::doDriverRequests */
void doDriverRequests_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::doDriverRequests::inDriverRequest */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *inDriverRequest,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */DMI_DriverRequest_T_DMI_Types_Pkg *outDriverRequestToModes,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToLevels */kcg_bool *outDriverRequestToLevels)
{
  if ((*inDriverRequest).valid) {
    (*outDriverRequestToModes).valid = (*inDriverRequest).valid;
    (*outDriverRequestToModes).Req_Exit_SH = (*inDriverRequest).m_request ==
      Shunting_exit_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_NL = (*inDriverRequest).m_request ==
      Non_leading_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_Override = (*inDriverRequest).m_request ==
      Override_EOA_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_SH = (*inDriverRequest).m_request ==
      Shunting_entry_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_Start = (*inDriverRequest).m_request ==
      Start_of_mission_DMI_Types_Pkg;
    (*outDriverRequestToModes).ETCS_Isolated = (*inDriverRequest).m_request ==
      Request_isolation_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      outDriverRequestToModes,
      (DMI_DriverRequest_T_DMI_Types_Pkg *)
        &cNoDriverRequestToModes_manage_DMI_Input_Pkg);
  }
  *outDriverRequestToLevels = (*inDriverRequest).valid &
    ((*inDriverRequest).m_request == Level_entry_request_DMI_Types_Pkg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** doDriverRequests_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

