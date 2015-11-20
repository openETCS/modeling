/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU */
void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::P003_onbaord_out */P003_OBU_T_TM *P003_onbaord_out)
{
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L59 */
  static P003_OBU_nid_c_sectionlist_enum_T_TM _L59;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU::_L60 */
  static N_ITER _L60;
  
  (*P003_onbaord_out).v_nvonsight = (*P003V1_onboard).v_nvonsight;
  (*P003_onbaord_out).v_nvlimsuperv = (*PermanentDataP003).v_nvlimsuperv;
  (*P003_onbaord_out).v_nvunfit = (*P003_onbaord_out).v_nvonsight;
  (*P003_onbaord_out).valid = (*P003V1_onboard).valid;
  (*P003_onbaord_out).nid_packet = 3;
  (*P003_onbaord_out).q_dir = (*P003V1_onboard).q_dir;
  (*P003_onbaord_out).q_scale = (*P003V1_onboard).q_scale;
  (*P003_onbaord_out).d_validnv = (*P003V1_onboard).d_validnv;
  (*P003_onbaord_out).v_nvshunt = (*P003V1_onboard).v_nvshunt;
  (*P003_onbaord_out).v_nvstff = (*P003V1_onboard).v_nvstff;
  (*P003_onbaord_out).v_nvrel = (*P003V1_onboard).v_nvrel;
  (*P003_onbaord_out).d_nvroll = (*P003V1_onboard).d_nvroll;
  (*P003_onbaord_out).q_nvsbtsmperm = (*P003V1_onboard).q_nvsbtsmperm;
  (*P003_onbaord_out).q_nvemrrls = (*P003V1_onboard).q_nvemrrls;
  (*P003_onbaord_out).q_nvguiperm = (*P203V1_onboard).q_nvguiperm;
  (*P003_onbaord_out).q_nvsbfbperm = (*P203V1_onboard).q_nvsbfbperm;
  (*P003_onbaord_out).q_nvinhsnicperm = (*P203V1_onboard).q_nvinhsnicperm;
  (*P003_onbaord_out).v_nvallowovtrp = (*P003V1_onboard).v_nvallowovtrp;
  (*P003_onbaord_out).v_nvsupovtrp = (*P003V1_onboard).v_nvsopovtrp;
  (*P003_onbaord_out).d_nvovtrp = (*P003V1_onboard).d_nvovtrp;
  (*P003_onbaord_out).t_nvovtrp = (*P003V1_onboard).t_nvovtrp;
  (*P003_onbaord_out).d_nvpotrp = (*P003V1_onboard).d_nvpotrp;
  (*P003_onbaord_out).m_nvcontact = (*P003V1_onboard).m_nvcontact;
  (*P003_onbaord_out).t_nvcontact = (*P003V1_onboard).t_nvcontact;
  (*P003_onbaord_out).m_nvderun = (*P003V1_onboard).m_nvderun;
  (*P003_onbaord_out).d_nvstff = (*P003V1_onboard).d_nvstff;
  (*P003_onbaord_out).q_nvdriver_adhes = (*P003V1_onboard).q_nvdriver_adhes;
  (*P003_onbaord_out).a_nvmaxredadh1 = (*P203V1_onboard).a_nvmaxredadh1;
  (*P003_onbaord_out).a_nvmaxredadh2 = (*P203V1_onboard).a_nvmaxredadh2;
  (*P003_onbaord_out).a_nvmaxredadh3 = (*P203V1_onboard).a_nvmaxredadh3;
  (*P003_onbaord_out).q_nvlocacc = (*PermanentDataP003).q_nvlocacc;
  (*P003_onbaord_out).m_nvavadh = (*P203V1_onboard).m_nvavadh;
  (*P003_onbaord_out).m_nvebcl = (*P203V1_onboard).m_nvebcl;
  (*P003_onbaord_out).q_nvkint = (*P203V1_onboard).q_nvkint;
  (*P003_onbaord_out).q_nvkvintset = (*P203V1_onboard).q_nvkvintset;
  (*P003_onbaord_out).a_nvp12 = (*P203V1_onboard).a_nvp12;
  (*P003_onbaord_out).a_nvp23 = (*P203V1_onboard).a_nvp23;
  (*P003_onbaord_out).v_nvkvint = (*P203V1_onboard).v_nvkvint;
  (*P003_onbaord_out).m_nvkvint_12 = (*P203V1_onboard).m_nvkvint_12;
  (*P003_onbaord_out).m_nvkvint_23 = (*P203V1_onboard).m_nvkvint_23;
  (*P003_onbaord_out).n_iter_n = (*P203V1_onboard).n_iter_n;
  kcg_copy_P003_OBU_n_sectionlist_enum_T_TM(
    &(*P003_onbaord_out).n_iter_n_list,
    &(*P203V1_onboard).n_iter_n_list);
  (*P003_onbaord_out).n_iter_k = (*P203V1_onboard).n_iter_k;
  kcg_copy_P003_OBU_k_sectionlist_enum_T_TM(
    &(*P003_onbaord_out).n_iter_k_list,
    &(*P203V1_onboard).n_iter_k_list);
  (*P003_onbaord_out).l_nvkrint = (*P203V1_onboard).l_nvkrint;
  (*P003_onbaord_out).m_nvkrint = (*P203V1_onboard).m_nvkrint;
  (*P003_onbaord_out).n_iter_l = (*P203V1_onboard).n_iter_l;
  kcg_copy_P003_OBU_l_sectionlist_enum_T_TM(
    &(*P003_onbaord_out).n_iter_l_list,
    &(*P203V1_onboard).n_iter_l_list);
  (*P003_onbaord_out).m_nvktint = (*P203V1_onboard).m_nvktint;
  /* 1 */
  C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
    P003V1_onboard,
    &(*P003_onbaord_out).nid_c,
    &_L60,
    &_L59);
  (*P003_onbaord_out).n_iter_nid_c = _L60;
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &(*P003_onbaord_out).nid_c_list,
    &_L59);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

