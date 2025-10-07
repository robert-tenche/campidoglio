#pragma once

#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

class LiteralIntHex : public Campidoglio::Literal
{
public:
  LiteralIntHex(uint8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(uint16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(uint32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(uint64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);

  LiteralIntHex(int8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(int16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(int32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntHex(int64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  virtual ~LiteralIntHex();
};

}
