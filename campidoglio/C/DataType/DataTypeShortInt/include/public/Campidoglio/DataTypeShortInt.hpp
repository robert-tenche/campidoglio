#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeShortInt : public Campidoglio::DataType
{
public:
  DataTypeShortInt();
  virtual ~DataTypeShortInt();
  virtual std::string getTypeNameStr() const override;
};

}
