/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU */
void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003V1_onboard */ P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::PermanentDataP003 */ P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003_onbaord_out */ P003_OBU_T_TM *P003_onbaord_out)
{
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L50 */
  static P003_OBU_T_TM _L50;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L52 */
  static kcg_int _L52;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L53 */
  static kcg_bool _L53;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L54 */
  static P003V1_OBU_T_TM_baseline2 _L54;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L55 */
  static Q_DIR _L55;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L57 */
  static Q_SCALE _L57;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L58 */
  static D_VALIDNV _L58;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L59 */
  static P003_OBU_nid_c_sectionlist_enum_T_TM _L59;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L60 */
  static N_ITER _L60;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L61 */
  static NID_C _L61;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L62 */
  static V_NVSHUNT _L62;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L63 */
  static V_NVSTFF _L63;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L64 */
  static V_NVONSIGHT _L64;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L65 */
  static P003_permanent_data_T_TM_baseline2 _L65;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L70 */
  static V_NVLIMSUPERV _L70;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L71 */
  static V_NVONSIGHT _L71;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L72 */
  static V_NVREL _L72;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L73 */
  static D_NVROLL _L73;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L74 */
  static Q_NVSBTSMPERM _L74;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L75 */
  static Q_NVEMRRLS _L75;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L76 */
  static P203V1_OBU_T_TM_baseline2 _L76;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L77 */
  static Q_NVGUIPERM _L77;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L78 */
  static Q_NVLOCACC _L78;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L79 */
  static Q_NVSBFBPERM _L79;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L80 */
  static Q_NVINHSMICPERM _L80;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L137 */
  static V_NVALLOWOVTRP _L137;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L138 */
  static V_NVSUPOVTRP _L138;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L139 */
  static D_NVOVTRP _L139;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L140 */
  static T_NVOVTRP _L140;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L141 */
  static D_NVPOTRP _L141;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L142 */
  static M_NVCONTACT _L142;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L143 */
  static T_NVCONTACT _L143;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L144 */
  static M_NVDERUN _L144;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L145 */
  static D_NVSTFF _L145;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L146 */
  static Q_NVDRIVER_ADHES _L146;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L147 */
  static A_NVMAXREDADH1 _L147;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L204 */
  static A_NVMAXREDADH2 _L204;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L205 */
  static A_NVMAXREDADH3 _L205;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L206 */
  static M_NVAVADH _L206;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L207 */
  static M_NVEBCL _L207;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L208 */
  static Q_NVKINT _L208;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L209 */
  static Q_NVKVINTSET _L209;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L210 */
  static A_NVP23 _L210;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L211 */
  static A_NVP12 _L211;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L212 */
  static V_NVKVINT _L212;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L213 */
  static M_NVKVINT _L213;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L214 */
  static M_NVKVINT _L214;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L215 */
  static N_ITER _L215;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L216 */
  static P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 _L216;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L217 */
  static N_ITER _L217;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L218 */
  static P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 _L218;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L219 */
  static L_NVKRINT _L219;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L220 */
  static M_NVKRINT _L220;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L221 */
  static N_ITER _L221;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L222 */
  static P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 _L222;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L223 */
  static M_NVKTINT _L223;
  
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L54, P003V1_onboard);
  _L53 = _L54.valid;
  _L52 = 3;
  _L55 = _L54.q_dir;
  _L57 = _L54.q_scale;
  _L58 = _L54.d_validnv;
  /* 1 */
  C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
    &_L54,
    &_L61,
    &_L60,
    &_L59);
  _L62 = _L54.v_nvshunt;
  _L63 = _L54.v_nvstff;
  _L64 = _L54.v_nvonsight;
  kcg_copy_P003_permanent_data_T_TM_baseline2(&_L65, PermanentDataP003);
  _L70 = _L65.v_nvlimsuperv;
  _L71 = _L54.v_nvonsight;
  _L72 = _L54.v_nvrel;
  _L73 = _L54.d_nvroll;
  _L74 = _L54.q_nvsbtsmperm;
  _L75 = _L54.q_nvemrrls;
  kcg_copy_P203V1_OBU_T_TM_baseline2(&_L76, P203V1_onboard);
  _L77 = _L76.q_nvguiperm;
  _L79 = _L76.q_nvsbfbperm;
  _L80 = _L76.q_nvinhsnicperm;
  _L137 = _L54.v_nvallowovtrp;
  _L138 = _L54.v_nvsopovtrp;
  _L139 = _L54.d_nvovtrp;
  _L140 = _L54.t_nvovtrp;
  _L141 = _L54.d_nvpotrp;
  _L142 = _L54.m_nvcontact;
  _L143 = _L54.t_nvcontact;
  _L144 = _L54.m_nvderun;
  _L145 = _L54.d_nvstff;
  _L146 = _L54.q_nvdriver_adhes;
  _L147 = _L76.a_nvmaxredadh1;
  _L204 = _L76.a_nvmaxredadh2;
  _L205 = _L76.a_nvmaxredadh3;
  _L78 = _L65.q_nvlocacc;
  _L206 = _L76.m_nvavadh;
  _L207 = _L76.m_nvebcl;
  _L208 = _L76.q_nvkint;
  _L209 = _L76.q_nvkvintset;
  _L211 = _L76.a_nvp12;
  _L210 = _L76.a_nvp23;
  _L212 = _L76.v_nvkvint;
  _L213 = _L76.m_nvkvint_12;
  _L214 = _L76.m_nvkvint_23;
  _L215 = _L76.n_iter_n;
  kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(
    &_L216,
    &_L76.n_iter_n_list);
  _L217 = _L76.n_iter_k;
  kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(
    &_L218,
    &_L76.n_iter_k_list);
  _L219 = _L76.l_nvkrint;
  _L220 = _L76.m_nvkrint;
  _L221 = _L76.n_iter_l;
  kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(
    &_L222,
    &_L76.n_iter_l_list);
  _L223 = _L76.m_nvktint;
  _L50.valid = _L53;
  _L50.nid_packet = _L52;
  _L50.q_dir = _L55;
  _L50.q_scale = _L57;
  _L50.d_validnv = _L58;
  _L50.nid_c = _L61;
  _L50.n_iter_nid_c = _L60;
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(&_L50.nid_c_list, &_L59);
  _L50.v_nvshunt = _L62;
  _L50.v_nvstff = _L63;
  _L50.v_nvonsight = _L64;
  _L50.v_nvlimsuperv = _L70;
  _L50.v_nvunfit = _L71;
  _L50.v_nvrel = _L72;
  _L50.d_nvroll = _L73;
  _L50.q_nvsbtsmperm = _L74;
  _L50.q_nvemrrls = _L75;
  _L50.q_nvguiperm = _L77;
  _L50.q_nvsbfbperm = _L79;
  _L50.q_nvinhsnicperm = _L80;
  _L50.v_nvallowovtrp = _L137;
  _L50.v_nvsupovtrp = _L138;
  _L50.d_nvovtrp = _L139;
  _L50.t_nvovtrp = _L140;
  _L50.d_nvpotrp = _L141;
  _L50.m_nvcontact = _L142;
  _L50.t_nvcontact = _L143;
  _L50.m_nvderun = _L144;
  _L50.d_nvstff = _L145;
  _L50.q_nvdriver_adhes = _L146;
  _L50.a_nvmaxredadh1 = _L147;
  _L50.a_nvmaxredadh2 = _L204;
  _L50.a_nvmaxredadh3 = _L205;
  _L50.q_nvlocacc = _L78;
  _L50.m_nvavadh = _L206;
  _L50.m_nvebcl = _L207;
  _L50.q_nvkint = _L208;
  _L50.q_nvkvintset = _L209;
  _L50.a_nvp12 = _L211;
  _L50.a_nvp23 = _L210;
  _L50.v_nvkvint = _L212;
  _L50.m_nvkvint_12 = _L213;
  _L50.m_nvkvint_23 = _L214;
  _L50.n_iter_n = _L215;
  kcg_copy_P003_OBU_n_sectionlist_enum_T_TM(&_L50.n_iter_n_list, &_L216);
  _L50.n_iter_k = _L217;
  kcg_copy_P003_OBU_k_sectionlist_enum_T_TM(&_L50.n_iter_k_list, &_L218);
  _L50.l_nvkrint = _L219;
  _L50.m_nvkrint = _L220;
  _L50.n_iter_l = _L221;
  kcg_copy_P003_OBU_l_sectionlist_enum_T_TM(&_L50.n_iter_l_list, &_L222);
  _L50.m_nvktint = _L223;
  kcg_copy_P003_OBU_T_TM(P003_onbaord_out, &_L50);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

