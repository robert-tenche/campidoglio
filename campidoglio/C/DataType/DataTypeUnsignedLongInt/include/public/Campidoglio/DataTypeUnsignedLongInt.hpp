#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedLongInt : public Campidoglio::DataType
{
public:
  DataTypeUnsignedLongInt();
  virtual ~DataTypeUnsignedLongInt();
  virtual std::string getTypeNameStr() const override;
};

}
