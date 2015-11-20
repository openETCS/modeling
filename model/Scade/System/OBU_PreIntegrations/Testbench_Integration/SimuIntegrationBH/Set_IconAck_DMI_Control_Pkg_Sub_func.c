/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Set_IconAck_init_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L4.valid = kcg_true;
  outC->_L4.systemTime = 0;
  outC->_L4.DMI_nid_icon_identifier = 0;
  outC->_L1 = kcg_true;
  outC->_L2 = 0;
  outC->_L3 = 0;
  outC->IconAck.valid = kcg_true;
  outC->IconAck.systemTime = 0;
  outC->IconAck.DMI_nid_icon_identifier = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_IconAck_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Set_IconAck */
void Set_IconAck_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::system_time */ T_internal_Type_Obu_BasicTypes_Pkg system_time,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::NID_icon_id */ kcg_int NID_icon_id,
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L3 = NID_icon_id;
  outC->_L2 = system_time;
  outC->_L1 = valid;
  outC->_L4.valid = outC->_L1;
  outC->_L4.systemTime = outC->_L2;
  outC->_L4.DMI_nid_icon_identifier = outC->_L3;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->IconAck,
    &outC->_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Set_IconAck_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

