#pragma once

#include <gtest/gtest.h>

#include <Campidoglio/LiteralCustom.hpp>
#include <Campidoglio/LiteralIntBin.hpp>
#include <Campidoglio/LiteralIntDec.hpp>

#pragma GCC diagnostic ignored "-Woverflow" // expected overflows, testing done in this sense

class LiteralX_GetValue_TestSuite : public testing::TestWithParam<std::tuple<std::shared_ptr<Campidoglio::Literal>, std::string>>
{
};

INSTANTIATE_TEST_SUITE_P(
  LiteralCustomTests, LiteralX_GetValue_TestSuite,
  testing::Values(
    std::make_tuple(std::make_shared<Campidoglio::LiteralCustom>("Campidoglio") , "Campidoglio")
  )
);

INSTANTIATE_TEST_SUITE_P(
  LiteralIntBinTests, LiteralX_GetValue_TestSuite,
  testing::Values(
    // Suffix testing
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)0b0                                                                   , "u"   , false)  , "0b0u"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)0b0                                                                  , "u"   , false)  , "0b0u"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)0b0                                                                  , "uL"  , false)  , "0b0uL"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)0b0                                                                  , "uLL" , false)  , "0b0uLL"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)0b0                                                                    , "u"   , false)  , "0b0u"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)0b0                                                                   , "u"   , false)  , "0b0u"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)0b0                                                                   , "uL"  , false)  , "0b0uL"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)0b0                                                                   , "uLL" , false)  , "0b0uLL"),

    // Trailing zeros testing
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)0b0                                                                   , ""    , true)   , "0b00000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)0b0                                                                  , ""    , true)   , "0b0000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)0b0                                                                  , ""    , true)   , "0b00000000000000000000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)0b0                                                                  , ""    , true)   , "0b0000000000000000000000000000000000000000000000000000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)0b0                                                                    , ""    , true)   , "0b00000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)0b0                                                                   , ""    , true)   , "0b0000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)0b0                                                                   , ""    , true)   , "0b00000000000000000000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)0b0                                                                   , ""    , true)   , "0b0000000000000000000000000000000000000000000000000000000000000000"),
  
    // Out-of-bounds testing
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::min()-3)                               , ""    , false)  , "0b11111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::min()-2)                               , ""    , false)  , "0b11111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::min()-1)                               , ""    , false)  , "0b11111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::max()+1)                               , ""    , false)  , "0b0"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::max()+2)                               , ""    , false)  , "0b1"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint8_t)(std::numeric_limits<uint8_t>::max()+3)                               , ""    , false)  , "0b10"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::min()-3)                             , ""    , false)  , "0b1111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::min()-2)                             , ""    , false)  , "0b1111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::min()-1)                             , ""    , false)  , "0b1111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::max()+1)                             , ""    , false)  , "0b0"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::max()+2)                             , ""    , false)  , "0b1"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint16_t)(std::numeric_limits<uint16_t>::max()+3)                             , ""    , false)  , "0b10"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::min()-3)                             , ""    , false)  , "0b11111111111111111111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::min()-2)                             , ""    , false)  , "0b11111111111111111111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::min()-1)                             , ""    , false)  , "0b11111111111111111111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::max()+1)                             , ""    , false)  , "0b0"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::max()+2)                             , ""    , false)  , "0b1"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint32_t)(std::numeric_limits<uint32_t>::max()+3)                             , ""    , false)  , "0b10"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::min()-3)                             , ""    , false)  , "0b1111111111111111111111111111111111111111111111111111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::min()-2)                             , ""    , false)  , "0b1111111111111111111111111111111111111111111111111111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::min()-1)                             , ""    , false)  , "0b1111111111111111111111111111111111111111111111111111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::max()+1)                             , ""    , false)  , "0b0"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::max()+2)                             , ""    , false)  , "0b1"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((uint64_t)(std::numeric_limits<uint64_t>::max()+3)                             , ""    , false)  , "0b10"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::min()-3)                                 , ""    , true)   , "0b01111101"), // -128-3==-131 => (int8_t)-131==125
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::min()-2)                                 , ""    , true)   , "0b01111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::min()-1)                                 , ""    , true)   , "0b01111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::max()+1)                                 , ""    , false)  , "0b10000000"), // 127+1==128 => (int8_t)128==-128
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::max()+2)                                 , ""    , false)  , "0b10000001"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int8_t)(std::numeric_limits<int8_t>::max()+3)                                 , ""    , false)  , "0b10000010"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::min()-3)                               , ""    , true)   , "0b0111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::min()-2)                               , ""    , true)   , "0b0111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::min()-1)                               , ""    , true)   , "0b0111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::max()+1)                               , ""    , false)  , "0b1000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::max()+2)                               , ""    , false)  , "0b1000000000000001"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int16_t)(std::numeric_limits<int16_t>::max()+3)                               , ""    , false)  , "0b1000000000000010"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::min()-3)                               , ""    , true)   , "0b01111111111111111111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::min()-2)                               , ""    , true)   , "0b01111111111111111111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::min()-1)                               , ""    , true)   , "0b01111111111111111111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::max()+1)                               , ""    , false)  , "0b10000000000000000000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::max()+2)                               , ""    , false)  , "0b10000000000000000000000000000001"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int32_t)(std::numeric_limits<int32_t>::max()+3)                               , ""    , false)  , "0b10000000000000000000000000000010"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::min()-3)                               , ""    , true)   , "0b0111111111111111111111111111111111111111111111111111111111111101"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::min()-2)                               , ""    , true)   , "0b0111111111111111111111111111111111111111111111111111111111111110"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::min()-1)                               , ""    , true)   , "0b0111111111111111111111111111111111111111111111111111111111111111"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::max()+1)                               , ""    , false)  , "0b1000000000000000000000000000000000000000000000000000000000000000"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::max()+2)                               , ""    , false)  , "0b1000000000000000000000000000000000000000000000000000000000000001"),
    std::make_tuple(std::make_shared<Campidoglio::LiteralIntBin>((int64_t)(std::numeric_limits<int64_t>::max()+3)                               , ""    , false)  , "0b1000000000000000000000000000000000000000000000000000000000000010")
  )
);

// INSTANTIATE_TEST_SUITE_P(
//   LiteralCustomTests, LiteralX_GetValue_TestSuite,
//   testing::Values(
//     std::make_tuple(std::make_shared<Campidoglio::LiteralIntDec>() , "Campidoglio")
//   )
// );


