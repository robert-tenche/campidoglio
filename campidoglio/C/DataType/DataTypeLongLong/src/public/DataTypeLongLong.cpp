#include <Campidoglio/DataTypeLongLong.hpp>

namespace Campidoglio
{

DataTypeLongLong::DataTypeLongLong()
  : DataType()
{
}

DataTypeLongLong::~DataTypeLongLong()
{
}

std::string DataTypeLongLong::getTypeNameStr() const
{
  return "long long";
}

}
