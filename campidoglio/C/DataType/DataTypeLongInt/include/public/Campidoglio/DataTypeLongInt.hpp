#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeLongInt : public Campidoglio::DataType
{
public:
  DataTypeLongInt();
  virtual ~DataTypeLongInt();
  virtual std::string getTypeNameStr() const override;
};

}
