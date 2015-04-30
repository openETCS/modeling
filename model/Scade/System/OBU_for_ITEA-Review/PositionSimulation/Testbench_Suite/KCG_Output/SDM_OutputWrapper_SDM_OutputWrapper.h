/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SDM_OutputWrapper_SDM_OutputWrapper_H_
#define _SDM_OutputWrapper_SDM_OutputWrapper_H_

#include "kcg_types.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"
#include "CalcDMI_output_SDM_OutputWrapper.h"
#include "IncorporateAbsenceOfSB_SDM_OutputWrapper.h"
#include "CalcBrakeCmd_SDM_OutputWrapper.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* SDM_OutputWrapper::SDM_OutputWrapper::sdmToDMI */ sdmToDMI;
  Target_T_TargetManagement_types /* SDM_OutputWrapper::SDM_OutputWrapper::out_target */ out_target;
  SDM_Commands_T_SDM_Types_Pkg /* SDM_OutputWrapper::SDM_OutputWrapper::sdmCommands */ sdmCommands;
  Brake_command_T_TIU_Types_Pkg /* SDM_OutputWrapper::SDM_OutputWrapper::brakeCmd */ brakeCmd;
  kcg_bool /* SDM_OutputWrapper::SDM_OutputWrapper::EOA_overpassed */ EOA_overpassed;
  kcg_bool /* SDM_OutputWrapper::SDM_OutputWrapper::Target_Speed_Reached */ Target_Speed_Reached;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcBrakeCmd_SDM_OutputWrapper /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_OutputWrapper_SDM_OutputWrapper;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_OutputWrapper::SDM_OutputWrapper */
extern void SDM_OutputWrapper_SDM_OutputWrapper(
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_sdmCmd */ SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::SDM_OutputWrapper::targetSpeedReachedIn */ kcg_bool targetSpeedReachedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::eoaOverpassedIn */ kcg_bool eoaOverpassedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::preindicationTarget */ L_internal_real_Type_SDM_Types_Pkg preindicationTarget,
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_target */ Target_real_T_TargetManagement_types *in_target,
  /* SDM_OutputWrapper::SDM_OutputWrapper::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_OutputWrapper::SDM_OutputWrapper::NationalValues */ NationalValues_real_T_SDM_Types_Pkg *NationalValues,
  /* SDM_OutputWrapper::SDM_OutputWrapper::NoSBInterface */ kcg_bool NoSBInterface,
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC);

extern void SDM_OutputWrapper_reset_SDM_OutputWrapper(
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC);
extern void SDM_OutputWrapper_init_SDM_OutputWrapper(
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC);

#endif /* _SDM_OutputWrapper_SDM_OutputWrapper_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDM_OutputWrapper_SDM_OutputWrapper.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

