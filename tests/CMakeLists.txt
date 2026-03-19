find_package(GTest REQUIRED)
include(GoogleTest)


add_executable(curves_tests test_curves.cpp)
target_link_libraries(curves_tests curves_lib GTest::GTest GTest::Main)
gtest_discover_tests(curves_tests)
