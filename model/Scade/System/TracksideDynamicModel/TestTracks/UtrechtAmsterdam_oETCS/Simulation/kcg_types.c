/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array_int_500(array_int_500 *kcg_c1, array_int_500 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__1358(array__1358 *kcg_c1, array__1358 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__1350(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1341(struct__1341 *kcg_c1, struct__1341 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainPosCalibrated ==
      kcg_c2->TrainPosCalibrated);
  kcg_equ = kcg_equ & (kcg_c1->OffsetTotal == kcg_c2->OffsetTotal);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos_in == kcg_c2->TrainPos_in);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1350(struct__1350 *kcg_c1, struct__1350 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1361(struct__1361 *kcg_c1, struct__1361 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_500(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_array__1358(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1366(struct__1366 *kcg_c1, struct__1366 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1379(struct__1379 *kcg_c1, struct__1379 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1361(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_struct__1366(&kcg_c1->Header, &kcg_c2->Header);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1384(struct__1384 *kcg_c1, struct__1384 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1379(
      &kcg_c1->BG_Message,
      &kcg_c2->BG_Message);
  kcg_equ = kcg_equ & kcg_comp_struct__1341(
      &kcg_c1->TrainPosRaw,
      &kcg_c2->TrainPosRaw);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1389(struct__1389 *kcg_c1, struct__1389 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Or_Line == kcg_c2->Or_Line);
  kcg_equ = kcg_equ & (kcg_c1->Or_BG == kcg_c2->Or_BG);
  kcg_equ = kcg_equ & (kcg_c1->Pos == kcg_c2->Pos);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1397(struct__1397 *kcg_c1, struct__1397 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->balise_passed == kcg_c2->balise_passed);
  kcg_equ = kcg_equ & (kcg_c1->pig_nom_0 == kcg_c2->pig_nom_0);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos == kcg_c2->TrainPos);
  kcg_equ = kcg_equ & (kcg_c1->engineering_BG_location ==
      kcg_c2->engineering_BG_location);
  kcg_equ = kcg_equ & kcg_comp_struct__1361(&kcg_c1->packets, &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__1366(&kcg_c1->header, &kcg_c2->header);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

