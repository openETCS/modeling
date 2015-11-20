/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void Length_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L78 = 0;
  outC->_L77 = 0;
  outC->_L76 = kcg_true;
  outC->_L75 = 0.0;
  outC->_L64 = 0.0;
  for (i = 0; i < 5; i++) {
    outC->_L65[i] = 0.0;
  }
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68 = 0.0;
  outC->_L69 = 0.0;
  outC->_L70 = 0.0;
  outC->_L71 = 0.0;
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L63 = 0;
  outC->_L62 = 0;
  outC->_L49 = 0.0;
  outC->_L50 = 0.0;
  outC->_L51 = kcg_true;
  outC->_L52 = 0.0;
  outC->_L53 = 0.0;
  outC->_L54 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L59 = 0.0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L60[i1] = 0.0;
  }
  outC->_L61 = 0.0;
  outC->_L48 = 0;
  outC->_L47 = 0;
  outC->_L46 = 0;
  outC->_L33 = 0.0;
  outC->_L34 = kcg_true;
  outC->_L35 = 0.0;
  outC->_L36 = 0.0;
  outC->_L37 = 0.0;
  outC->_L38 = 0.0;
  outC->_L39 = 0.0;
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L42 = kcg_true;
  for (i2 = 0; i2 < 5; i2++) {
    outC->_L43[i2] = 0.0;
  }
  outC->_L44 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L32 = 0;
  outC->_L19 = kcg_true;
  outC->_L20 = 0.0;
  outC->_L21 = 0.0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L22[i3] = 0.0;
  }
  outC->_L23 = 0.0;
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = 0.0;
  outC->_L28 = 0.0;
  outC->_L29 = kcg_true;
  outC->_L30 = 0.0;
  outC->_L31 = kcg_true;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L9 = 0;
  outC->_L8 = 0.0;
  outC->_L7 = 0.0;
  outC->_L6 = 0.0;
  outC->_L5 = 0.0;
  outC->_L4 = 0.0;
  outC->_L3 = kcg_true;
  outC->_L2 = 0.0;
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L1[i4] = 0.0;
  }
  outC->length = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::Length */
void Length_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Length::array_mm_local */ array_real_5 *array_mm_local,
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_real_5(&outC->_L1, array_mm_local);
  outC->_L2 = outC->_L1[0];
  outC->_L4 = - 1.0;
  outC->_L3 = outC->_L2 != outC->_L4;
  outC->_L5 = outC->_L1[1];
  outC->_L12 = outC->_L5 == outC->_L4;
  outC->_L6 = outC->_L1[2];
  outC->_L13 = outC->_L6 == outC->_L4;
  outC->_L7 = outC->_L1[3];
  outC->_L14 = outC->_L7 == outC->_L4;
  outC->_L8 = outC->_L1[4];
  outC->_L15 = outC->_L8 == outC->_L4;
  outC->_L11 = outC->_L3 & outC->_L12 & outC->_L13 & outC->_L14 & outC->_L15;
  outC->_L17 = 1;
  kcg_copy_array_real_5(&outC->_L22, array_mm_local);
  outC->_L27 = outC->_L22[0];
  outC->_L20 = - 1.0;
  outC->_L25 = outC->_L27 != outC->_L20;
  outC->_L23 = outC->_L22[1];
  outC->_L26 = outC->_L23 != outC->_L20;
  outC->_L30 = outC->_L22[2];
  outC->_L31 = outC->_L30 == outC->_L20;
  outC->_L21 = outC->_L22[3];
  outC->_L19 = outC->_L21 == outC->_L20;
  outC->_L28 = outC->_L22[4];
  outC->_L29 = outC->_L28 == outC->_L20;
  outC->_L24 = outC->_L25 & outC->_L26 & outC->_L31 & outC->_L19 & outC->_L29;
  outC->_L32 = 2;
  kcg_copy_array_real_5(&outC->_L43, array_mm_local);
  outC->_L39 = outC->_L43[0];
  outC->_L37 = - 1.0;
  outC->_L42 = outC->_L39 != outC->_L37;
  outC->_L36 = outC->_L43[1];
  outC->_L40 = outC->_L36 != outC->_L37;
  outC->_L38 = outC->_L43[2];
  outC->_L41 = outC->_L38 != outC->_L37;
  outC->_L35 = outC->_L43[3];
  outC->_L45 = outC->_L35 == outC->_L37;
  outC->_L33 = outC->_L43[4];
  outC->_L34 = outC->_L33 == outC->_L37;
  outC->_L44 = outC->_L42 & outC->_L40 & outC->_L41 & outC->_L45 & outC->_L34;
  outC->_L47 = 3;
  kcg_copy_array_real_5(&outC->_L60, array_mm_local);
  outC->_L61 = outC->_L60[0];
  outC->_L52 = - 1.0;
  outC->_L51 = outC->_L61 != outC->_L52;
  outC->_L59 = outC->_L60[1];
  outC->_L54 = outC->_L59 != outC->_L52;
  outC->_L50 = outC->_L60[2];
  outC->_L56 = outC->_L50 != outC->_L52;
  outC->_L49 = outC->_L60[3];
  outC->_L57 = outC->_L49 != outC->_L52;
  outC->_L53 = outC->_L60[4];
  outC->_L55 = outC->_L53 == outC->_L52;
  outC->_L58 = outC->_L51 & outC->_L54 & outC->_L56 & outC->_L57 & outC->_L55;
  outC->_L62 = 4;
  kcg_copy_array_real_5(&outC->_L65, array_mm_local);
  outC->_L70 = outC->_L65[0];
  outC->_L69 = - 1.0;
  outC->_L74 = outC->_L70 != outC->_L69;
  outC->_L68 = outC->_L65[1];
  outC->_L73 = outC->_L68 != outC->_L69;
  outC->_L71 = outC->_L65[2];
  outC->_L72 = outC->_L71 != outC->_L69;
  outC->_L64 = outC->_L65[3];
  outC->_L66 = outC->_L64 != outC->_L69;
  outC->_L75 = outC->_L65[4];
  outC->_L76 = outC->_L75 != outC->_L69;
  outC->_L67 = outC->_L74 & outC->_L73 & outC->_L72 & outC->_L66 & outC->_L76;
  outC->_L77 = 5;
  outC->_L78 = 0;
  /* 5 */ if (outC->_L67) {
    outC->_L63 = outC->_L77;
  }
  else {
    outC->_L63 = outC->_L78;
  }
  /* 4 */ if (outC->_L58) {
    outC->_L48 = outC->_L62;
  }
  else {
    outC->_L48 = outC->_L63;
  }
  /* 3 */ if (outC->_L44) {
    outC->_L46 = outC->_L47;
  }
  else {
    outC->_L46 = outC->_L48;
  }
  /* 2 */ if (outC->_L24) {
    outC->_L18 = outC->_L32;
  }
  else {
    outC->_L18 = outC->_L46;
  }
  /* 1 */ if (outC->_L11) {
    outC->_L9 = outC->_L17;
  }
  else {
    outC->_L9 = outC->_L18;
  }
  outC->length = outC->_L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Length_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

