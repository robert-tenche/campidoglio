#include <Campidoglio/DataTypeDouble.hpp>

namespace Campidoglio
{

DataTypeDouble::DataTypeDouble()
  : DataType()
{
}

DataTypeDouble::~DataTypeDouble()
{
}

std::string DataTypeDouble::getTypeNameStr() const
{
  return "double";
}

}
