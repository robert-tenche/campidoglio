#pragma once

#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

class LiteralIntDec : public Campidoglio::Literal
{
public:
  LiteralIntDec(uint8_t value, const std::string& suffixStr = "");
  LiteralIntDec(uint16_t value, const std::string& suffixStr = "");
  LiteralIntDec(uint32_t value, const std::string& suffixStr = "");
  LiteralIntDec(uint64_t value, const std::string& suffixStr = "");

  LiteralIntDec(int8_t value, const std::string& suffixStr = "");
  LiteralIntDec(int16_t value, const std::string& suffixStr = "");
  LiteralIntDec(int32_t value, const std::string& suffixStr = "");
  LiteralIntDec(int64_t value, const std::string& suffixStr = "");
  virtual ~LiteralIntDec();
};

}
