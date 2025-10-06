#include <Campidoglio/DataTypeShort.hpp>

namespace Campidoglio
{

DataTypeShort::DataTypeShort()
  : DataType()
{
}

DataTypeShort::~DataTypeShort()
{
}

std::string DataTypeShort::getTypeNameStr() const
{
  return "short";
}

}
