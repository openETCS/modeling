/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"

void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::sendVersion */
void sendVersion_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendVersion::ownVersion */M_VERSION ownVersion,
  /* manage_DMI_Output_Pkg::sendVersion::dmiStatus */DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* manage_DMI_Output_Pkg::sendVersion::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::sendVersion::sendPkg */
  static kcg_bool sendPkg;
  /* manage_DMI_Output_Pkg::sendVersion::_L7 */
  static kcg_bool _L7;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L7 = kcg_false;
  }
  else {
    _L7 = outC->versionSent;
  }
  sendPkg = (*dmiStatus).DMI_Active & _L7;
  outC->versionSent = sendPkg | _L7;
  if (sendPkg) {
    outC->VersionPkg.valid = kcg_true;
    outC->VersionPkg.system_clock = inSystemTime;
    outC->VersionPkg.system_version = ownVersion;
  }
  else {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->VersionPkg,
      (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyVersion_manage_DMI_Output_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendVersion_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

