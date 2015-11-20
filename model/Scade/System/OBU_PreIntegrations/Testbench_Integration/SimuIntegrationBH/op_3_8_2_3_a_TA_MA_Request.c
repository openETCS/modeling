/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_8_2_3_a_init_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  outC->rem_preindicationLoc = 0;
  outC->triggerMA = kcg_true;
  outC->exception = kcg_true;
  /* 1 */ RisingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_8_2_3_a_reset_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::op_3_8_2_3_a */
void op_3_8_2_3_a_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_a::t_mar */ T_MAR t_mar,
  /* TA_MA_Request::op_3_8_2_3_a::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* TA_MA_Request::op_3_8_2_3_a::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  /* TA_MA_Request::op_3_8_2_3_a::preindicationLoc */
  static L_internal_Type_Obu_BasicTypes_Pkg last_preindicationLoc;
  /* TA_MA_Request::op_3_8_2_3_a::_L4 */
  static odometry_T_Obu_BasicTypes_Pkg _L4;
  /* TA_MA_Request::op_3_8_2_3_a::_L2 */
  static T_MAR _L2;
  /* TA_MA_Request::op_3_8_2_3_a::_L1 */
  static trainPosition_T_TrainPosition_Types_Pck _L1;
  /* TA_MA_Request::op_3_8_2_3_a::_L5 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L5;
  /* TA_MA_Request::op_3_8_2_3_a::_L7 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L7;
  /* TA_MA_Request::op_3_8_2_3_a::_L8 */
  static kcg_int _L8;
  /* TA_MA_Request::op_3_8_2_3_a::_L9 */
  static OdometrySpeeds_T_Obu_BasicTypes_Pkg _L9;
  /* TA_MA_Request::op_3_8_2_3_a::_L10 */
  static kcg_real _L10;
  /* TA_MA_Request::op_3_8_2_3_a::_L11 */
  static kcg_real _L11;
  /* TA_MA_Request::op_3_8_2_3_a::_L17 */
  static kcg_real _L17;
  /* TA_MA_Request::op_3_8_2_3_a::_L19 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L19;
  /* TA_MA_Request::op_3_8_2_3_a::_L21 */
  static kcg_bool _L21;
  /* TA_MA_Request::op_3_8_2_3_a::_L20 */
  static kcg_real _L20;
  /* TA_MA_Request::op_3_8_2_3_a::_L27 */
  static kcg_real _L27;
  /* TA_MA_Request::op_3_8_2_3_a::_L29 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L29;
  /* TA_MA_Request::op_3_8_2_3_a::_L30 */
  static kcg_int _L30;
  /* TA_MA_Request::op_3_8_2_3_a::_L31 */
  static kcg_bool _L31;
  /* TA_MA_Request::op_3_8_2_3_a::_L33 */
  static kcg_bool _L33;
  /* TA_MA_Request::op_3_8_2_3_a::_L34 */
  static kcg_bool _L34;
  /* TA_MA_Request::op_3_8_2_3_a::_L35 */
  static kcg_bool _L35;
  /* TA_MA_Request::op_3_8_2_3_a::_L36 */
  static kcg_bool _L36;
  /* TA_MA_Request::op_3_8_2_3_a::_L37 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L37;
  /* TA_MA_Request::op_3_8_2_3_a::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L4, odometry);
  _L2 = t_mar;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L1, trainPosition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L5, &_L1.trainPosition);
  _L7 = _L5.d_max;
  _L37 = preindicationLoc;
  _L29 = _L5.nominal;
  _L30 = _L7 + _L29;
  _L8 = _L37 - _L30;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_L9, &_L4.speed);
  _L10 = (kcg_real) _L8;
  _L19 = _L9.v_upper;
  _L11 = (kcg_real) _L19;
  _L17 = (kcg_real) _L2;
  /* last_init_ck_preindicationLoc */ if (outC->init) {
    last_preindicationLoc = cLocation_TA_MA_Request;
  }
  else {
    last_preindicationLoc = outC->rem_preindicationLoc;
  }
  _L38 = last_preindicationLoc;
  _L33 = _L38 != _L37;
  /* 1 */ RisingEdge_digital(_L33, &outC->Context_1);
  _L34 = outC->Context_1.RE_Output;
  _L35 = !_L34;
  _L27 = - 1.0;
  /* 1 */ DIV_real_XCP_numeric(_L10, _L11, _L27, &_L20, &_L21);
  _L31 = _L17 >= _L20;
  _L36 = _L35 & _L31;
  outC->triggerMA = _L36;
  outC->exception = _L21;
  outC->rem_preindicationLoc = preindicationLoc;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_a_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

