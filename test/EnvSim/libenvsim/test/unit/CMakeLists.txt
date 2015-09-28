include_directories(../../src)
# If pkg-config is not installed on the system, then the
# CHECK_INSTALL_DIR variable must be set to the install
# location of Check. For example, on Windows, this may
# be: C:/Program Files/check
# set(CHECK_INSTALL_DIR "C:/Program Files/check")

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})

set(TEST_SOURCES
  test.c utils_test.c trackmsg_test.c)

add_executable(test_envsim ${TEST_SOURCES})
target_link_libraries(test_envsim envsim ${CHECK_LIBRARIES})
