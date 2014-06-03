/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__1026(array__1026 *kcg_c1, array__1026 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__1021(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__1048(array__1048 *kcg_c1, array__1048 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__1043(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__980(struct__980 *kcg_c1, struct__980 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_ORIENTATION == kcg_c2->Q_ORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__989(struct__989 *kcg_c1, struct__989 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__980(
      &kcg_c1->assignment_of_coordinate_system,
      &kcg_c2->assignment_of_coordinate_system);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__993(struct__993 *kcg_c1, struct__993 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__999(struct__999 *kcg_c1, struct__999 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1004(struct__1004 *kcg_c1, struct__1004 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1017(struct__1017 *kcg_c1, struct__1017 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->boolean_ == kcg_c2->boolean_);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1021(struct__1021 *kcg_c1, struct__1021 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1017(&kcg_c1->flag, &kcg_c2->flag);
  kcg_equ = kcg_equ & kcg_comp_struct__1004(&kcg_c1->header, &kcg_c2->header);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1029(struct__1029 *kcg_c1, struct__1029 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->additionalinformation ==
      kcg_c2->additionalinformation);
  kcg_equ = kcg_equ & kcg_comp_array__1026(
      &kcg_c1->headerflag,
      &kcg_c2->headerflag);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1034(struct__1034 *kcg_c1, struct__1034 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1029(
      &kcg_c1->checkedbgmessage,
      &kcg_c2->checkedbgmessage);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1039(struct__1039 *kcg_c1, struct__1039 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Position_1 == kcg_c2->Position_1);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1043(struct__1043 *kcg_c1, struct__1043 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1039(
      &kcg_c1->position,
      &kcg_c2->position);
  kcg_equ = kcg_equ & kcg_comp_struct__1034(
      &kcg_c1->filteredbgmessage,
      &kcg_c2->filteredbgmessage);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

