#include <Campidoglio/DataTypeUnsignedShortInt.hpp>

namespace Campidoglio
{

DataTypeUnsignedShortInt::DataTypeUnsignedShortInt()
  : DataType()
{
}

DataTypeUnsignedShortInt::~DataTypeUnsignedShortInt()
{
}

std::string DataTypeUnsignedShortInt::getTypeNameStr() const
{
  return "unsigned short int";
}

}
