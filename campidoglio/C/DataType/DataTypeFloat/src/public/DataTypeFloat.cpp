#include <Campidoglio/DataTypeFloat.hpp>

namespace Campidoglio
{

DataTypeFloat::DataTypeFloat()
  : DataType()
{
}

DataTypeFloat::~DataTypeFloat()
{
}

std::string DataTypeFloat::getTypeNameStr() const
{
  return "float";
}

}
