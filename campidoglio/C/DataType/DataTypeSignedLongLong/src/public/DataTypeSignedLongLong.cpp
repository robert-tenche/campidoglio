#include <Campidoglio/DataTypeSignedLongLong.hpp>

namespace Campidoglio
{

DataTypeSignedLongLong::DataTypeSignedLongLong()
  : DataType()
{
}

DataTypeSignedLongLong::~DataTypeSignedLongLong()
{
}

std::string DataTypeSignedLongLong::getTypeNameStr() const
{
  return "signed long long";
}

}
