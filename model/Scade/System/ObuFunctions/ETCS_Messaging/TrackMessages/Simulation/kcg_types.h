/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T14:09:22
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
/* NID_PACKET */
typedef kcg_int NID_PACKET;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__164;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__164 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__172[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__172 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__175;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__175 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
  kcg_int m_version;
} struct__180;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__180 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__198;

/* TM::CompressedRadioMessage */
typedef struct__198 CompressedRadioMessage_TM;

#ifndef kcg_copy_struct__164
#define kcg_copy_struct__164(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__164)))
#endif /* kcg_copy_struct__164 */

#ifndef kcg_copy_struct__175
#define kcg_copy_struct__175(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__175)))
#endif /* kcg_copy_struct__175 */

#ifndef kcg_copy_struct__180
#define kcg_copy_struct__180(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__180)))
#endif /* kcg_copy_struct__180 */

#ifndef kcg_copy_struct__198
#define kcg_copy_struct__198(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__198)))
#endif /* kcg_copy_struct__198 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__172
#define kcg_copy_array__172(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__172)))
#endif /* kcg_copy_array__172 */

#ifndef kcg_comp_struct__164
extern kcg_bool kcg_comp_struct__164(struct__164 *kcg_c1, struct__164 *kcg_c2);
#endif /* kcg_comp_struct__164 */

#ifndef kcg_comp_struct__175
extern kcg_bool kcg_comp_struct__175(struct__175 *kcg_c1, struct__175 *kcg_c2);
#endif /* kcg_comp_struct__175 */

#ifndef kcg_comp_struct__180
extern kcg_bool kcg_comp_struct__180(struct__180 *kcg_c1, struct__180 *kcg_c2);
#endif /* kcg_comp_struct__180 */

#ifndef kcg_comp_struct__198
extern kcg_bool kcg_comp_struct__198(struct__198 *kcg_c1, struct__198 *kcg_c2);
#endif /* kcg_comp_struct__198 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__172
extern kcg_bool kcg_comp_array__172(array__172 *kcg_c1, array__172 *kcg_c2);
#endif /* kcg_comp_array__172 */

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__180

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__180

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__198

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__198

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__164

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__164

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__172

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__172

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__175

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__175

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-03T14:09:22
*************************************************************$ */

