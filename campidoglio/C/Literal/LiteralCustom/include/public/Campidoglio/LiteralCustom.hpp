#pragma once

#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

class LiteralCustom : public Campidoglio::Literal
{
public:
  LiteralCustom(const std::string& customStr);
  virtual ~LiteralCustom();
};

}
