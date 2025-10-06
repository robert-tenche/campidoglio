#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedLong : public Campidoglio::DataType
{
public:
  DataTypeSignedLong();
  virtual ~DataTypeSignedLong();
  virtual std::string getTypeNameStr() const override;
};

}
