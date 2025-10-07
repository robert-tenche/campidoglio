#pragma once

#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

class LiteralIntOct : public Campidoglio::Literal
{
public:
  LiteralIntOct(uint8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(uint16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(uint32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(uint64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);

  LiteralIntOct(int8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(int16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(int32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntOct(int64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  virtual ~LiteralIntOct();
};

}
