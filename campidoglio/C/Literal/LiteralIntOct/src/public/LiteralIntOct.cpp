#include <Campidoglio/LiteralIntOct.hpp>

namespace Campidoglio
{

LiteralIntOct::LiteralIntOct(uint8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:03o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(uint16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:06o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(uint32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:011o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(uint64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:022o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}



LiteralIntOct::LiteralIntOct(int8_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:03o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(int16_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:06o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(int32_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:011o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::LiteralIntOct(int64_t value, const std::string& suffixStr, bool insertLeadingZeroes)
  : Literal(
    insertLeadingZeroes ?
      std::format("{:022o}{}", value, suffixStr)
      :
      std::format("{:o}{}", value, suffixStr)
    )
{
}

LiteralIntOct::~LiteralIntOct()
{
}

}
