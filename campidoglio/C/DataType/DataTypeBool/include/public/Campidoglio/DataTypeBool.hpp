#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeBool : public Campidoglio::DataType
{
public:
  DataTypeBool();
  virtual ~DataTypeBool();
  virtual std::string getTypeNameStr() const override;
};

}
