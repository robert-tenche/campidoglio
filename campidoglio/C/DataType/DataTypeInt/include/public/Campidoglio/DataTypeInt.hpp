#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeInt : public Campidoglio::DataType
{
public:
  DataTypeInt();
  virtual ~DataTypeInt();
  virtual std::string getTypeNameStr() const override;
};

}
