#include <Campidoglio/DataTypeSignedChar.hpp>

namespace Campidoglio
{

DataTypeSignedChar::DataTypeSignedChar()
  : DataType()
{
}

DataTypeSignedChar::~DataTypeSignedChar()
{
}

std::string DataTypeSignedChar::getTypeNameStr() const
{
  return "signed char";
}

}
