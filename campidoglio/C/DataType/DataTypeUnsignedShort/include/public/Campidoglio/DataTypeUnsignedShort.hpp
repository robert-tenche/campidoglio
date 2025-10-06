#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedShort : public Campidoglio::DataType
{
public:
  DataTypeUnsignedShort();
  virtual ~DataTypeUnsignedShort();
  virtual std::string getTypeNameStr() const override;
};

}
