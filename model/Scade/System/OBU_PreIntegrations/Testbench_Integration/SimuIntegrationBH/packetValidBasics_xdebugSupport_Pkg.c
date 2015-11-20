/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValidBasics_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void packetValidBasics_init_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
  outC->_L16 = 0;
  outC->_L15 = kcg_true;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L2 = kcg_true;
  outC->_L1.nid_packet = 0;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = 0;
  outC->_L1.endAddress = 0;
  outC->packtIsValid = kcg_true;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void packetValidBasics_reset_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::packetValidBasics */
void packetValidBasics_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValidBasics::accu */ kcg_bool accu,
  /* xdebugSupport_Pkg::packetValidBasics::element */ MetadataElement_T_Common_Types_Pkg *element,
  /* xdebugSupport_Pkg::packetValidBasics::which_ID */ NID_PACKET which_ID,
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
  static kcg_bool noname;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, element);
  outC->_L2 = outC->_L1.valid;
  outC->_L14 = outC->_L1.nid_packet;
  outC->_L16 = 0;
  outC->_L15 = outC->_L14 != outC->_L16;
  outC->_L6 = outC->_L1.nid_packet;
  outC->_L13 = /* 1 */
    T_extract_nid_packet_from_metadata_selector_TM(outC->_L6);
  outC->_L7 = which_ID;
  outC->_L8 = outC->_L13 == outC->_L7;
  outC->_L9 = outC->_L2 & outC->_L8;
  outC->_L10 = !outC->_L9;
  outC->_L11 = outC->_L15 & outC->_L10;
  outC->_1_continue = outC->_L11;
  outC->packtIsValid = outC->_L9;
  outC->_L12 = accu;
  noname = outC->_L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packetValidBasics_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

