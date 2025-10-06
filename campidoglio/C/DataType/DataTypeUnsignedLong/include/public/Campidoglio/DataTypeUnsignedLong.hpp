#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedLong : public Campidoglio::DataType
{
public:
  DataTypeUnsignedLong();
  virtual ~DataTypeUnsignedLong();
  virtual std::string getTypeNameStr() const override;
};

}
