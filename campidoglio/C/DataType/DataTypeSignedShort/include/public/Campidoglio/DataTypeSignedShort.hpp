#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedShort : public Campidoglio::DataType
{
public:
  DataTypeSignedShort();
  virtual ~DataTypeSignedShort();
  virtual std::string getTypeNameStr() const override;
};

}
