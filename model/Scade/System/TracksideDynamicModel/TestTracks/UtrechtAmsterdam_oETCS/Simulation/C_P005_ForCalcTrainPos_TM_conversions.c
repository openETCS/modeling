/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

void C_P005_ForCalcTrainPos_reset_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC)
{
  kcg_int i;
  
  for (i = 0; i < 4; i++) {
    /* 1 */ C_P005_LinkedBGs_reset_TM_conversions(&outC->Context_1[i]);
  }
}

/* TM_conversions::C_P005_ForCalcTrainPos */
void C_P005_ForCalcTrainPos_TM_conversions(
  /* TM_conversions::C_P005_ForCalcTrainPos::P005_in */P005_OBU_T_TM *P005_in,
  /* TM_conversions::C_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_bool noname;
  L_PACKET _4_noname;
  N_ITER _5_noname;
  
  kcg_copy_P005_OBU_T_TM(&outC->_L2, P005_in);
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->_L11, &outC->_L2.sections);
  outC->_L10 = outC->_L2.n_iter;
  outC->_L9 = outC->_L2.q_scale;
  outC->_L8 = outC->_L2.l_packet;
  outC->_L7 = outC->_L2.q_dir;
  outC->_L1 = LRBG;
  for (i3 = 0; i3 < 4; i3++) {
    outC->_L22[i3] = outC->_L1;
  }
  for (i2 = 0; i2 < 4; i2++) {
    outC->_L21[i2] = outC->_L9;
  }
  for (i1 = 0; i1 < 4; i1++) {
    outC->_L20[i1] = outC->_L7;
  }
  _5_noname = outC->_L10;
  _4_noname = outC->_L8;
  kcg_copy_array__5463(&outC->_L18, (array__5463 *) &outC->_L11[0]);
  outC->_L6 = outC->_L2.valid;
  noname = outC->_L6;
  for (i = 0; i < 4; i++) {
    /* 1 */
    C_P005_LinkedBGs_TM_conversions(
      outC->_L22[i],
      outC->_L20[i],
      outC->_L21[i],
      &outC->_L18[i],
      &outC->Context_1[i]);
    kcg_copy_LinkedBG_T_BG_Types_Pkg(
      &outC->_L4[i],
      &outC->Context_1[i].LinkedBGsOUT);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_ForCalcTrainPos_TM_conversions.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

