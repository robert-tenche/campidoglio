#include "LiteralModuleTests.hpp"

TEST_P(LiteralX_GetValue_TestSuite, LiteralX_GetValue)
{
  auto param = GetParam();
  std::shared_ptr<Campidoglio::Literal> literal = std::get<0>(param);
  std::string expectedValue = std::get<1>(param);

  EXPECT_EQ(literal->getValue(), expectedValue);
}

