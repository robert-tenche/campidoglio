#include <Campidoglio/DataTypeChar.hpp>

namespace Campidoglio
{

DataTypeChar::DataTypeChar()
  : DataType()
{
}

DataTypeChar::~DataTypeChar()
{
}

std::string DataTypeChar::getTypeNameStr() const
{
  return "char";
}

}
