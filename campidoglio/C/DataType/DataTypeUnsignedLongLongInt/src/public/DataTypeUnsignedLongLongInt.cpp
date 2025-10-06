#include <Campidoglio/DataTypeUnsignedLongLongInt.hpp>

namespace Campidoglio
{

DataTypeUnsignedLongLongInt::DataTypeUnsignedLongLongInt()
  : DataType()
{
}

DataTypeUnsignedLongLongInt::~DataTypeUnsignedLongLongInt()
{
}

std::string DataTypeUnsignedLongLongInt::getTypeNameStr() const
{
  return "unsigned long long int";
}

}
