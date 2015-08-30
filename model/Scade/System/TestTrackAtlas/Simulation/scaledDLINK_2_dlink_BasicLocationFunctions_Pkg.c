/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

void scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC)
{
}

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */Q_LOCACC q_locacc,
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC)
{
  outC->_L3 = q_locacc;
  outC->_L11 = cQLOCACC_resolution_TrainPosition_Types_Pck;
  outC->_L15 = outC->_L3 * outC->_L11;
  outC->_L25 = - outC->_L15;
  outC->_L1 = q_scale;
  outC->_L2 = d_link;
  outC->_L8 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  outC->_L12 = outC->_L2 * outC->_L8;
  outC->_L10 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  outC->_L13 = outC->_L2 * outC->_L10;
  outC->_L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  outC->_L14 = outC->_L2 * outC->_L9;
  switch (outC->_L1) {
    case Q_SCALE_10_cm_scale :
      outC->_L7 = outC->_L12;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L7 = outC->_L13;
      break;
    case Q_SCALE_10_m_scale :
      outC->_L7 = outC->_L14;
      break;
    
  }
  outC->_L22.nominal = outC->_L7;
  outC->_L22.d_min = outC->_L25;
  outC->_L22.d_max = outC->_L15;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

