/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"

void C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC)
{
  /* 1 */
  C_P003V1_OBU_P003_OBU_con_reset_TM_conversions_baseline2(&outC->Context_1);
}

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU */
void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC)
{
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L76, P203V1_onboard);
  outC->_L223 = outC->_L76.m_nvktint;
  kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(
    &outC->_L222,
    &outC->_L76.n_iter_l_list);
  outC->_L221 = outC->_L76.n_iter_l;
  outC->_L220 = outC->_L76.m_nvkrint;
  outC->_L219 = outC->_L76.l_nvkrint;
  kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(
    &outC->_L218,
    &outC->_L76.n_iter_k_list);
  outC->_L217 = outC->_L76.n_iter_k;
  kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(
    &outC->_L216,
    &outC->_L76.n_iter_n_list);
  outC->_L215 = outC->_L76.n_iter_n;
  outC->_L214 = outC->_L76.m_nvkvint_23;
  outC->_L213 = outC->_L76.m_nvkvint_12;
  outC->_L212 = outC->_L76.v_nvkvint;
  outC->_L211 = outC->_L76.a_nvp12;
  outC->_L210 = outC->_L76.a_nvp23;
  outC->_L209 = outC->_L76.q_nvkvintset;
  outC->_L208 = outC->_L76.q_nvkint;
  outC->_L207 = outC->_L76.m_nvebcl;
  outC->_L206 = outC->_L76.m_nvavadh;
  outC->_L205 = outC->_L76.a_nvmaxredadh3;
  outC->_L204 = outC->_L76.a_nvmaxredadh2;
  outC->_L147 = outC->_L76.a_nvmaxredadh1;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L54, P003V1_onboard);
  outC->_L146 = outC->_L54.q_nvdriver_adhes;
  outC->_L145 = outC->_L54.d_nvstff;
  outC->_L144 = outC->_L54.m_nvderun;
  outC->_L143 = outC->_L54.t_nvcontact;
  outC->_L142 = outC->_L54.m_nvcontact;
  outC->_L141 = outC->_L54.d_nvpotrp;
  outC->_L140 = outC->_L54.t_nvovtrp;
  outC->_L139 = outC->_L54.d_nvovtrp;
  outC->_L138 = outC->_L54.v_nvsopovtrp;
  outC->_L137 = outC->_L54.v_nvallowovtrp;
  outC->_L80 = outC->_L76.q_nvinhsnicperm;
  outC->_L79 = outC->_L76.q_nvsbfbperm;
  kcg_copy_P003_permanent_data_T_TM_baseline2(&outC->_L65, PermanentDataP003);
  outC->_L78 = outC->_L65.q_nvlocacc;
  outC->_L77 = outC->_L76.q_nvguiperm;
  outC->_L75 = outC->_L54.q_nvemrrls;
  outC->_L74 = outC->_L54.q_nvsbtsmperm;
  outC->_L73 = outC->_L54.d_nvroll;
  outC->_L72 = outC->_L54.v_nvrel;
  outC->_L71 = outC->_L54.v_nvonsight;
  outC->_L70 = outC->_L65.v_nvlimsuperv;
  outC->_L64 = outC->_L54.v_nvonsight;
  outC->_L63 = outC->_L54.v_nvstff;
  outC->_L62 = outC->_L54.v_nvshunt;
  /* 1 */
  C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2(
    &outC->_L54,
    &outC->Context_1);
  outC->_L61 = outC->Context_1.nid_c1;
  outC->_L60 = outC->Context_1.n_iter_out;
  kcg_copy__5_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->_L59,
    &outC->Context_1.nid_c_list);
  outC->_L58 = outC->_L54.d_validnv;
  outC->_L57 = outC->_L54.q_scale;
  outC->_L55 = outC->_L54.q_dir;
  outC->_L53 = outC->_L54.valid;
  outC->_L52 = 3;
  outC->_L50.valid = outC->_L53;
  outC->_L50.nid_packet = outC->_L52;
  outC->_L50.q_dir = outC->_L55;
  outC->_L50.q_scale = outC->_L57;
  outC->_L50.d_validnv = outC->_L58;
  outC->_L50.nid_c = outC->_L61;
  outC->_L50.n_iter_nid_c = outC->_L60;
  kcg_copy__5_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->_L50.nid_c_list,
    &outC->_L59);
  outC->_L50.v_nvshunt = outC->_L62;
  outC->_L50.v_nvstff = outC->_L63;
  outC->_L50.v_nvonsight = outC->_L64;
  outC->_L50.v_nvlimsuperv = outC->_L70;
  outC->_L50.v_nvunfit = outC->_L71;
  outC->_L50.v_nvrel = outC->_L72;
  outC->_L50.d_nvroll = outC->_L73;
  outC->_L50.q_nvsbtsmperm = outC->_L74;
  outC->_L50.q_nvemrrls = outC->_L75;
  outC->_L50.q_nvguiperm = outC->_L77;
  outC->_L50.q_nvsbfbperm = outC->_L79;
  outC->_L50.q_nvinhsnicperm = outC->_L80;
  outC->_L50.v_nvallowovtrp = outC->_L137;
  outC->_L50.v_nvsupovtrp = outC->_L138;
  outC->_L50.d_nvovtrp = outC->_L139;
  outC->_L50.t_nvovtrp = outC->_L140;
  outC->_L50.d_nvpotrp = outC->_L141;
  outC->_L50.m_nvcontact = outC->_L142;
  outC->_L50.t_nvcontact = outC->_L143;
  outC->_L50.m_nvderun = outC->_L144;
  outC->_L50.d_nvstff = outC->_L145;
  outC->_L50.q_nvdriver_adhes = outC->_L146;
  outC->_L50.a_nvmaxredadh1 = outC->_L147;
  outC->_L50.a_nvmaxredadh2 = outC->_L204;
  outC->_L50.a_nvmaxredadh3 = outC->_L205;
  outC->_L50.q_nvlocacc = outC->_L78;
  outC->_L50.m_nvavadh = outC->_L206;
  outC->_L50.m_nvebcl = outC->_L207;
  outC->_L50.q_nvkint = outC->_L208;
  outC->_L50.q_nvkvintset = outC->_L209;
  outC->_L50.a_nvp12 = outC->_L211;
  outC->_L50.a_nvp23 = outC->_L210;
  outC->_L50.v_nvkvint = outC->_L212;
  outC->_L50.m_nvkvint_12 = outC->_L213;
  outC->_L50.m_nvkvint_23 = outC->_L214;
  outC->_L50.n_iter_n = outC->_L215;
  kcg_copy_P003_OBU_n_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_n_list,
    &outC->_L216);
  outC->_L50.n_iter_k = outC->_L217;
  kcg_copy_P003_OBU_k_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_k_list,
    &outC->_L218);
  outC->_L50.l_nvkrint = outC->_L219;
  outC->_L50.m_nvkrint = outC->_L220;
  outC->_L50.n_iter_l = outC->_L221;
  kcg_copy_P003_OBU_l_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_l_list,
    &outC->_L222);
  outC->_L50.m_nvktint = outC->_L223;
  kcg_copy_P003_OBU_T_TM(&outC->P003_onbaord_out, &outC->_L50);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

