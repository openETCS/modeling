/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Set_level_data_DMI_Control_Pkg_Sub_func_H_
#define _Set_level_data_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_level_data::dmi_level_data */ dmi_level_data;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::Set_level_data::_L1 */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Set_level_data::_L2 */ _L2;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::Set_level_data::_L9 */ _L9;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_level_data::_L11 */ _L11;
} outC_Set_level_data_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_level_data */
extern void Set_level_data_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_level_data::LevelDataAck */ kcg_bool LevelDataAck,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::level */ DMI_level_T_DMI_Types_Pkg *level,
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_level_data_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_level_data_init_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Set_level_data_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Set_level_data_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

