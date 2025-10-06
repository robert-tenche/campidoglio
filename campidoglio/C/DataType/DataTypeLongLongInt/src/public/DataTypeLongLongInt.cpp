#include <Campidoglio/DataTypeLongLongInt.hpp>

namespace Campidoglio
{

DataTypeLongLongInt::DataTypeLongLongInt()
  : DataType()
{
}

DataTypeLongLongInt::~DataTypeLongLongInt()
{
}

std::string DataTypeLongLongInt::getTypeNameStr() const
{
  return "long long int";
}

}
