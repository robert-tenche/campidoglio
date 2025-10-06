#include <Campidoglio/DataTypeUnsignedLongInt.hpp>

namespace Campidoglio
{

DataTypeUnsignedLongInt::DataTypeUnsignedLongInt()
  : DataType()
{
}

DataTypeUnsignedLongInt::~DataTypeUnsignedLongInt()
{
}

std::string DataTypeUnsignedLongInt::getTypeNameStr() const
{
  return "unsigned long int";
}

}
