/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertP005afterRead_TM_conversions.h"

void RECV_ConvertP005afterRead_reset_TM_conversions(
  outC_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(&outC->_3_Context_1);
  /* 2 */ CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(&outC->Context_2);
  /* 1 */ CAST_Int_to_Q_DIR_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_Q_SCALE_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ TOOLS_evaluate_N_ITER_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::RECV_ConvertP005afterRead_Element_CT */
void RECV_ConvertP005afterRead_TM_conversions(
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::LRBG */NID_LRBG LRBG,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Common */Array4_TM *Common,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Element */P005E_array_T_TM *Element,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::n_section */kcg_int n_section,
  outC_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  kcg_int noname;
  kcg_bool _1_noname;
  
  kcg_copy_Array4_TM(&outC->_L1, Common);
  outC->_L6 = outC->_L1[3];
  outC->_L5 = outC->_L1[2];
  outC->_L4 = outC->_L1[1];
  kcg_copy_P005E_array_T_TM(&outC->_L2, Element);
  outC->_L46 = outC->_L2[6];
  outC->_L28 = outC->_L2[5];
  outC->_L27 = outC->_L2[4];
  outC->_L26 = outC->_L2[3];
  outC->_L25 = outC->_L2[2];
  outC->_L24 = outC->_L2[1];
  outC->_L49 = kcg_true;
  outC->_L41 = valid_metadata;
  outC->_L48 = n_section;
  /* 1 */
  TOOLS_evaluate_N_ITER_TM_conversions(
    outC->_L41,
    outC->_L48,
    outC->_L6,
    &outC->Context_1);
  outC->_L47 = outC->Context_1.valid;
  _1_noname = outC->_L47;
  /* 1 */ CAST_Int_to_Q_SCALE_TM_conversions(outC->_L5, &outC->_1_Context_1);
  outC->_L45 = outC->_1_Context_1.q_scale;
  outC->_L42 = LRBG;
  outC->_L3 = outC->_L1[0];
  /* 1 */ CAST_Int_to_Q_DIR_TM_conversions(outC->_L3, &outC->_2_Context_1);
  outC->_L40 = outC->_2_Context_1.q_dir;
  outC->_L23 = outC->_L2[0];
  /* 2 */ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(outC->_L24, &outC->Context_2);
  outC->_L39 = outC->Context_2.q_newcountry;
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_TM_conversions(outC->_L27, &outC->_3_Context_1);
  outC->_L37 = outC->_3_Context_1.q_linkorientation;
  /* 1 */
  CAST_Int_to_Q_LINKREACTION_TM_conversions(outC->_L28, &outC->_4_Context_1);
  outC->_L36 = outC->_4_Context_1.q_linkreaction;
  outC->_L44.valid = outC->_L49;
  outC->_L44.nid_LRBG = outC->_L42;
  outC->_L44.q_dir = outC->_L40;
  outC->_L44.q_scale = outC->_L45;
  outC->_L44.d_link = outC->_L23;
  outC->_L44.q_newcountry = outC->_L39;
  outC->_L44.nid_c = outC->_L25;
  outC->_L44.nid_bg = outC->_L26;
  outC->_L44.q_linkorientation = outC->_L37;
  outC->_L44.q_linkreaction = outC->_L36;
  outC->_L44.q_locacc = outC->_L46;
  noname = outC->_L4;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->Linked_BG, &outC->_L44);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertP005afterRead_TM_conversions.c
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

