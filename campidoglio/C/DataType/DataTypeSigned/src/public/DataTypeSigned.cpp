#include <Campidoglio/DataTypeSigned.hpp>

namespace Campidoglio
{

DataTypeSigned::DataTypeSigned()
  : DataType()
{
}

DataTypeSigned::~DataTypeSigned()
{
}

std::string DataTypeSigned::getTypeNameStr() const
{
  return "signed";
}

}
