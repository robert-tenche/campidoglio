#include <Campidoglio/DataTypeSignedShortInt.hpp>

namespace Campidoglio
{

DataTypeSignedShortInt::DataTypeSignedShortInt()
  : DataType()
{
}

DataTypeSignedShortInt::~DataTypeSignedShortInt()
{
}

std::string DataTypeSignedShortInt::getTypeNameStr() const
{
  return "signed short int";
}

}
