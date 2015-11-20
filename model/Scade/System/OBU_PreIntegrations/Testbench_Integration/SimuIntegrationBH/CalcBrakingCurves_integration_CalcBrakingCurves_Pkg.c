/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_int i29;
  static kcg_int i28;
  static kcg_int i27;
  static kcg_int i26;
  static kcg_int i25;
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 114; i++) {
    outC->_L99.distances[i] = 0.0;
  }
  for (i1 = 0; i1 < 114; i1++) {
    outC->_L99.speeds[i1] = 0.0;
  }
  for (i2 = 0; i2 < 114; i2++) {
    outC->_L99.accelerations[i2] = 0.0;
  }
  for (i3 = 0; i3 < 114; i3++) {
    outC->_L99.valid[i3] = kcg_true;
  }
  outC->_L98 = kcg_true;
  outC->_L79 = kcg_true;
  for (i4 = 0; i4 < 114; i4++) {
    outC->_L33.distances[i4] = 0.0;
  }
  for (i5 = 0; i5 < 114; i5++) {
    outC->_L33.speeds[i5] = 0.0;
  }
  for (i6 = 0; i6 < 114; i6++) {
    outC->_L33.accelerations[i6] = 0.0;
  }
  for (i7 = 0; i7 < 114; i7++) {
    outC->_L33.valid[i7] = kcg_true;
  }
  for (i12 = 0; i12 < 110; i12++) {
    for (i8 = 0; i8 < 114; i8++) {
      outC->MRSPCurves[i12].distances[i8] = 0.0;
    }
    for (i9 = 0; i9 < 114; i9++) {
      outC->MRSPCurves[i12].speeds[i9] = 0.0;
    }
    for (i10 = 0; i10 < 114; i10++) {
      outC->MRSPCurves[i12].accelerations[i10] = 0.0;
    }
    for (i11 = 0; i11 < 114; i11++) {
      outC->MRSPCurves[i12].valid[i11] = kcg_true;
    }
  }
  for (i17 = 0; i17 < 110; i17++) {
    for (i13 = 0; i13 < 114; i13++) {
      outC->curveCollection.MRSP_EBD_curves[i17].distances[i13] = 0.0;
    }
    for (i14 = 0; i14 < 114; i14++) {
      outC->curveCollection.MRSP_EBD_curves[i17].speeds[i14] = 0.0;
    }
    for (i15 = 0; i15 < 114; i15++) {
      outC->curveCollection.MRSP_EBD_curves[i17].accelerations[i15] = 0.0;
    }
    for (i16 = 0; i16 < 114; i16++) {
      outC->curveCollection.MRSP_EBD_curves[i17].valid[i16] = kcg_true;
    }
  }
  for (i18 = 0; i18 < 114; i18++) {
    outC->curveCollection.EOA_SBD_curve.distances[i18] = 0.0;
  }
  for (i19 = 0; i19 < 114; i19++) {
    outC->curveCollection.EOA_SBD_curve.speeds[i19] = 0.0;
  }
  for (i20 = 0; i20 < 114; i20++) {
    outC->curveCollection.EOA_SBD_curve.accelerations[i20] = 0.0;
  }
  for (i21 = 0; i21 < 114; i21++) {
    outC->curveCollection.EOA_SBD_curve.valid[i21] = kcg_true;
  }
  for (i22 = 0; i22 < 114; i22++) {
    outC->curveCollection.SvL_LoA_EBD_curve.distances[i22] = 0.0;
  }
  for (i23 = 0; i23 < 114; i23++) {
    outC->curveCollection.SvL_LoA_EBD_curve.speeds[i23] = 0.0;
  }
  for (i24 = 0; i24 < 114; i24++) {
    outC->curveCollection.SvL_LoA_EBD_curve.accelerations[i24] = 0.0;
  }
  for (i25 = 0; i25 < 114; i25++) {
    outC->curveCollection.SvL_LoA_EBD_curve.valid[i25] = kcg_true;
  }
  for (i26 = 0; i26 < 114; i26++) {
    outC->curveCollection.GUI_curve.distances[i26] = 0.0;
  }
  for (i27 = 0; i27 < 114; i27++) {
    outC->curveCollection.GUI_curve.speeds[i27] = 0.0;
  }
  for (i28 = 0; i28 < 114; i28++) {
    outC->curveCollection.GUI_curve.accelerations[i28] = 0.0;
  }
  for (i29 = 0; i29 < 114; i29++) {
    outC->curveCollection.GUI_curve.valid[i29] = kcg_true;
  }
  outC->curveCollection.GUI_curve_enabled = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainLocations */ TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Expected */ ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool cond_iterw;
  static kcg_int i4;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types tmp3;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool tmp2;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types tmp1;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool tmp;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types _8_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool _9_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool _7_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool ck_every;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool _10_ck_every;
  static kcg_bool noname;
  static kcg_int _11_noname;
  static kcg_bool _12_noname;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::MRSPCurves */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types last_MRSPCurves;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetsUpdated */
  static kcg_bool targetsUpdated;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::emptyCurve */
  static ParabolaCurve_T_CalcBrakingCurves_types emptyCurve;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L4 */
  static ASafe_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L6 */
  static array_170605 _L6;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L22 */
  static array_real_110 _L22;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L29 */
  static ASafe_T_CalcBrakingCurves_types _L29;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L35 */
  static TargetCollection_T_TargetManagement_types _L35;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L43 */
  static Target_real_T_TargetManagement_types _L43;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L42 */
  static Target_real_T_TargetManagement_types _L42;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L41 */
  static Target_list_MRSP_real_T_TargetManagement_types _L41;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L40 */
  static kcg_bool _L40;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L58 */
  static CurveCollection_T_CalcBrakingCurves_types _L58;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L60 */
  static kcg_bool _L60;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L65 */
  static TrainLocations_real_T_SDM_Types_Pkg _L65;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L71 */
  static L_internal_real_Type_SDM_Types_Pkg _L71;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L72 */
  static kcg_int _L72;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L75 */
  static kcg_bool _L75;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L78 */
  static kcg_bool _L78;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L83 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L83;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L86 */
  static kcg_bool _L86;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L102 */
  static kcg_bool _L102;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L106 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L106;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L109 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L109;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L112 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L112;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L114 */
  static ASafe_T_CalcBrakingCurves_types _L114;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L115 */
  static kcg_bool _L115;
  
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L35, targetCollection);
  _L40 = _L35.updatedTargetList;
  targetsUpdated = _L40;
  _L115 = targetsUpdated;
  ck_every = _L115;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L29, A_Safe);
  kcg_copy_Target_real_T_TargetManagement_types(&_L43, &_L35.SvL_LoA_target);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L65, TrainLocations);
  _L71 = _L65.d_est_frontendPos;
  /* ck_CalcBrakingCurves_integration */ if (ck_every) {
    /* 5 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      &_L29,
      &_L43,
      _L71,
      &_9_op_call,
      &_8_op_call);
  }
  _L78 = targetsUpdated;
  _10_ck_every = _L78;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L114, A_Expected);
  kcg_copy_Target_real_T_TargetManagement_types(&_L42, &_L35.EOA_target);
  /* ck_CalcBrakingCurves_integration */ if (_10_ck_every) {
    /* 3 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      &_L114,
      &_L42,
      _L71,
      &_7_op_call,
      &op_call);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L4, A_Safe);
  /* pow */ for (i6 = 0; i6 < 110; i6++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L6[i6], &_L4);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L41,
    &_L35.MRSP_targetList);
  /* pow */ for (i5 = 0; i5 < 110; i5++) {
    _L22[i5] = _L71;
  }
  _L75 = targetsUpdated;
  /* 1 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&_L112);
  if (_L75) {
    for (i4 = 0; i4 < 110; i4++) {
      /* 1 */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        &_L6[i4],
        &_L41[i4],
        _L22[i4],
        &cond_iterw,
        &_L83[i4]);
      _L72 = i4 + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L72 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i4 = _L72; i4 < 110; i4++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L83[i4], &_L112);
  }
#endif /* KCG_MAPW_CPY */
  
  /* ck_CalcBrakingCurves_integration */ if (_10_ck_every) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp3, &_L112);
    }
    else {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp3, &outC->_L33);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &tmp3);
  }
  _L86 = kcg_false;
  /* ck_CalcBrakingCurves_integration */ if (_10_ck_every) {
    outC->_L79 = _7_op_call;
  }
  else {
    if (outC->init) {
      tmp2 = _L86;
    }
    else {
      tmp2 = outC->_L79;
    }
    outC->_L79 = tmp2;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&emptyCurve, &_L112);
  /* last_init_ck_MRSPCurves */ if (outC->init) {
    /* pow */ for (i = 0; i < 110; i++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &last_MRSPCurves[i],
        &emptyCurve);
    }
  }
  else {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &last_MRSPCurves,
      &outC->MRSPCurves);
  }
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &_L106,
    &last_MRSPCurves);
  /* 1 */ if (_L75) {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(&_L109, &_L83);
  }
  else {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(&_L109, &_L106);
  }
  /* ck_CalcBrakingCurves_integration */ if (ck_every) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &_8_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp1, &_L112);
    }
    else {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp1, &outC->_L99);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &tmp1);
  }
  _L60 = kcg_false;
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &_L58.MRSP_EBD_curves,
    &_L109);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &_L58.EOA_SBD_curve,
    &outC->_L33);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &_L58.SvL_LoA_EBD_curve,
    &outC->_L99);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L58.GUI_curve, &_L112);
  _L58.GUI_curve_enabled = _L60;
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->curveCollection,
    &_L58);
  noname = outC->_L79;
  _11_noname = _L72;
  _L102 = kcg_false;
  /* ck_CalcBrakingCurves_integration */ if (ck_every) {
    outC->_L98 = _9_op_call;
  }
  else {
    if (outC->init) {
      tmp = _L102;
    }
    else {
      tmp = outC->_L98;
    }
    outC->_L98 = tmp;
  }
  _12_noname = outC->_L98;
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->MRSPCurves,
    &_L109);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

