#include <Campidoglio/LiteralIntHex.hpp>

namespace Campidoglio
{

LiteralIntHex::LiteralIntHex(uint8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0x{:02X}{}", value, suffixStr)
      :
      std::format("0x{:X}{}", value, suffixStr)
  )
{
}

LiteralIntHex::LiteralIntHex(uint16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0x{:04X}{}", value, suffixStr)
      :
      std::format("0x{:X}{}", value, suffixStr)
  )
{
}

LiteralIntHex::LiteralIntHex(uint32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0x{:08X}{}", value, suffixStr)
      :
      std::format("0x{:X}{}", value, suffixStr)
  )
{
}

LiteralIntHex::LiteralIntHex(uint64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("0x{:016X}{}", value, suffixStr)
      :
      std::format("0x{:X}{}", value, suffixStr)
  )
{
}




LiteralIntHex::LiteralIntHex(int8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{}{}",
      value < 0 ?
        std::format("{:02X}", value).insert(1, "0x") :
        std::format("0x{:02X}", value),
      suffixStr)
      :
      std::format("{}{}",
      value < 0 ?
        std::format("{:X}", value).insert(1, "0x") :
        std::format("0x{:X}", value),
      suffixStr)
    )
{
}

LiteralIntHex::LiteralIntHex(int16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{}{}",
      value < 0 ?
        std::format("{:04X}", value).insert(1, "0x") :
        std::format("0x{:04X}", value),
      suffixStr)
      :
      std::format("{}{}",
      value < 0 ?
        std::format("{:X}", value).insert(1, "0x") :
        std::format("0x{:X}", value),
      suffixStr)
    )
{
}

LiteralIntHex::LiteralIntHex(int32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{}{}",
      value < 0 ?
        std::format("{:04X}", value).insert(1, "0x") :
        std::format("0x{:04X}", value),
      suffixStr)
      :
      std::format("{}{}",
      value < 0 ?
        std::format("{:X}", value).insert(1, "0x") :
        std::format("0x{:X}", value),
      suffixStr)
    )
{
}

LiteralIntHex::LiteralIntHex(int64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{}{}",
      value < 0 ?
        std::format("{:04X}", value).insert(1, "0x") :
        std::format("0x{:04X}", value),
      suffixStr)
      :
      std::format("{}{}",
      value < 0 ?
        std::format("{:X}", value).insert(1, "0x") :
        std::format("0x{:X}", value),
      suffixStr)
    )
{
}

LiteralIntHex::~LiteralIntHex()
{
}

}
