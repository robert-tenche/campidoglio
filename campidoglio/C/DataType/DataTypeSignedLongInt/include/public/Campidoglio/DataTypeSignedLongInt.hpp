#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedLongInt : public Campidoglio::DataType
{
public:
  DataTypeSignedLongInt();
  virtual ~DataTypeSignedLongInt();
  virtual std::string getTypeNameStr() const override;
};

}
