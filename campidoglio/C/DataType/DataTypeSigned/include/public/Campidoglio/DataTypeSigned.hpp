#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSigned : public Campidoglio::DataType
{
public:
  DataTypeSigned();
  virtual ~DataTypeSigned();
  virtual std::string getTypeNameStr() const override;
};

}
