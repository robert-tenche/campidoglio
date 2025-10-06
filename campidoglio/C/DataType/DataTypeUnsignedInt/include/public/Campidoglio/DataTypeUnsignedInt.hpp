#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsignedInt : public Campidoglio::DataType
{
public:
  DataTypeUnsignedInt();
  virtual ~DataTypeUnsignedInt();
  virtual std::string getTypeNameStr() const override;
};

}
