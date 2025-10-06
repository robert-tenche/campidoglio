#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedChar : public Campidoglio::DataType
{
public:
  DataTypeUnsignedChar();
  virtual ~DataTypeUnsignedChar();
  virtual std::string getTypeNameStr() const override;
};

}
