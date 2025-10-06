#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedLongLong : public Campidoglio::DataType
{
public:
  DataTypeSignedLongLong();
  virtual ~DataTypeSignedLongLong();
  virtual std::string getTypeNameStr() const override;
};

}
