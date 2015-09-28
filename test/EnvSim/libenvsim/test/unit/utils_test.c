//     Project: EnvSim
//      Module: libenvsim / test
// Description: Unit test for module utils
//
// History:
// - 22.09.15, J. Kastner: initial version

#include <check.h>
#include <stdio.h>
#include "utils.h"

START_TEST(test_es_list_append) {
    char *d1 = "1";
    char *d2 = "2";
    es_ListEntry *list = NULL;
    es_ListEntry *tail = NULL;

    list = es_list_append(list,d1);
    ck_assert_str_eq("1", list->data);
    ck_assert_ptr_eq(NULL, list->tail);

    tail = es_list_append(list, d2);
    ck_assert_str_eq("2", tail->data);
    ck_assert_ptr_eq(list->tail, tail);
    ck_assert_ptr_eq(NULL, tail->tail);

} END_TEST


START_TEST(test_es_list_get) {
    es_ListEntry *list = NULL;
    ck_assert_int_eq(NULL,es_list_get(list,10));

    list = es_list_append(list,"1");
    es_list_append(list,"2");

    ck_assert_str_eq("1", es_list_get(list,0)->data);
    ck_assert_str_eq("2", es_list_get(list,1)->data);
    ck_assert_int_eq(NULL,es_list_get(list,2));

  } END_TEST;


bool telf1(void* data) { return strcmp("e2",(char*)data) != 0; }
bool telf2(void* data) { return strcmp("e3",(char*)data) != 0; }

START_TEST(test_es_list_filter) {
    char *e1 = "e1";
    char *e2 = "e2";
    char *e3 = "e3";

    es_ListEntry *list = NULL;
    list = es_list_append(list,e1);
    es_list_append(list,e2);
    es_list_append(list,e3);

    list = es_list_filter(list,telf1);
    ck_assert_str_eq("e1",list->data);
    ck_assert_str_eq("e3",list->tail->data);
    ck_assert(list->tail->tail == NULL);


    list = es_list_filter(list,telf2);
    ck_assert_str_eq("e1",list->data);
    ck_assert(list->tail == NULL);

} END_TEST


START_TEST(test_es_list_remove_head) {
    char *e1 = "e1";
    char *e2 = "e2";

    char *tgt = NULL;

    es_ListEntry *list = es_list_append(NULL,e1);
    es_list_append(list,e2);

    list = es_list_remove_head(list,&tgt);
    ck_assert_str_eq("e1",tgt);
    ck_assert_str_eq("e1",e1);
    ck_assert_str_eq("e2",e2);

    list = es_list_remove_head(list,&tgt);
    ck_assert_str_eq("e2",tgt);
    ck_assert_str_eq("e1",e1);
    ck_assert_str_eq("e2",e2);
    ck_assert_ptr_eq(NULL, list);

} END_TEST


START_TEST(test_es_list_insert) {
     es_ListEntry *list = NULL;

    list = es_list_insert(list,"e2",strcmp);
    ck_assert_str_eq("e2",list->data);

    list = es_list_insert(list,"e4",strcmp);
    ck_assert_str_eq("e2",list->data);
    ck_assert_str_eq("e4",list->tail->data);

    list = es_list_insert(list,"e3",strcmp);
    ck_assert_str_eq("e2",list->data);
    ck_assert_str_eq("e3",list->tail->data);
    ck_assert_str_eq("e4",list->tail->tail->data);

    list = es_list_insert(list,"e1",strcmp);
    ck_assert_str_eq("e1",list->data);
    ck_assert_str_eq("e2",list->tail->data);
    ck_assert_str_eq("e3",list->tail->tail->data);
    ck_assert_str_eq("e4",list->tail->tail->tail->data);

    list = es_list_insert(list,"e3",strcmp);
    ck_assert_str_eq("e1",list->data);
    ck_assert_str_eq("e2",list->tail->data);
    ck_assert_str_eq("e3",list->tail->tail->data);
    ck_assert_str_eq("e3",list->tail->tail->tail->data);
    ck_assert_str_eq("e4",list->tail->tail->tail->tail->data);

  } END_TEST;


int telf3n = 0;
void telf3(void* data, es_ClientData clientData) { telf3n++; }
START_TEST(test_es_list_foreach) {
    es_ListEntry *list = NULL;
    list = es_list_append(list,"a");
    es_list_append(list,"b");

    es_list_foreach(NULL,telf3,NULL);
    ck_assert_int_eq(0,telf3n);

    es_list_foreach(list,telf3,NULL);
    ck_assert_int_eq(2,telf3n);

    es_list_foreach(list->tail,telf3,NULL);
    ck_assert_int_eq(3,telf3n);

  } END_TEST;


START_TEST(test_es_list_size) {
    es_ListEntry *list = NULL;
    list = es_list_append(list,"1");
    es_list_append(list,"2");

    ck_assert_int_eq(0, es_list_size(NULL));
    ck_assert_int_eq(2, es_list_size(list));
    ck_assert_int_eq(1, es_list_size(list->tail));
  } END_TEST;


START_TEST(test_es_bytes_to_hex) {
  char bytebuf[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,0x20,0xaa,0xff};
    char hexbuf[41];
    char bytes[20];

    es_bytes_to_hex(20,bytebuf,hexbuf);
    ck_assert_str_eq("000102030405060708090A0B0C0D0E0F1020AAFF",hexbuf);

    es_hex_to_bytes(20,hexbuf,bytes);
    for(int i=0; i<20; i++) {
      ck_assert_int_eq(bytebuf[i],bytes[i]);
    }

  } END_TEST;


TCase* tc_utils() {
  TCase *tc = tcase_create("utils");

  tcase_add_test(tc, test_es_list_append);
  tcase_add_test(tc, test_es_list_get);
  tcase_add_test(tc, test_es_list_filter);
  tcase_add_test(tc, test_es_list_remove_head);
  tcase_add_test(tc, test_es_list_insert);
  tcase_add_test(tc, test_es_list_foreach);
  tcase_add_test(tc, test_es_list_size);
  tcase_add_test(tc, test_es_bytes_to_hex);

  return tc;
}
