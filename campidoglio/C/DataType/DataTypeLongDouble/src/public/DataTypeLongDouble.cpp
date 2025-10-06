#include <Campidoglio/DataTypeLongDouble.hpp>

namespace Campidoglio
{

DataTypeLongDouble::DataTypeLongDouble()
  : DataType()
{
}

DataTypeLongDouble::~DataTypeLongDouble()
{
}

std::string DataTypeLongDouble::getTypeNameStr() const
{
  return "long double";
}

}
