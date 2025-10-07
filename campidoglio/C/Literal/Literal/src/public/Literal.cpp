#include <Campidoglio/Literal.hpp>

namespace Campidoglio
{

Literal::Literal(const std::string& valueStr)
  : valueStr_(valueStr)
{
}

Literal::~Literal()
{
}

std::string Literal::getValue() const
{
  return valueStr_;
}

}
