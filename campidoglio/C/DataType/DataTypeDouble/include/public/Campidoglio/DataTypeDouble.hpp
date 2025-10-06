#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeDouble : public Campidoglio::DataType
{
public:
  DataTypeDouble();
  virtual ~DataTypeDouble();
  virtual std::string getTypeNameStr() const override;
};

}
