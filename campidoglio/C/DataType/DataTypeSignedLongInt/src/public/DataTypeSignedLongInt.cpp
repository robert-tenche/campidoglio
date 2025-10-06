#include <Campidoglio/DataTypeSignedLongInt.hpp>

namespace Campidoglio
{

DataTypeSignedLongInt::DataTypeSignedLongInt()
  : DataType()
{
}

DataTypeSignedLongInt::~DataTypeSignedLongInt()
{
}

std::string DataTypeSignedLongInt::getTypeNameStr() const
{
  return "signed long int";
}

}
