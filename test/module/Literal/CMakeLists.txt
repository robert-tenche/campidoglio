set(UT_NAME
  LiteralModuleTests
)

add_executable(
  LiteralModuleTests
  LiteralModuleTests.cpp
)

target_link_libraries(
  LiteralModuleTests
  campidoglio
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(LiteralModuleTests)
