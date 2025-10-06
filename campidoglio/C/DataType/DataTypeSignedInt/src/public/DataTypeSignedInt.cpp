#include <Campidoglio/DataTypeSignedInt.hpp>

namespace Campidoglio
{

DataTypeSignedInt::DataTypeSignedInt()
  : DataType()
{
}

DataTypeSignedInt::~DataTypeSignedInt()
{
}

std::string DataTypeSignedInt::getTypeNameStr() const
{
  return "signed int";
}

}
