#include <Campidoglio/DataTypeSignedShort.hpp>

namespace Campidoglio
{

DataTypeSignedShort::DataTypeSignedShort()
  : DataType()
{
}

DataTypeSignedShort::~DataTypeSignedShort()
{
}

std::string DataTypeSignedShort::getTypeNameStr() const
{
  return "signed short";
}

}
