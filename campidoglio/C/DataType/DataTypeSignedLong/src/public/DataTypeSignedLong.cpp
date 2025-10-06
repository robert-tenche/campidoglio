#include <Campidoglio/DataTypeSignedLong.hpp>

namespace Campidoglio
{

DataTypeSignedLong::DataTypeSignedLong()
  : DataType()
{
}

DataTypeSignedLong::~DataTypeSignedLong()
{
}

std::string DataTypeSignedLong::getTypeNameStr() const
{
  return "signed long";
}

}
