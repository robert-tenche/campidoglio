#include <Campidoglio/DataTypeSignedLongLongInt.hpp>

namespace Campidoglio
{

DataTypeSignedLongLongInt::DataTypeSignedLongLongInt()
  : DataType()
{
}

DataTypeSignedLongLongInt::~DataTypeSignedLongLongInt()
{
}

std::string DataTypeSignedLongLongInt::getTypeNameStr() const
{
  return "signed long long int";
}

}
