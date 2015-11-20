/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValid_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void packetValid_init_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L16 = kcg_true;
  for (i = 0; i < 30; i++) {
    outC->_L15[i] = 0;
  }
  outC->_L13 = 0;
  outC->_L7 = kcg_true;
  outC->_L5 = 0;
  outC->_L3 = kcg_true;
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L1[i1].nid_packet = 0;
    outC->_L1[i1].q_dir = Q_DIR_Reverse;
    outC->_L1[i1].valid = kcg_true;
    outC->_L1[i1].startAddress = 0;
    outC->_L1[i1].endAddress = 0;
  }
  outC->isValid = kcg_true;
  for (i2 = 0; i2 < 30; i2++) {
    /* 1 */ packetValidBasics_init_xdebugSupport_Pkg(&outC->Context_1[i2]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void packetValid_reset_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ packetValidBasics_reset_xdebugSupport_Pkg(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::packetValid */
void packetValid_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValid::packetHeader */ Metadata_T_Common_Types_Pkg *packetHeader,
  /* xdebugSupport_Pkg::packetValid::which_ID */ NID_PACKET which_ID,
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_int i1;
  /* xdebugSupport_Pkg::packetValid */
  static kcg_bool acc;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, packetHeader);
  outC->_L16 = kcg_true;
  outC->_L13 = which_ID;
  /* pow */ for (i1 = 0; i1 < 30; i1++) {
    outC->_L15[i1] = outC->_L13;
  }
  outC->_L7 = kcg_true;
  outC->_L3 = outC->_L16;
  /* 1 */ if (outC->_L7) {
    /* 1 */ for (i = 0; i < 30; i++) {
      acc = outC->_L3;
      /* 1 */
      packetValidBasics_xdebugSupport_Pkg(
        acc,
        &outC->_L1[i],
        outC->_L15[i],
        &outC->Context_1[i]);
      outC->_L3 = outC->Context_1[i].packtIsValid;
      outC->_L5 = i + 1;
      /* 1 */ if (!outC->Context_1[i]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = 0;
  }
  outC->isValid = outC->_L3;
  noname = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packetValid_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

