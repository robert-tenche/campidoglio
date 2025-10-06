#include <Campidoglio/DataTypeShortInt.hpp>

namespace Campidoglio
{

DataTypeShortInt::DataTypeShortInt()
  : DataType()
{
}

DataTypeShortInt::~DataTypeShortInt()
{
}

std::string DataTypeShortInt::getTypeNameStr() const
{
  return "short int";
}

}
