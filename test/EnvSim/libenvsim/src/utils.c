//     Project: openETCS libenvsim
//      Module: utils.c
// Description: Common utility functions
//
// History:
// - 22.09.15, J. Kastner: initial version

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include "utils.h"

char es_msg_buf[ES_MSG_BUF_SIZE];
char es_tstamp_buf[50];

const char* es_timestamp() {
  time_t now;
  struct tm *localnow;
  time( &now );
  localnow = localtime( &now );

  strftime(es_tstamp_buf,50,"%d.%m.%y %H:%M:%S",localnow);
  return es_tstamp_buf;
}


es_ListEntry* es_list_append(es_ListEntry *list, char *data) {
  es_ListEntry *tail = list;

  while(tail!=NULL && tail->tail!=NULL) {
    tail = tail->tail;
  }

  es_ListEntry *newEntry = MALLOC(es_ListEntry);
  newEntry->data = NULL;
  newEntry->tail = NULL;

  if(tail==NULL) {
    tail = newEntry;
  }
  else {
    tail->tail = newEntry;
    tail = newEntry;
  }

  tail->data = data;
  return tail;
}

es_ListEntry* es_list_get(es_ListEntry *list, int index) {
  int i=0;
  es_ListEntry *next = list;
  while(next!=NULL) {
    if(i==index) return next;
    next = next->tail;
    i++;
  }
  return NULL;
}

es_ListEntry* es_list_filter(es_ListEntry *list, bool (*f)(char*)) {
  es_ListEntry *prev = NULL;
  es_ListEntry *next = list;
  es_ListEntry *nhead = list;

  while(next) {
    if(! f(next->data)) {
      if(prev!=NULL) {
        prev->tail = next->tail;
        free(next);
        next = prev->tail;
      }
      else {
        nhead = next->tail;
        next = nhead;
      }
    }
    else {
      prev = next;
      next = next->tail;
    }
  }

  return nhead;
}

es_ListEntry* es_list_remove_head(es_ListEntry *list, char **data) {
  if(list==NULL) {
    *data = NULL;
    return NULL;
  }

  *data = list->data;
  es_ListEntry *nhead = list->tail;
  free(list);
  return nhead;
}


es_ListEntry* es_list_insert(es_ListEntry *list, char *data, int (*cmp)(char *data1, char *data2)) {
  if(list==NULL) {
    return es_list_append(list,data);
  }

  es_ListEntry *prev = NULL;
  es_ListEntry *next = list;

  while(next!=NULL && cmp(data,next->data)>0) {
    prev = next;
    next = next->tail;
  }

  es_ListEntry *newEntry = MALLOC(es_ListEntry);
  newEntry->data = data;
  newEntry->tail = next;
  if(prev==NULL) {
    return newEntry;
  }

  prev->tail = newEntry;
  return list;
}


void es_list_foreach(es_ListEntry *list, void (*f)(char*,es_ClientData), es_ClientData clientData) {
  es_ListEntry *next = list;
  while(next!=NULL) {
    f(next->data,clientData);
    next = next->tail;
  }
}


int es_list_size(es_ListEntry *list) {
  int size = 0;
  es_ListEntry *next = list;
  while(next!=NULL) {
    size++;
    next = next->tail;
  }
  return size;
}

char es_hexvalue(char byte) {
  assert(byte >=0 && byte <16);
  if(byte <10)
    return byte + 48;
  else
    return byte + 55;
}


char es_bytevalue(char hex) {
  char b = hex>=65 ? hex - 55 : hex - 0x30;
  assert(b>=0 && b<16);
  return b;
}


void es_bytes_to_hex(size_t nbytes, char* bytes, char* hexbuf) {
  int i,j = 0;
  for(i=0; i<nbytes; i++,j+=2) {
    // write high nibble
    hexbuf[j] = es_hexvalue( (bytes[i]>>4) & 0x0f );
    // write low nibble
    hexbuf[j+1] = es_hexvalue( bytes[i] & 0x0f );
  }
  hexbuf[j] = '\0';
}


void es_hex_to_bytes(size_t nbytes, char* hex, char* bytesbuf) {
  int i,j = 0;
  char b;
  for(i=0; i<nbytes; i++,j+=2) {
    // read high nibble
    b = (es_bytevalue(hex[j])<<4) & 0xf0;
    // read low nibble
    bytesbuf[i] = b | (es_bytevalue(hex[j+1]) & 0x0f);
  }
}

