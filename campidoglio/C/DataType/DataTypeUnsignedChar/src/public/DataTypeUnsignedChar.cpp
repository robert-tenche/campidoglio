#include <Campidoglio/DataTypeUnsignedChar.hpp>

namespace Campidoglio
{

DataTypeUnsignedChar::DataTypeUnsignedChar()
  : DataType()
{
}

DataTypeUnsignedChar::~DataTypeUnsignedChar()
{
}

std::string DataTypeUnsignedChar::getTypeNameStr() const
{
  return "unsigned char";
}

}
