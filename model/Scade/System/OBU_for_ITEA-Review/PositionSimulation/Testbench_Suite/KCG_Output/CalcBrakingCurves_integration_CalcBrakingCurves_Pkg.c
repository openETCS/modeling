/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"

void CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 25; i++) {
    outC->_L99.valid[i] = kcg_true;
  }
  for (i = 0; i < 25; i++) {
    outC->_L99.accelerations[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->_L99.speeds[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->_L99.distances[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->_L33.valid[i] = kcg_true;
  }
  for (i = 0; i < 25; i++) {
    outC->_L33.accelerations[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->_L33.speeds[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->_L33.distances[i] = 0.0;
  }
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 25; i1++) {
      outC->LOACurves[i].valid[i1] = kcg_true;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->LOACurves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->LOACurves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->LOACurves[i].distances[i1] = 0.0;
    }
  }
  for (i = 0; i < 200; i++) {
    for (i1 = 0; i1 < 25; i1++) {
      outC->MRSPCurves[i].valid[i1] = kcg_true;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->MRSPCurves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->MRSPCurves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->MRSPCurves[i].distances[i1] = 0.0;
    }
  }
  outC->curveCollection.GUI_curve_enabled = kcg_true;
  for (i = 0; i < 25; i++) {
    outC->curveCollection.GUI_curve.valid[i] = kcg_true;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.GUI_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.GUI_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.GUI_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.SvL_EBD_curve.valid[i] = kcg_true;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.SvL_EBD_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.SvL_EBD_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.SvL_EBD_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.EOA_SBD_curve.valid[i] = kcg_true;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.EOA_SBD_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.EOA_SBD_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 25; i++) {
    outC->curveCollection.EOA_SBD_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.LOA_EBD_curves[i].valid[i1] = kcg_true;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.LOA_EBD_curves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.LOA_EBD_curves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.LOA_EBD_curves[i].distances[i1] = 0.0;
    }
  }
  for (i = 0; i < 200; i++) {
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].valid[i1] = kcg_true;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 25; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].distances[i1] = 0.0;
    }
  }
}


void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainPosition */ TrainLocations_real_T_SDM_Types_Pkg *TrainPosition,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  kcg_int i;
  kcg_bool tmp;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L72 */ kcg_int _L72;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L82 */ ParabolaCurve_list_LOA_T_CalcBrakingCurves_types _L82;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L83 */ ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L83;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.GUI_curve,
    (ParabolaCurve_T_CalcBrakingCurves_types *)
      &cEmptyParabolaCurve_CalcBrakingCurves_types);
  outC->curveCollection.GUI_curve_enabled = kcg_false;
  if ((*targetCollection).updatedTargetList) {
    for (i = 0; i < 10; i++) {
      /* 2 */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        A_Safe,
        &(*targetCollection).LOA_targetList[i],
        (*TrainPosition).d_est_frontendPos,
        &tmp,
        &_L82[i]);
      _L72 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L72 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L72; i < 10; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &_L82[i],
      (ParabolaCurve_T_CalcBrakingCurves_types *)
        &emptyParabolaCurve_CalcBrakingCurves_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if ((*targetCollection).updatedTargetList) {
    kcg_copy_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types(
      &outC->LOACurves,
      &_L82);
    for (i = 0; i < 200; i++) {
      /* 1 */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        A_Safe,
        &(*targetCollection).MRSP_targetList[i],
        (*TrainPosition).d_est_frontendPos,
        &tmp,
        &_L83[i]);
      _L72 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    if (outC->init) {
      for (i = 0; i < 10; i++) {
        kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
          &outC->LOACurves[i],
          (ParabolaCurve_T_CalcBrakingCurves_types *)
            &emptyParabolaCurve_CalcBrakingCurves_Pkg);
      }
    }
    _L72 = 0;
  }
  kcg_copy_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types(
    &outC->curveCollection.LOA_EBD_curves,
    &outC->LOACurves);
#ifdef KCG_MAPW_CPY
  
  for (i = _L72; i < 200; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &_L83[i],
      (ParabolaCurve_T_CalcBrakingCurves_types *)
        &emptyParabolaCurve_CalcBrakingCurves_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if ((*targetCollection).updatedTargetList) {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->MRSPCurves,
      &_L83);
    /* 3 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      A_Safe,
      &(*targetCollection).SvL_target,
      (*TrainPosition).d_est_frontendPos,
      &tmp,
      &outC->_L33);
  }
  else if (outC->init) {
    for (i = 0; i < 200; i++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &outC->MRSPCurves[i],
        (ParabolaCurve_T_CalcBrakingCurves_types *)
          &emptyParabolaCurve_CalcBrakingCurves_Pkg);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L33,
      (ParabolaCurve_T_CalcBrakingCurves_types *)
        &emptyParabolaCurve_CalcBrakingCurves_Pkg);
  }
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->curveCollection.MRSP_EBD_curves,
    &outC->MRSPCurves);
  if (outC->init) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L99,
      (ParabolaCurve_T_CalcBrakingCurves_types *)
        &emptyParabolaCurve_CalcBrakingCurves_Pkg);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.EOA_SBD_curve,
    &outC->_L99);
  outC->init = kcg_false;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.SvL_EBD_curve,
    &outC->_L33);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

