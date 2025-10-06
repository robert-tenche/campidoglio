#include <Campidoglio/DataTypeUnsigned.hpp>

namespace Campidoglio
{

DataTypeUnsigned::DataTypeUnsigned()
  : DataType()
{
}

DataTypeUnsigned::~DataTypeUnsigned()
{
}

std::string DataTypeUnsigned::getTypeNameStr() const
{
  return "unsigned";
}

}
