#pragma once

#include <gtest/gtest.h>

#include <Campidoglio/DataTypeBool.hpp>
#include <Campidoglio/DataTypeChar.hpp>
#include <Campidoglio/DataTypeDouble.hpp>
#include <Campidoglio/DataTypeFloat.hpp>
#include <Campidoglio/DataTypeInt.hpp>
#include <Campidoglio/DataTypeLong.hpp>
#include <Campidoglio/DataTypeLongDouble.hpp>
#include <Campidoglio/DataTypeLongInt.hpp>
#include <Campidoglio/DataTypeLongLong.hpp>
#include <Campidoglio/DataTypeLongLongInt.hpp>
#include <Campidoglio/DataTypeShort.hpp>
#include <Campidoglio/DataTypeShortInt.hpp>
#include <Campidoglio/DataTypeSigned.hpp>
#include <Campidoglio/DataTypeSignedChar.hpp>
#include <Campidoglio/DataTypeSignedInt.hpp>
#include <Campidoglio/DataTypeSignedLong.hpp>
#include <Campidoglio/DataTypeSignedLongInt.hpp>
#include <Campidoglio/DataTypeSignedLongLong.hpp>
#include <Campidoglio/DataTypeSignedLongLongInt.hpp>
#include <Campidoglio/DataTypeSignedShort.hpp>
#include <Campidoglio/DataTypeSignedShortInt.hpp>
#include <Campidoglio/DataTypeUnsigned.hpp>
#include <Campidoglio/DataTypeUnsignedChar.hpp>
#include <Campidoglio/DataTypeUnsignedInt.hpp>
#include <Campidoglio/DataTypeUnsignedLong.hpp>
#include <Campidoglio/DataTypeUnsignedLongInt.hpp>
#include <Campidoglio/DataTypeUnsignedLongLong.hpp>
#include <Campidoglio/DataTypeUnsignedLongLongInt.hpp>
#include <Campidoglio/DataTypeUnsignedShort.hpp>
#include <Campidoglio/DataTypeUnsignedShortInt.hpp>

class DataTypeModule_TestSuite : public testing::TestWithParam<std::tuple<std::shared_ptr<Campidoglio::DataType>, std::string>>
{
};

INSTANTIATE_TEST_SUITE_P(
  DataTypeModule, DataTypeModule_TestSuite,
  testing::Values(
    std::make_tuple(std::make_shared<Campidoglio::DataTypeBool>(),                 "bool"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeChar>(),                 "char"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeDouble>(),               "double"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeFloat>(),                "float"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeInt>(),                  "int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeLong>(),                 "long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeLongDouble>(),           "long double"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeLongInt>(),              "long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeLongLong>(),             "long long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeLongLongInt>(),          "long long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeShort>(),                "short"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeShortInt>(),             "short int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSigned>(),               "signed"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedChar>(),           "signed char"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedInt>(),            "signed int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedLong>(),           "signed long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedLongInt>(),        "signed long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedLongLong>(),       "signed long long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedLongLongInt>(),    "signed long long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedShort>(),          "signed short"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeSignedShortInt>(),       "signed short int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsigned>(),             "unsigned"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedChar>(),         "unsigned char"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedInt>(),          "unsigned int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedLong>(),         "unsigned long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedLongInt>(),      "unsigned long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedLongLong>(),     "unsigned long long"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedLongLongInt>(),  "unsigned long long int"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedShort>(),        "unsigned short"),
    std::make_tuple(std::make_shared<Campidoglio::DataTypeUnsignedShortInt>(),     "unsigned short int")
  )
);
