/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_tracksim_compr_TM_conversions.h"

void C_P005_tracksim_compr_reset_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_DIR_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ DeterminePacketSizeInt_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P005_flatten_sections_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P005_tracksim_compr */
void C_P005_tracksim_compr_TM_conversions(
  inC_C_P005_tracksim_compr_TM_conversions *inC,
  outC_C_P005_tracksim_compr_TM_conversions *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  kcg_copy_P005_trackside_TM(&outC->_L1, &inC->P005_from_track);
  kcg_copy_P005_trackide_sectionlist_T_TM(&outC->_L365, &outC->_L1.SECTIONS);
  outC->_L366 = outC->_L1.N_ITER;
  outC->_L367 = outC->_L1.Q_LOCACC;
  outC->_L368 = outC->_L1.Q_LINKREACTION;
  outC->_L369 = outC->_L1.Q_LINKORIENTATION;
  outC->_L370 = outC->_L1.NID_BG;
  outC->_L371 = outC->_L1.NID_C;
  outC->_L219 = outC->_L1.Q_NEWCOUNTRY;
  outC->_L218 = outC->_L1.D_LINK;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L375.D_LINK = outC->_L218;
  outC->_L375.Q_NEWCOUNTRY = outC->_L219;
  outC->_L375.NID_C = outC->_L371;
  outC->_L375.NID_BG = outC->_L370;
  outC->_L375.Q_LINKORIENTATION = outC->_L369;
  outC->_L375.Q_LINKREACTION = outC->_L368;
  outC->_L375.Q_LOCACC = outC->_L367;
  for (i2 = 0; i2 < 1; i2++) {
    kcg_copy__1_P005_trackside_section_TM(&outC->_L386[i2], &outC->_L375);
  }
  kcg_copy_array__496(&outC->_L385[0], &outC->_L386);
  kcg_copy_P005_trackide_sectionlist_T_TM(&outC->_L385[1], &outC->_L365);
  outC->_L373[0] = outC->_L215;
  outC->_L373[1] = outC->_L216;
  outC->_L373[2] = outC->_L217;
  for (i1 = 0; i1 < 1; i1++) {
    outC->_L376[i1] = outC->_L366;
  }
  kcg_copy_array_int_3(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int_1(&outC->_L381[3], &outC->_L376);
  /* 1 */
  C_P005_flatten_sections_TM_lib_internal(&outC->_L385, &outC->Context_1);
  kcg_copy_P005_sections_array_flat_TM(
    &outC->_L380,
    &outC->Context_1.Flattened);
  kcg_copy_array_int_4(&outC->_L384[0], &outC->_L381);
  kcg_copy_P005_sections_array_flat_TM(&outC->_L384[4], &outC->_L380);
  outC->_L336 = 0;
  for (i = 0; i < 272; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_228(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_272(&outC->_L383[228], &outC->_L209);
  /* 1 */
  DeterminePacketSizeInt_TM_lib_internal(
    outC->_L366,
    3 + 1,
    7,
    &outC->_1_Context_1);
  outC->_L379 = outC->_1_Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  /* 1 */ CAST_Int_to_Q_DIR_TM_conversions(outC->_L215, &outC->_2_Context_1);
  outC->_L356 = outC->_2_Context_1.q_dir;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = 0;
  outC->_L205 = 5;
  outC->_L204.nid_packet = outC->_L205;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
    &outC->_L383);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_tracksim_compr_TM_conversions.c
** Generation date: 2015-06-03T19:30:19
*************************************************************$ */

