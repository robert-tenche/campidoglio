#include <Campidoglio/DataTypeLongInt.hpp>

namespace Campidoglio
{

DataTypeLongInt::DataTypeLongInt()
  : DataType()
{
}

DataTypeLongInt::~DataTypeLongInt()
{
}

std::string DataTypeLongInt::getTypeNameStr() const
{
  return "long int";
}

}
