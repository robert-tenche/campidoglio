#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeLongLongInt : public Campidoglio::DataType
{
public:
  DataTypeLongLongInt();
  virtual ~DataTypeLongLongInt();
  virtual std::string getTypeNameStr() const override;
};

}
