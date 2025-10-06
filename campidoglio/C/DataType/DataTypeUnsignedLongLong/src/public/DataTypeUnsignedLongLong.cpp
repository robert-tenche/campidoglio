#include <Campidoglio/DataTypeUnsignedLongLong.hpp>

namespace Campidoglio
{

DataTypeUnsignedLongLong::DataTypeUnsignedLongLong()
  : DataType()
{
}

DataTypeUnsignedLongLong::~DataTypeUnsignedLongLong()
{
}

std::string DataTypeUnsignedLongLong::getTypeNameStr() const
{
  return "unsigned long long";
}

}
