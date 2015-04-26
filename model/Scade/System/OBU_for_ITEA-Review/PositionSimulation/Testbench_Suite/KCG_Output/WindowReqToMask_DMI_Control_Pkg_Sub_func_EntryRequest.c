/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask */
void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::dmi_entry_request */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::window_mask */ array_bool_15 *window_mask)
{
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L18 */ kcg_int _L18;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L19 */ kcg_int _L19;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L25 */ kcg_int _L25;
  
  _L19 = 0;
  for (i = 0; i < 15; i++) {
    _L25 = _L19;
    /* 1 */
    GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
      i,
      _L25,
      cDMI_List_Entry_Request_DMI_Control_Pkg[i],
      dmi_entry_request,
      &tmp,
      &_L19);
    _L18 = i + 1;
    if (!tmp) {
      break;
    }
  }
  _L25 = _L18 - 1;
  for (i = 0; i < 15; i++) {
    (*window_mask)[i] = /* 1 */
      Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
        i,
        _L25);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

