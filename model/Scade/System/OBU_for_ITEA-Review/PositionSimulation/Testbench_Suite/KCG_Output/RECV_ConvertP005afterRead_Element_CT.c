/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertP005afterRead_Element_CT.h"

/* RECV_ConvertP005afterRead_Element_CT */
void RECV_ConvertP005afterRead_Element_CT(
  /* RECV_ConvertP005afterRead_Element_CT::LRBG */ kcg_int LRBG,
  /* RECV_ConvertP005afterRead_Element_CT::Common */ Array4 *Common,
  /* RECV_ConvertP005afterRead_Element_CT::Element */ TM_P005E_array_T *Element,
  /* RECV_ConvertP005afterRead_Element_CT::valid_metadata */ kcg_bool valid_metadata,
  /* RECV_ConvertP005afterRead_Element_CT::n_section */ kcg_int n_section,
  /* RECV_ConvertP005afterRead_Element_CT::Linked_BG */ LinkedBG_T_BG_Types_Pkg *Linked_BG)
{
  (*Linked_BG).nid_LRBG = LRBG;
  (*Linked_BG).d_link = (*Element)[0];
  (*Linked_BG).nid_c = (*Element)[2];
  (*Linked_BG).nid_bg = (*Element)[3];
  (*Linked_BG).q_locacc = (*Element)[6];
  (*Linked_BG).valid = /* 1 */
    TOOLS_evaluate_N_ITER(valid_metadata, n_section, (*Common)[3]);
  (*Linked_BG).q_dir = /* 1 */ TOOLS_Int_to_Q_DIR((*Common)[0]);
  (*Linked_BG).q_scale = /* 1 */ TOOLS_Int_to_Q_QSCALE((*Common)[2]);
  (*Linked_BG).q_newcountry = /* 2 */ TOOLS_Int_to_Q_NEWCOUNTRY((*Element)[1]);
  (*Linked_BG).q_linkorientation = /* 1 */
    TOOLS_Int_to_Q_LINKORIENTATION((*Element)[4]);
  (*Linked_BG).q_linkreaction = /* 1 */
    TOOLS_Int_to_Q_LINKREACTION((*Element)[5]);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ConvertP005afterRead_Element_CT.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

