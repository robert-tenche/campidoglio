#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeFloat : public Campidoglio::DataType
{
public:
  DataTypeFloat();
  virtual ~DataTypeFloat();
  virtual std::string getTypeNameStr() const override;
};

}
