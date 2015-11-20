/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P005_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P005 */
void Send_P005_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P005::B_data_in */ CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P005::P005 */ P005_trackside_int_T_TM *P005,
  /* MessageLibBaseline2::Send_P005::B_data_out */ CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  /* MessageLibBaseline2::Send_P005 */
  static CompressedPackets_T_Common_Types_Pkg op_call;
  /* MessageLibBaseline2::Send_P005 */
  static kcg_bool _1_op_call;
  /* MessageLibBaseline2::Send_P005 */
  static kcg_bool ck_every;
  static kcg_bool noname;
  /* MessageLibBaseline2::Send_P005::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* MessageLibBaseline2::Send_P005::_L4 */
  static P005_trackside_int_T_TM _L4;
  /* MessageLibBaseline2::Send_P005::_L8 */
  static kcg_bool _L8;
  /* MessageLibBaseline2::Send_P005::_L6 */
  static kcg_bool _L6;
  /* MessageLibBaseline2::Send_P005::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* MessageLibBaseline2::Send_P005::_L5 */
  static kcg_bool _L5;
  
  kcg_copy_P005_trackside_int_T_TM(&_L4, P005);
  _L5 = _L4.valid;
  ck_every = _L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, B_data_in);
  /* ck_Send_P005 */ if (ck_every) {
    /* 1 */ Write_P005_TM_trackside(&_L4, &_L3, &_1_op_call, &op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &_L3);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, &_L7);
  _L8 = kcg_false;
  /* ck_Send_P005 */ if (ck_every) {
    _L6 = _1_op_call;
  }
  else {
    _L6 = _L8;
  }
  noname = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P005_MessageLibBaseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

