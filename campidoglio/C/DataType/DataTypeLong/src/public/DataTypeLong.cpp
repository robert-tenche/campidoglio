#include <Campidoglio/DataTypeLong.hpp>

namespace Campidoglio
{

DataTypeLong::DataTypeLong()
  : DataType()
{
}

DataTypeLong::~DataTypeLong()
{
}

std::string DataTypeLong::getTypeNameStr() const
{
  return "long";
}

}
