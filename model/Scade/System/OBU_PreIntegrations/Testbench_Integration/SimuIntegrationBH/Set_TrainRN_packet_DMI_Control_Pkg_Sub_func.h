/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_
#define _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::DMI_train_running_number_id */ DMI_train_running_number_id;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils /* ArrayOfASCII_to_Integer */ Context_ArrayOfASCII_to_Integer;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_9 /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::_L1 */ _L1;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::_L19 */ _L19;
  kcg_int /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::_L22 */ _L22;
} outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet */
extern void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::TrainRunningNumber */ array_int_9 *TrainRunningNumber,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::SystemTime */ kcg_int SystemTime,
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_TrainRN_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_TrainRN_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

