#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeChar : public Campidoglio::DataType
{
public:
  DataTypeChar();
  virtual ~DataTypeChar();
  virtual std::string getTypeNameStr() const override;
};

}
