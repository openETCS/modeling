/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBasics_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void countBasics_init_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC)
{
  outC->_L10 = kcg_true;
  outC->_L9 = 0;
  outC->_L8 = 0;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L3 = 0;
  outC->_L4 = 0;
  outC->_L5 = 0;
  outC->_L2 = kcg_true;
  outC->_L1.nid_packet = 0;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = 0;
  outC->_L1.endAddress = 0;
  outC->count = 0;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countBasics_reset_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::countBasics */
void countBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countBasics::accu */ kcg_int accu,
  /* xdebugSupport_Pkg::countBasics::element */ MetadataElement_T_Common_Types_Pkg *element,
  outC_countBasics_xdebugSupport_Pkg *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, element);
  outC->_L2 = outC->_L1.valid;
  outC->_L8 = outC->_L1.nid_packet;
  outC->_L9 = 0;
  outC->_L10 = outC->_L8 > outC->_L9;
  outC->_1_continue = outC->_L10;
  outC->_L3 = accu;
  outC->_L7 = 1;
  outC->_L5 = 0;
  /* 1 */ if (outC->_L2) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L5;
  }
  outC->_L4 = outC->_L3 + outC->_L6;
  outC->count = outC->_L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBasics_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

