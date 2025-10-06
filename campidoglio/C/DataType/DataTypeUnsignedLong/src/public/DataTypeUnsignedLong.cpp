#include <Campidoglio/DataTypeUnsignedLong.hpp>

namespace Campidoglio
{

DataTypeUnsignedLong::DataTypeUnsignedLong()
  : DataType()
{
}

DataTypeUnsignedLong::~DataTypeUnsignedLong()
{
}

std::string DataTypeUnsignedLong::getTypeNameStr() const
{
  return "unsigned long";
}

}
