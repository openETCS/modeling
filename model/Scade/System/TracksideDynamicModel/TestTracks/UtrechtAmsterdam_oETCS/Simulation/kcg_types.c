/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array_int_500(array_int_500 *kcg_c1, array_int_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29635(array__29635 *kcg_c1, array__29635 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29627(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3_33(array_int_3_33 *kcg_c1, array_int_3_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_99(array_int_99 *kcg_c1, array_int_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29740(array__29740 *kcg_c1, array__29740 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29728(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29743(array__29743 *kcg_c1, array__29743 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29728(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_33(array_int_2_33 *kcg_c1, array_int_2_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_66(array_int_66 *kcg_c1, array_int_66 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 66; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29774(array__29774 *kcg_c1, array__29774 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29763(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29777(array__29777 *kcg_c1, array__29777 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29763(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_32(array_int_32 *kcg_c1, array_int_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_4_32(array_int_4_32 *kcg_c1, array_int_4_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_4(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_128(array_int_128 *kcg_c1, array_int_128 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29947(array__29947 *kcg_c1, array__29947 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29934(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_7_33(array_int_7_33 *kcg_c1, array_int_7_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_7(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_231(array_int_231 *kcg_c1, array_int_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29995(array__29995 *kcg_c1, array__29995 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29979(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__29998(array__29998 *kcg_c1, array__29998 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29979(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_64(array_int_64 *kcg_c1, array_int_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30026(array__30026 *kcg_c1, array__30026 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30021(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_32(array_int_2_32 *kcg_c1, array_int_2_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30040(array__30040 *kcg_c1, array__30040 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30029(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30043(array__30043 *kcg_c1, array__30043 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30029(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30067(array__30067 *kcg_c1, array__30067 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30061(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30070(array__30070 *kcg_c1, array__30070 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30061(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30114(array__30114 *kcg_c1, array__30114 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30109(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_500(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_499(array_int_499 *kcg_c1, array_int_499 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 499; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_496(array_int_496 *kcg_c1, array_int_496 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 496; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_492(array_int_492 *kcg_c1, array_int_492 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 492; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_33_99(
  array_int_2_33_99 *kcg_c1,
  array_int_2_33_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_430(array_int_430 *kcg_c1, array_int_430 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 430; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_70(array_int_70 *kcg_c1, array_int_70 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 70; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30177(array__30177 *kcg_c1, array__30177 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29763(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_444(array_int_444 *kcg_c1, array_int_444 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 444; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_24(array_int_24 *kcg_c1, array_int_24 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_56(array_int_56 *kcg_c1, array_int_56 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 56; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_18(array_int_18 *kcg_c1, array_int_18 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 18; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_395(array_int_395 *kcg_c1, array_int_395 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 395; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_105(array_int_105 *kcg_c1, array_int_105 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 105; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30207(array__30207 *kcg_c1, array__30207 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29728(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_32_64(
  array_int_2_32_64 *kcg_c1,
  array_int_2_32_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_428(array_int_428 *kcg_c1, array_int_428 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 428; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_72(array_int_72 *kcg_c1, array_int_72 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 72; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_494(array_int_494 *kcg_c1, array_int_494 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_396(array_int_396 *kcg_c1, array_int_396 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 396; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_104(array_int_104 *kcg_c1, array_int_104 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 104; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30231(array__30231 *kcg_c1, array__30231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30061(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30234(array__30234 *kcg_c1, array__30234 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__30029(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_432(array_int_432 *kcg_c1, array_int_432 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 432; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_68(array_int_68 *kcg_c1, array_int_68 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 68; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_33(array_int_33 *kcg_c1, array_int_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_7_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_264(array_int_264 *kcg_c1, array_int_264 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 264; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_236(array_int_236 *kcg_c1, array_int_236 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 236; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__30258(array__30258 *kcg_c1, array__30258 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__29979(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_491(array_int_491 *kcg_c1, array_int_491 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 491; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_4_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_351(array_int_351 *kcg_c1, array_int_351 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 351; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_20(array_int_20 *kcg_c1, array_int_20 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_149(array_int_149 *kcg_c1, array_int_149 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 149; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_14(array_int_14 *kcg_c1, array_int_14 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_21(array_int_21 *kcg_c1, array_int_21 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 21; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29593(struct__29593 *kcg_c1, struct__29593 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime ==
      kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29611(struct__29611 *kcg_c1, struct__29611 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
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

kcg_bool kcg_comp_struct__29627(struct__29627 *kcg_c1, struct__29627 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29638(struct__29638 *kcg_c1, struct__29638 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_500(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_array__29635(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29643(struct__29643 *kcg_c1, struct__29643 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
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

kcg_bool kcg_comp_struct__29656(struct__29656 *kcg_c1, struct__29656 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime ==
      kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29674(struct__29674 *kcg_c1, struct__29674 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__29638(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_struct__29656(&kcg_c1->Header, &kcg_c2->Header);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29679(struct__29679 *kcg_c1, struct__29679 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__29638(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_struct__29643(&kcg_c1->Header, &kcg_c2->Header);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29684(struct__29684 *kcg_c1, struct__29684 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainPosCalibrated ==
      kcg_c2->TrainPosCalibrated);
  kcg_equ = kcg_equ & (kcg_c1->OffsetTotal == kcg_c2->OffsetTotal);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos_in == kcg_c2->TrainPos_in);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29690(struct__29690 *kcg_c1, struct__29690 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__29679(
      &kcg_c1->BG_Message,
      &kcg_c2->BG_Message);
  kcg_equ = kcg_equ & kcg_comp_struct__29684(
      &kcg_c1->TrainPosRaw,
      &kcg_c2->TrainPosRaw);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29695(struct__29695 *kcg_c1, struct__29695 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Or_Line == kcg_c2->Or_Line);
  kcg_equ = kcg_equ & (kcg_c1->Or_BG == kcg_c2->Or_BG);
  kcg_equ = kcg_equ & (kcg_c1->Pos == kcg_c2->Pos);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29703(struct__29703 *kcg_c1, struct__29703 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->balise_passed == kcg_c2->balise_passed);
  kcg_equ = kcg_equ & (kcg_c1->pig_nom_0 == kcg_c2->pig_nom_0);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos == kcg_c2->TrainPos);
  kcg_equ = kcg_equ & (kcg_c1->engineering_BG_location ==
      kcg_c2->engineering_BG_location);
  kcg_equ = kcg_equ & kcg_comp_struct__29638(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__29643(&kcg_c1->header, &kcg_c2->header);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29712(struct__29712 *kcg_c1, struct__29712 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29717(struct__29717 *kcg_c1, struct__29717 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SRSTOP == kcg_c2->Q_SRSTOP);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29728(struct__29728 *kcg_c1, struct__29728 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29746(struct__29746 *kcg_c1, struct__29746 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__29743(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->D_LEVELTR == kcg_c2->D_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29763(struct__29763 *kcg_c1, struct__29763 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29780(struct__29780 *kcg_c1, struct__29780 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__29777(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29791(struct__29791 *kcg_c1, struct__29791 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RBC == kcg_c2->Q_RBC);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29806(struct__29806 *kcg_c1, struct__29806 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_NVDRIVER_ADHES == kcg_c2->Q_NVDRIVER_ADHES);
  kcg_equ = kcg_equ & (kcg_c1->D_NVSTFF == kcg_c2->D_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->M_NVDERUN == kcg_c2->M_NVDERUN);
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT == kcg_c2->T_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->M_NVCONTACT == kcg_c2->M_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->D_NVPOTRP == kcg_c2->D_NVPOTRP);
  kcg_equ = kcg_equ & (kcg_c1->T_NVOVTRP == kcg_c2->T_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->D_NVOVTRP == kcg_c2->D_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSUPOVTRP == kcg_c2->V_NVSUPOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVALLOWOVTRP == kcg_c2->V_NVALLOWOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVEMRRLS == kcg_c2->Q_NVEMRRLS);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVSRBKTRG == kcg_c2->Q_NVSRBKTRG);
  kcg_equ = kcg_equ & (kcg_c1->D_NVROLL == kcg_c2->D_NVROLL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVREL == kcg_c2->V_NVREL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVUNFIT == kcg_c2->V_NVUNFIT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVONSIGHT == kcg_c2->V_NVONSIGHT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSTFF == kcg_c2->V_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSHUNT == kcg_c2->V_NVSHUNT);
  kcg_equ = kcg_equ & kcg_comp_array_int_32(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->D_VALIDNV == kcg_c2->D_VALIDNV);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29835(struct__29835 *kcg_c1, struct__29835 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_MN == kcg_c2->NID_MN);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29843(struct__29843 *kcg_c1, struct__29843 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29852(struct__29852 *kcg_c1, struct__29852 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29862(struct__29862 *kcg_c1, struct__29862 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29876(struct__29876 *kcg_c1, struct__29876 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29886(struct__29886 *kcg_c1, struct__29886 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->field8 == kcg_c2->field8);
  kcg_equ = kcg_equ & (kcg_c1->field7 == kcg_c2->field7);
  kcg_equ = kcg_equ & (kcg_c1->field6 == kcg_c2->field6);
  kcg_equ = kcg_equ & (kcg_c1->field5 == kcg_c2->field5);
  kcg_equ = kcg_equ & (kcg_c1->field4 == kcg_c2->field4);
  kcg_equ = kcg_equ & (kcg_c1->field3 == kcg_c2->field3);
  kcg_equ = kcg_equ & (kcg_c1->field2 == kcg_c2->field2);
  kcg_equ = kcg_equ & (kcg_c1->field1 == kcg_c2->field1);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29901(struct__29901 *kcg_c1, struct__29901 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->message_sent == kcg_c2->message_sent);
  kcg_equ = kcg_equ & (kcg_c1->trigger == kcg_c2->trigger);
  kcg_equ = kcg_equ & kcg_comp_struct__29638(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__29886(
      &kcg_c1->message,
      &kcg_c2->message);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29908(struct__29908 *kcg_c1, struct__29908 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29922(struct__29922 *kcg_c1, struct__29922 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29934(struct__29934 *kcg_c1, struct__29934 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_SECTION == kcg_c2->L_SECTION);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29950(struct__29950 *kcg_c1, struct__29950 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEOL == kcg_c2->V_RELEASEOL);
  kcg_equ = kcg_equ & (kcg_c1->D_OL == kcg_c2->D_OL);
  kcg_equ = kcg_equ & (kcg_c1->T_OL == kcg_c2->T_OL);
  kcg_equ = kcg_equ & (kcg_c1->D_STARTOL == kcg_c2->D_STARTOL);
  kcg_equ = kcg_equ & (kcg_c1->Q_OVERLAP == kcg_c2->Q_OVERLAP);
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEDP == kcg_c2->V_RELEASEDP);
  kcg_equ = kcg_equ & (kcg_c1->D_DP == kcg_c2->D_DP);
  kcg_equ = kcg_equ & (kcg_c1->Q_DANGERPOINT == kcg_c2->Q_DANGERPOINT);
  kcg_equ = kcg_equ & (kcg_c1->D_ENDTIMERSTARTLOC ==
      kcg_c2->D_ENDTIMERSTARTLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_ENDTIMER == kcg_c2->T_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_ENDTIMER == kcg_c2->Q_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_ENDSECTION == kcg_c2->L_ENDSECTION);
  kcg_equ = kcg_equ & kcg_comp_array__29947(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->T_LOA == kcg_c2->T_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_LOA == kcg_c2->V_LOA);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__29979(struct__29979 *kcg_c1, struct__29979 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30001(struct__30001 *kcg_c1, struct__30001 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__29998(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30021(struct__30021 *kcg_c1, struct__30021 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30029(struct__30029 *kcg_c1, struct__30029 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__30026(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30046(struct__30046 *kcg_c1, struct__30046 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__30043(
      &kcg_c1->SECTIONS_SSP,
      &kcg_c2->SECTIONS_SSP);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_k == kcg_c2->N_ITER_k);
  kcg_equ = kcg_equ & kcg_comp_array__30026(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_n == kcg_c2->N_ITER_n);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30061(struct__30061 *kcg_c1, struct__30061 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30073(struct__30073 *kcg_c1, struct__30073 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__30070(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30086(struct__30086 *kcg_c1, struct__30086 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_TSR == kcg_c2->V_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->L_TSR == kcg_c2->L_TSR);
  kcg_equ = kcg_equ & (kcg_c1->D_TSR == kcg_c2->D_TSR);
  kcg_equ = kcg_equ & (kcg_c1->NID_TSR == kcg_c2->NID_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30099(struct__30099 *kcg_c1, struct__30099 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_CYCRQST == kcg_c2->T_CYCRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_TIMEOUTRQST == kcg_c2->T_TIMEOUTRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_MAR == kcg_c2->T_MAR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30109(struct__30109 *kcg_c1, struct__30109 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LGTLOC == kcg_c2->Q_LGTLOC);
  kcg_equ = kcg_equ & (kcg_c1->D_LOC == kcg_c2->D_LOC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30117(struct__30117 *kcg_c1, struct__30117 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__30114(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->M_LOC == kcg_c2->M_LOC);
  kcg_equ = kcg_equ & (kcg_c1->D_CYCLOC == kcg_c2->D_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_CYCLOC == kcg_c2->T_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30130(struct__30130 *kcg_c1, struct__30130 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__30140(struct__30140 *kcg_c1, struct__30140 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

