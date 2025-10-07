#pragma once

#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

class LiteralIntBin : public Campidoglio::Literal
{
public:
  LiteralIntBin(uint8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(uint16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(uint32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(uint64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);

  LiteralIntBin(int8_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(int16_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(int32_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  LiteralIntBin(int64_t value, const std::string& suffixStr = "", bool insertLeadingZeroes = false);
  virtual ~LiteralIntBin();
};

}
