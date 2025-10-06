#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedShortInt : public Campidoglio::DataType
{
public:
  DataTypeUnsignedShortInt();
  virtual ~DataTypeUnsignedShortInt();
  virtual std::string getTypeNameStr() const override;
};

}
