/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_
#define _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_

#include "kcg_types.h"
#include "SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitOne */ SpeedDigitOne;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitTwo */ SpeedDigitTwo;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitThree */ SpeedDigitThree;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::TrainSpeed */ TrainSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L1 */ _L1;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L8 */ _L8;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L9 */ _L9;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L10 */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L14 */ _L14;
  kcg_real /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L16 */ _L16;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L17 */ _L17;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::_L19 */ _L19;
} outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager */
extern void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DigitSpeedManager_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DigitSpeedManager_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

