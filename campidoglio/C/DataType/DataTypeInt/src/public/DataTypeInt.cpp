#include <Campidoglio/DataTypeInt.hpp>

namespace Campidoglio
{

DataTypeInt::DataTypeInt()
  : DataType()
{
}

DataTypeInt::~DataTypeInt()
{
}

std::string DataTypeInt::getTypeNameStr() const
{
  return "int";
}

}
