#include <Campidoglio/DataTypeUnsignedInt.hpp>

namespace Campidoglio
{

DataTypeUnsignedInt::DataTypeUnsignedInt()
  : DataType()
{
}

DataTypeUnsignedInt::~DataTypeUnsignedInt()
{
}

std::string DataTypeUnsignedInt::getTypeNameStr() const
{
  return "unsigned int";
}

}
