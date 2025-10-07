#pragma once

namespace Campidoglio
{

class Literal
{
public:
  Literal(const std::string& valueStr);
  virtual ~Literal();
  std::string getValue() const;

protected:
  std::string suffixStr_;
  std::string valueStr_;
};

}
