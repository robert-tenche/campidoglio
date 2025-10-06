#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeUnsigned : public Campidoglio::DataType
{
public:
  DataTypeUnsigned();
  virtual ~DataTypeUnsigned();
  virtual std::string getTypeNameStr() const override;
};

}
