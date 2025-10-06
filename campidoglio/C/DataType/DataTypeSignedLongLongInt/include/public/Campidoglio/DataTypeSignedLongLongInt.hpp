#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedLongLongInt : public Campidoglio::DataType
{
public:
  DataTypeSignedLongLongInt();
  virtual ~DataTypeSignedLongLongInt();
  virtual std::string getTypeNameStr() const override;
};

}
