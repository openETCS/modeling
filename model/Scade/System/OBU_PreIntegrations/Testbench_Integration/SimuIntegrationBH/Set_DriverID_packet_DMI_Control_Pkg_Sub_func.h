/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_
#define _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DMI_DriverID_packet */ DMI_DriverID_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils /* 1 */ Context_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::_L2 */ _L2;
  array_int_9 /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::_L1 */ _L1;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::_L4 */ _L4;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::_L5 */ _L5;
} outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet */
extern void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DriverID */ array_int_9 *DriverID,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::CurrentSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_DriverID_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_DriverID_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

