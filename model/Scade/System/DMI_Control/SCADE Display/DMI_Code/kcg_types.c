/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config P:/modeling/model/Scade/System/DMI_Control/SCADE Display/DMI_Code/config.txt
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

#include "kcg_types.h"

#ifdef BHVR_kcg_use_LutIndex_lut
kcg_bool BHVR_kcg_comp_LutIndex_lut(
  BHVR_LutIndex_lut *kcg_c1,
  BHVR_LutIndex_lut *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->f == kcg_c2->f);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  return kcg_equ;
}
#endif /* BHVR_kcg_use_LutIndex_lut */

/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.c
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

