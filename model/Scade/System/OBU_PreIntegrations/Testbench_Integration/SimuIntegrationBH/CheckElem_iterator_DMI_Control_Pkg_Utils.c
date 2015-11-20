/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckElem_iterator_init_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->result = kcg_true;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckElem_iterator_reset_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::CheckElem_iterator */
void CheckElem_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::acc */ kcg_bool acc,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::elem */ kcg_int elem,
  /* DMI_Control_Pkg::Utils::CheckElem_iterator::key */ kcg_int key,
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
  static kcg_bool noname;
  
  outC->_L1 = elem;
  outC->_L2 = key;
  outC->_L4 = outC->_L1 == outC->_L2;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_false;
  /* 1 */ if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->result = outC->_L6;
  outC->_L3 = acc;
  noname = outC->_L3;
  outC->_L5 = !outC->_L4;
  outC->condition = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckElem_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

