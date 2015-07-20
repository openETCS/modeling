/* TrackMessages_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "TrackMessages_newtype.h"
#include "TrackMessages_newmapping.h"

/* iterators */
static const MappingIterator iter_array_20;
static const MappingIterator iter_foldi_20;
static const MappingIterator iter_array_20 = { "array", 20, 20, NULL};
static const MappingIterator iter_foldi_20 = { "foldi", 20, 20, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 8);
MAP_DECL(scope_5, 2);
MAP_DECL(scope_4, 15);
MAP_DECL(scope_3, 15);
MAP_DECL(scope_2, 12);
MAP_DECL(scope_1, 12);
MAP_DECL(scope_0, 1);

/* array__258 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(struct__244), 0, &_Type_struct__244_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_12 = {
  "array__258",
  scope_12_entries, 1,
};

/* array_int_20 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "array_int_20",
  scope_11_entries, 1,
};

/* struct__244 */
static const MappingEntry scope_10_entries[8] = {
  /* 0 */ { MAP_FIELD, ".field1", NULL, sizeof(kcg_int), offsetof(struct__244, field1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".field2", NULL, sizeof(kcg_int), offsetof(struct__244, field2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".field3", NULL, sizeof(kcg_int), offsetof(struct__244, field3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__244, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(kcg_int), offsetof(struct__244, nid_engine), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__244, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__244, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__244, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "struct__244",
  scope_10_entries, 8,
};

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage/ _1_SendRadioMessage_TrainToT_TM_radio_messages */
static const MappingEntry scope_5_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__1_SendRadioMessage_TrainToT_TM_radio_messages, Message_out), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__1_SendRadioMessage_TrainToT_TM_radio_messages, _L1), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 0}
};
static const MappingScope scope_5 = {
  "TM_radio_messages::SendRadioMessage_TrainToTrack_Storage/ _1_SendRadioMessage_TrainToT_TM_radio_messages",
  scope_5_entries, 2,
};

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer/ SendRadioMessage_TrainToT_TM_radio_messages */
static const MappingEntry scope_4_entries[15] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_OUTPUT, "ReadPointer", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, ReadPointer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 2 */ { MAP_OUTPUT, "WritePointer", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, WritePointer), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SendRadioMessage_TrainToT_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_4 = {
  "TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer/ SendRadioMessage_TrainToT_TM_radio_messages",
  scope_4_entries, 15,
};

/* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO/ _2_SendRadioMessage_TrainToT_TM_radio_messages */
static const MappingEntry scope_3_entries[15] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 13},
  /* 2 */ { MAP_OUTPUT, "MessageBus_out", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, MessageBus_out), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 14},
  /* 3 */ { MAP_INSTANCE, "TM_radio_messages::SendRadioMessage_TrainToTrack_Storage 1", NULL, sizeof(outC__1_SendRadioMessage_TrainToT_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, Context_1), NULL, &scope_3_entries[1], isActive_kcg_bool_kcg_true, &scope_5, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L10@mem", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L10), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 0, 0},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L11), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L14), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L15), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L5), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_3 = {
  "TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO/ _2_SendRadioMessage_TrainToT_TM_radio_messages",
  scope_3_entries, 15,
};

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer/ _3_SendRadioMessage_TrainToT_TM_radio_messages */
static const MappingEntry scope_2_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "MessageBus_out", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, MessageBus_out), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO 1", &iter_foldi_20, sizeof(outC__2_SendRadioMessage_TrainToT_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_3, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer 1", NULL, sizeof(outC_SendRadioMessage_TrainToT_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_4, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L1), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L10), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(array__258), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L11), &_Type_array__258_Utils, NULL, NULL, &scope_12, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L4), &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(array_int_20), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L8), &_Type_array_int_20_Utils, NULL, NULL, &scope_11, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(array_int_20), offsetof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages, _L9), &_Type_array_int_20_Utils, NULL, NULL, &scope_11, 1, 8}
};
static const MappingScope scope_2 = {
  "TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer/ _3_SendRadioMessage_TrainToT_TM_radio_messages",
  scope_2_entries, 12,
};

/* TM_radio_messages::SendRadioMessage_TrainToTrack/ SendRadioMessage_TrainToTrack_TM_radio_messages */
static const MappingEntry scope_1_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.tmp, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 8},
  /* 1 */ { MAP_INPUT, "MessageBus", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&inputs_ctx.MessageBus, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 11},
  /* 2 */ { MAP_OUTPUT, "MessageBus_out", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&outputs_ctx.MessageBus_out, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 9},
  /* 3 */ { MAP_INPUT, "New_Message", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&inputs_ctx.New_Message, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 10},
  /* 4 */ { MAP_INSTANCE, "TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer 1", NULL, sizeof(outC__3_SendRadioMessage_TrainToT_TM_radio_messages), (size_t)&outputs_ctx.Context_1, NULL, &scope_1_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&outputs_ctx._L1, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&outputs_ctx._L2, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L21, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&outputs_ctx._L22, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrainTrack_Radio_TM_radio_messages), (size_t)&outputs_ctx._L3, &_Type_M_TrainTrack_Radio_TM_radio_messages_Utils, NULL, NULL, &scope_10, 1, 3}
};
static const MappingScope scope_1 = {
  "TM_radio_messages::SendRadioMessage_TrainToTrack/ SendRadioMessage_TrainToTrack_TM_radio_messages",
  scope_1_entries, 12,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "TM_radio_messages::SendRadioMessage_TrainToTrack", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

