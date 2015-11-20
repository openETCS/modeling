/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

void CalcDMI_output_reset_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  /* 2 */ LowerOrHold_reset_SDM_Commands_Pkg(&outC->Context_2);
  /* 3 */ LowerOrHold_reset_SDM_Commands_Pkg(&outC->Context_3);
}

/* SDM_Commands_Pkg::CalcDMI_output */
void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::mrdt */Target_T_TargetManagement_types *mrdt,
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  outC->sdmToDMI.valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types_Pkg;
  outC->sdmToDMI.locationBrakeTarget = (*in_sdmCmd).targetDistance;
  /* 3 */
  LowerOrHold_SDM_Commands_Pkg(
    (*in_sdmCmd).permittedSpeed,
    mrdt,
    &outC->Context_3);
  /* 2 */
  LowerOrHold_SDM_Commands_Pkg((*in_sdmCmd).sbiSpeed, mrdt, &outC->Context_2);
  if ((*in_sdmCmd).valid_v_mrdt) {
    outC->sdmToDMI.targetSpeed = (*in_sdmCmd).mrdtSpeed;
  }
  else {
    outC->sdmToDMI.targetSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*in_sdmCmd).valid_v_permitted) {
    outC->sdmToDMI.permittedSpeed = outC->Context_3.vo;
  }
  else {
    outC->sdmToDMI.permittedSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*in_sdmCmd).valid_v_release) {
    outC->sdmToDMI.releaseSpeed = (*in_sdmCmd).releaseSpeed;
  }
  else {
    outC->sdmToDMI.releaseSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*limit_locations).Preindication_EBD_location_valid) {
    outC->sdmToDMI.location_brake_curve_starting_point =
      (*limit_locations).EBD_preindication_location;
  }
  else {
    outC->sdmToDMI.location_brake_curve_starting_point =
      cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*in_sdmCmd).valid_v_sbi) {
    outC->sdmToDMI.interventionSpeed = outC->Context_2.vo;
  }
  else {
    outC->sdmToDMI.interventionSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  switch ((*in_sdmCmd).sdmType) {
    case CSM_SDM_Types_Pkg :
      outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
      break;
    case RSM_SDM_Types_Pkg :
      outC->sdmToDMI.sup_status = RSM_DMI_Types_Pkg;
      break;
    case TSM_SDM_Types_Pkg :
      if ((*limit_locations).d_I_of_V_MRSP >=
        (*trainLocations).maxSafeFrontEndPostion) {
        outC->sdmToDMI.sup_status = PIM_DMI_Types_Pkg;
      }
      else {
        outC->sdmToDMI.sup_status = TSM_DMI_Types_Pkg;
      }
      break;
    
    default :
      outC->sdmToDMI.sup_status = supervision_status_unknown_DMI_Types_Pkg;
  }
  switch ((*in_sdmCmd).supervisionStatus) {
    case Normal_Supervision_SDM_Types_Pkg :
      outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
      break;
    case Indication_Supervision_SDM_Types_Pkg :
      outC->sdmToDMI.supervisionDisplay = supDis_indication_DMI_Types_Pkg;
      break;
    case Overspeed_Supervision_SDM_Types_Pkg :
      outC->sdmToDMI.supervisionDisplay = supDis_overspeed_DMI_Types_Pkg;
      break;
    case Warning_Supervision_SDM_Types_Pkg :
      outC->sdmToDMI.supervisionDisplay = supDis_warning_DMI_Types_Pkg;
      break;
    case Intervention_Supervision_SDM_Types_Pkg :
      outC->sdmToDMI.supervisionDisplay = supDis_intervention_DMI_Types_Pkg;
      break;
    
    default :
      outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  }
  if ((*limit_locations).Preindication_EBD_location_valid) {
    outC->sdmToDMI.distanceIndicationPoint = (*limit_locations).d_I_of_V_MRSP -
      (*trainLocations).maxSafeFrontEndPostion;
  }
  else {
    outC->sdmToDMI.distanceIndicationPoint = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

