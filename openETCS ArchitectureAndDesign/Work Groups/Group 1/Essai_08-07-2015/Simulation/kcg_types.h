/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

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
typedef unsigned char kcg_char;
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

typedef struct { kcg_real Size; kcg_real Pos; } struct__1527;

/* TY_SizePos */
typedef struct__1527 TY_SizePos;

typedef struct { kcg_real EB; kcg_real EB_reduit; } struct__1532;

/* TY_EB_Type */
typedef struct__1532 TY_EB_Type;

typedef struct { kcg_real Distance; kcg_bool Adh; } struct__1537;

/* TY_Adh */
typedef struct__1537 TY_Adh;

typedef struct { kcg_real Distance; kcg_real Value; } struct__1542;

/* TY_DistValue */
typedef struct__1542 TY_DistValue;

typedef TY_DistValue array__1547[2];

typedef TY_Adh array__1550[2];

typedef TY_DistValue array__1553[8];

typedef kcg_real array_real_8[8];

typedef kcg_real array_real_25[25];

typedef array__1553 array__1562[25];

typedef kcg_real array_real_24[24];

typedef kcg_real array_real_1[1];

typedef kcg_real array_real_2[2];

typedef array__1547 array__1574[25];

typedef kcg_bool array_bool_25[25];

typedef kcg_bool array_bool_1[1];

typedef kcg_bool array_bool_24[24];

typedef array__1550 array__1586[25];

typedef TY_EB_Type array__1589[25];

#ifndef kcg_copy_struct__1527
#define kcg_copy_struct__1527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1527)))
#endif /* kcg_copy_struct__1527 */

#ifndef kcg_copy_struct__1532
#define kcg_copy_struct__1532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1532)))
#endif /* kcg_copy_struct__1532 */

#ifndef kcg_copy_struct__1537
#define kcg_copy_struct__1537(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1537)))
#endif /* kcg_copy_struct__1537 */

#ifndef kcg_copy_struct__1542
#define kcg_copy_struct__1542(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1542)))
#endif /* kcg_copy_struct__1542 */

#ifndef kcg_copy_array__1547
#define kcg_copy_array__1547(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1547)))
#endif /* kcg_copy_array__1547 */

#ifndef kcg_copy_array__1550
#define kcg_copy_array__1550(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1550)))
#endif /* kcg_copy_array__1550 */

#ifndef kcg_copy_array__1553
#define kcg_copy_array__1553(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1553)))
#endif /* kcg_copy_array__1553 */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifndef kcg_copy_array_real_25
#define kcg_copy_array_real_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_25)))
#endif /* kcg_copy_array_real_25 */

#ifndef kcg_copy_array__1562
#define kcg_copy_array__1562(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1562)))
#endif /* kcg_copy_array__1562 */

#ifndef kcg_copy_array_real_24
#define kcg_copy_array_real_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_24)))
#endif /* kcg_copy_array_real_24 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array_real_2
#define kcg_copy_array_real_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_2)))
#endif /* kcg_copy_array_real_2 */

#ifndef kcg_copy_array__1574
#define kcg_copy_array__1574(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1574)))
#endif /* kcg_copy_array__1574 */

#ifndef kcg_copy_array_bool_25
#define kcg_copy_array_bool_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_25)))
#endif /* kcg_copy_array_bool_25 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_bool_24
#define kcg_copy_array_bool_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_24)))
#endif /* kcg_copy_array_bool_24 */

#ifndef kcg_copy_array__1586
#define kcg_copy_array__1586(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1586)))
#endif /* kcg_copy_array__1586 */

#ifndef kcg_copy_array__1589
#define kcg_copy_array__1589(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1589)))
#endif /* kcg_copy_array__1589 */

#ifndef kcg_comp_struct__1527
extern kcg_bool kcg_comp_struct__1527(
  struct__1527 *kcg_c1,
  struct__1527 *kcg_c2);
#endif /* kcg_comp_struct__1527 */

#ifndef kcg_comp_struct__1532
extern kcg_bool kcg_comp_struct__1532(
  struct__1532 *kcg_c1,
  struct__1532 *kcg_c2);
#endif /* kcg_comp_struct__1532 */

#ifndef kcg_comp_struct__1537
extern kcg_bool kcg_comp_struct__1537(
  struct__1537 *kcg_c1,
  struct__1537 *kcg_c2);
#endif /* kcg_comp_struct__1537 */

#ifndef kcg_comp_struct__1542
extern kcg_bool kcg_comp_struct__1542(
  struct__1542 *kcg_c1,
  struct__1542 *kcg_c2);
#endif /* kcg_comp_struct__1542 */

#ifndef kcg_comp_array__1547
extern kcg_bool kcg_comp_array__1547(array__1547 *kcg_c1, array__1547 *kcg_c2);
#endif /* kcg_comp_array__1547 */

#ifndef kcg_comp_array__1550
extern kcg_bool kcg_comp_array__1550(array__1550 *kcg_c1, array__1550 *kcg_c2);
#endif /* kcg_comp_array__1550 */

#ifndef kcg_comp_array__1553
extern kcg_bool kcg_comp_array__1553(array__1553 *kcg_c1, array__1553 *kcg_c2);
#endif /* kcg_comp_array__1553 */

#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */

#ifndef kcg_comp_array_real_25
extern kcg_bool kcg_comp_array_real_25(
  array_real_25 *kcg_c1,
  array_real_25 *kcg_c2);
#endif /* kcg_comp_array_real_25 */

#ifndef kcg_comp_array__1562
extern kcg_bool kcg_comp_array__1562(array__1562 *kcg_c1, array__1562 *kcg_c2);
#endif /* kcg_comp_array__1562 */

#ifndef kcg_comp_array_real_24
extern kcg_bool kcg_comp_array_real_24(
  array_real_24 *kcg_c1,
  array_real_24 *kcg_c2);
#endif /* kcg_comp_array_real_24 */

#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */

#ifndef kcg_comp_array_real_2
extern kcg_bool kcg_comp_array_real_2(
  array_real_2 *kcg_c1,
  array_real_2 *kcg_c2);
#endif /* kcg_comp_array_real_2 */

#ifndef kcg_comp_array__1574
extern kcg_bool kcg_comp_array__1574(array__1574 *kcg_c1, array__1574 *kcg_c2);
#endif /* kcg_comp_array__1574 */

#ifndef kcg_comp_array_bool_25
extern kcg_bool kcg_comp_array_bool_25(
  array_bool_25 *kcg_c1,
  array_bool_25 *kcg_c2);
#endif /* kcg_comp_array_bool_25 */

#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */

#ifndef kcg_comp_array_bool_24
extern kcg_bool kcg_comp_array_bool_24(
  array_bool_24 *kcg_c1,
  array_bool_24 *kcg_c2);
#endif /* kcg_comp_array_bool_24 */

#ifndef kcg_comp_array__1586
extern kcg_bool kcg_comp_array__1586(array__1586 *kcg_c1, array__1586 *kcg_c2);
#endif /* kcg_comp_array__1586 */

#ifndef kcg_comp_array__1589
extern kcg_bool kcg_comp_array__1589(array__1589 *kcg_c1, array__1589 *kcg_c2);
#endif /* kcg_comp_array__1589 */

#define kcg_comp_TY_SizePos kcg_comp_struct__1527

#define kcg_copy_TY_SizePos kcg_copy_struct__1527

#define kcg_comp_TY_EB_Type kcg_comp_struct__1532

#define kcg_copy_TY_EB_Type kcg_copy_struct__1532

#define kcg_comp_TY_Adh kcg_comp_struct__1537

#define kcg_copy_TY_Adh kcg_copy_struct__1537

#define kcg_comp_TY_DistValue kcg_comp_struct__1542

#define kcg_copy_TY_DistValue kcg_copy_struct__1542

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

