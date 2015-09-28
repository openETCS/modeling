//     Project: EnvSim
//      Module: libenvsim / test
// Description: Unit test runner for libenvsim
//
// History:
// - 22.09.15, J. Kastner: initial version

#include <check.h>
#include <stdlib.h>

extern TCase* tc_utils();
extern TCase* tc_trackmsg();

Suite* ossm_suite(void) {
  Suite *s = suite_create("libenvsim");

  suite_add_tcase(s, tc_utils());
  suite_add_tcase(s, tc_trackmsg());

  return s;
}


int main(void) {
  int number_failed;
  Suite *s = ossm_suite();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);

  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}