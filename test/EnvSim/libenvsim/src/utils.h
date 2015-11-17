//     Project: openETCS libenvsim
//      Module: utils.h
// Description: Common utility functions
//
// History:
// - 22.09.15, J. Kastner: initial version

#ifndef ENGINE_UTILS_H
#define ENGINE_UTILS_H

#include <stdlib.h>
#include <stdbool.h>

#define MALLOC(type) ((type*) malloc(sizeof(type)));
#define CALLOC(type) ((type*) calloc(1,sizeof(type)));
#define FREE(ptr) free(ptr);

#define ES_MSG_BUF_SIZE 2048

extern char es_msg_buf[];
#define ES_ERROR_MSG(msg) snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"%s",msg);

#ifdef WINDOWS
#define NEWLINE "\r\n"
#else
#define NEWLINE "\n"
#endif

// returns a string with the current timestamp
const char*es_timestamp();


typedef enum {
  ES_OK,
  ES_TCL_ERROR,
  // indicates that the request operation is not supported (by the current configuration)
  ES_NOT_SUPPORTED,
  // indicates an error in the TCP stack
  ES_TCP_ERROR,
  // the TCPStream is not connected yet (or anymore)
  ES_TCP_NO_CONN,
  // the command is invalid / not supported (used by es_rcontrol_handle_msg)
  ES_INVALID_CMD
} es_Status;

typedef char* es_ClientData;
// callback function for appending a string to a Tcl interpreter result
typedef void (*es_AppendResult)(char*, es_ClientData);


// Elements of a singly linked list
typedef struct LIST_ENTRY {
  char *data;
  struct LIST_ENTRY *tail;
} es_ListEntry;

// Appends the specified data element to the end of a list,
// represented by the specified list entry.
// Returns the new list tail.
es_ListEntry* es_list_append(es_ListEntry *list, char *data);

// Returns the list entry at the specified position, or NULL if it does not exist.
es_ListEntry* es_list_get(es_ListEntry *list, int index);

// Executes the specified function f for each element in the provided list.
// Whenever f() returns false, the corresponding list entry is removed from the list;
// otherwise, the entry will remain in the updated list.
// Returns the head of the filtered list.
es_ListEntry* es_list_filter(es_ListEntry *list, bool (*f)(char*));

// Executes the speficied function for each entry in a list.
// The provided clientData is passed on to the function f.
void es_list_foreach(es_ListEntry *list, void (*f)(char* data, es_ClientData clientData), es_ClientData clientData);

// Removes the head from the specified list and writes its data entry
// at the location specified by **data. Returns the new head of the list.
es_ListEntry* es_list_remove_head(es_ListEntry *list, char **data);

// Inserts a new entry into a sorted linked list and returns the link to the new
// list head. The sorting order is determined by the cmp function, which must return <0
// if data1<data2, >0 if data1>data2, and 0 otherwise.
es_ListEntry* es_list_insert(es_ListEntry *list, char *data, int (*cmp)(char *data1, char *data2));

// Returns the number of entries in the specified list
int es_list_size(es_ListEntry *list);

// Encodes nbytes from the specified bytes buffer as a HEX string
// and writes the result into the specified hexbuf. The size of hexbuf
// must be at least 2*nbytes+1.
//
// Returns the number of chars written to the hexbuf
int es_bytes_to_hex(size_t nbytes, char* bytes, char* hexbuf);

// Decodes nbytes from the specified HEX string into the provided buffer
void es_hex_to_bytes(size_t nbytes, char* hex, char* bytesbuf);

#endif //ENGINE_UTILS_H
