/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Set_DriverID_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = 0;
  for (i = 0; i < 9; i++) {
    outC->_L5.driverIdentifier[i] = ' ';
  }
  for (i1 = 0; i1 < 9; i1++) {
    outC->_L4[i1] = ' ';
  }
  for (i2 = 0; i2 < 9; i2++) {
    outC->_L1[i2] = 0;
  }
  outC->_L2 = kcg_true;
  outC->_L3 = 0;
  outC->DMI_DriverID_packet.valid = kcg_true;
  outC->DMI_DriverID_packet.systemTime = 0;
  for (i3 = 0; i3 < 9; i3++) {
    outC->DMI_DriverID_packet.driverIdentifier[i3] = ' ';
  }
  for (i4 = 0; i4 < 9; i4++) {
    /* 1 */
    ASCII_to_Char_iterator_init_DMI_Control_Pkg_Utils(&outC->Context_1[i4]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_DriverID_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    ASCII_to_Char_iterator_reset_DMI_Control_Pkg_Utils(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet */
void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DriverID */ array_int_9 *DriverID,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::CurrentSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  
  outC->_L3 = CurrentSystemTime;
  outC->_L2 = valid;
  kcg_copy_array_int_9(&outC->_L1, DriverID);
  for (i = 0; i < 9; i++) {
    /* 1 */
    ASCII_to_Char_iterator_DMI_Control_Pkg_Utils(
      outC->_L1[i],
      &outC->Context_1[i]);
    outC->_L4[i] = outC->Context_1[i].outChar;
  }
  outC->_L5.valid = outC->_L2;
  outC->_L5.systemTime = outC->_L3;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L5.driverIdentifier,
    &outC->_L4);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_DriverID_packet,
    &outC->_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

