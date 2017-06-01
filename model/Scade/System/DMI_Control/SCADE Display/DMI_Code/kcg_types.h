/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config P:/modeling/model/Scade/System/DMI_Control/SCADE Display/DMI_Code/config.txt
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */
#ifndef _BHVR_KCG_TYPES_H_
#define _BHVR_KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./aol_kcg_user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* truthtables::TruthTableValues */
typedef enum BHVR_kcg_tag_TruthTableValues_truthtables {
  BHVR_T_truthtables,
  BHVR_F_truthtables,
  BHVR_X_truthtables
} BHVR_TruthTableValues_truthtables;
/* ButtonBehaviour::SM1 */
typedef enum BHVR_kcg_tag_SSM_TR_SM1 {
  BHVR_SSM_TR_no_trans_SM1,
  BHVR_SSM_TR_Released_1_SM1,
  BHVR_SSM_TR_Pressed_1_SM1
} BHVR_SSM_TR_SM1;
/* ButtonBehaviour::SM1 */
typedef enum BHVR_kcg_tag_SSM_ST_SM1 {
  BHVR_SSM_st_Released_SM1,
  BHVR_SSM_st_Pressed_SM1
} BHVR_SSM_ST_SM1;
/* lut::LutIndex */
typedef struct BHVR_kcg_tag_LutIndex_lut {
  kcg_int k;
  kcg_real f;
} BHVR_LutIndex_lut;

#ifndef BHVR_kcg_copy_LutIndex_lut
#define BHVR_kcg_copy_LutIndex_lut(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BHVR_LutIndex_lut)))
#endif /* BHVR_kcg_copy_LutIndex_lut */

#ifdef BHVR_kcg_use_LutIndex_lut
#ifndef BHVR_kcg_comp_LutIndex_lut
extern kcg_bool BHVR_kcg_comp_LutIndex_lut(
  BHVR_LutIndex_lut *kcg_c1,
  BHVR_LutIndex_lut *kcg_c2);
#endif /* BHVR_kcg_comp_LutIndex_lut */
#endif /* BHVR_kcg_use_LutIndex_lut */

#endif /* _BHVR_KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

