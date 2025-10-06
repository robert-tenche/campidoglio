#include <Campidoglio/DataTypeUnsignedShort.hpp>

namespace Campidoglio
{

DataTypeUnsignedShort::DataTypeUnsignedShort()
  : DataType()
{
}

DataTypeUnsignedShort::~DataTypeUnsignedShort()
{
}

std::string DataTypeUnsignedShort::getTypeNameStr() const
{
  return "unsigned short";
}

}
