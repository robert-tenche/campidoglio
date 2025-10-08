#include "DataTypeModuleTests.hpp"

TEST_P(DataTypeModule_TestSuite, DataTypeX_GetTypeName)
{
  auto param = GetParam();
  std::shared_ptr<Campidoglio::DataType> dataType = std::get<0>(param);
  std::string expectedTypeNameStr = std::get<1>(param);

  EXPECT_EQ(dataType->getTypeNameStr(), expectedTypeNameStr);
}



