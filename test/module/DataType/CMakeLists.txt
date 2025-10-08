set(UT_NAME
  DataTypeModuleTests
)

add_executable(
  DataTypeModuleTests
  DataTypeModuleTests.cpp
)

target_link_libraries(
  DataTypeModuleTests
  campidoglio
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(DataTypeModuleTests)
