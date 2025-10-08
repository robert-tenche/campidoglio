#include <Campidoglio/LiteralIntBin.hpp>

namespace Campidoglio
{

LiteralIntBin::LiteralIntBin(uint8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#010b}{}", value, suffixStr)
      :
      std::format("{:#b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#018b}{}", value, suffixStr)
      :
      std::format("{:#b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#034b}{}", value, suffixStr)
      :
      std::format("{:#b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#066b}{}", value, suffixStr)
      :
      std::format("{:#b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#010b}{}", static_cast<uint8_t>(value), suffixStr)
      :
      std::format("{:#b}{}", static_cast<uint8_t>(value), suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#018b}{}", static_cast<uint16_t>(value), suffixStr)
      :
      std::format("{:#b}{}", static_cast<uint16_t>(value), suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#034b}{}", static_cast<uint32_t>(value), suffixStr)
      :
      std::format("{:#b}{}", static_cast<uint32_t>(value), suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:#066b}{}", static_cast<uint64_t>(value), suffixStr)
      :
      std::format("{:#b}{}", static_cast<uint64_t>(value), suffixStr)
  )
{
}

LiteralIntBin::~LiteralIntBin()
{
}

}
