/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:12:21
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

/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__869;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__869 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} struct__880;

/* TM::P136_OBU_T */
typedef struct__880 P136_OBU_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__888[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__888 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__891;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__891 CompressedPackets_T_Common_Types_Pkg;

#ifndef kcg_copy_struct__869
#define kcg_copy_struct__869(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__869)))
#endif /* kcg_copy_struct__869 */

#ifndef kcg_copy_struct__880
#define kcg_copy_struct__880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__880)))
#endif /* kcg_copy_struct__880 */

#ifndef kcg_copy_struct__891
#define kcg_copy_struct__891(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__891)))
#endif /* kcg_copy_struct__891 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__888
#define kcg_copy_array__888(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__888)))
#endif /* kcg_copy_array__888 */

#ifndef kcg_comp_struct__869
extern kcg_bool kcg_comp_struct__869(struct__869 *kcg_c1, struct__869 *kcg_c2);
#endif /* kcg_comp_struct__869 */

#ifndef kcg_comp_struct__880
extern kcg_bool kcg_comp_struct__880(struct__880 *kcg_c1, struct__880 *kcg_c2);
#endif /* kcg_comp_struct__880 */

#ifndef kcg_comp_struct__891
extern kcg_bool kcg_comp_struct__891(struct__891 *kcg_c1, struct__891 *kcg_c2);
#endif /* kcg_comp_struct__891 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__888
extern kcg_bool kcg_comp_array__888(array__888 *kcg_c1, array__888 *kcg_c2);
#endif /* kcg_comp_array__888 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__891

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__891

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__888

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__888

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__869

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__869

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P136_OBU_T_TM kcg_comp_struct__880

#define kcg_copy_P136_OBU_T_TM kcg_copy_struct__880

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

