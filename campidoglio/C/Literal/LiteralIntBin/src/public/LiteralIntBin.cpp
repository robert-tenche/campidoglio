#include <Campidoglio/LiteralIntBin.hpp>

namespace Campidoglio
{

LiteralIntBin::LiteralIntBin(uint8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:08b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:016b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:032b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(uint64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:064b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:08b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:016b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:032b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::LiteralIntBin(int64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0b{:064b}{}", value, suffixStr)
      :
      std::format("0b{:b}{}", value, suffixStr)
  )
{
}

LiteralIntBin::~LiteralIntBin()
{
}

}
