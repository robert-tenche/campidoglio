#include <Campidoglio/LiteralIntDec.hpp>

namespace Campidoglio
{

LiteralIntDec::LiteralIntDec(uint8_t value, const std::string& suffixStr)
  : Literal(std::format("{}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(uint16_t value, const std::string& suffixStr)
  : Literal(std::format("{}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(uint32_t value, const std::string& suffixStr)
  : Literal(std::format("{}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(uint64_t value, const std::string& suffixStr)
  : Literal(std::format("{}{}", value, suffixStr))
{
}




LiteralIntDec::LiteralIntDec(int8_t value, const std::string& suffixStr)
  : Literal(std::format("{:-}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(int16_t value, const std::string& suffixStr)
  : Literal(std::format("{:-}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(int32_t value, const std::string& suffixStr)
  : Literal(std::format("{:-}{}", value, suffixStr))
{
}

LiteralIntDec::LiteralIntDec(int64_t value, const std::string& suffixStr)
  : Literal(std::format("{:-}{}", value, suffixStr))
{
}

LiteralIntDec::~LiteralIntDec()
{
}

}
