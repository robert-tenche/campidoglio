#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeLongLong : public Campidoglio::DataType
{
public:
  DataTypeLongLong();
  virtual ~DataTypeLongLong();
  virtual std::string getTypeNameStr() const override;
};

}
