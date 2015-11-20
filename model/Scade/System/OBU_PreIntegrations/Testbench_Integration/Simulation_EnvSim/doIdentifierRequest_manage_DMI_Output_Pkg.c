/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"

void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::doIdentifierRequest */
void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  if ((*TIU_TrainStatus).deskOpen) {
    if (outC->init) {
      outC->init = kcg_false;
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->identifierRequest,
        (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEVCIdentifierRequest_manage_DMI_Output_Pkg);
      outC->identifierRequest.system_clock = inSystemTime;
      outC->identifierRequest.ERTMS_Version = ownVersion;
      outC->identifierRequest.EVC_Version = ownVersion;
    }
    else {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->identifierRequest,
        (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    }
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** doIdentifierRequest_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

