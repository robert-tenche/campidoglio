#include <Campidoglio/DataTypeBool.hpp>

namespace Campidoglio
{

DataTypeBool::DataTypeBool()
  : DataType()
{
}

DataTypeBool::~DataTypeBool()
{
}

std::string DataTypeBool::getTypeNameStr() const
{
  return "bool";
}

}
