#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedShortInt : public Campidoglio::DataType
{
public:
  DataTypeSignedShortInt();
  virtual ~DataTypeSignedShortInt();
  virtual std::string getTypeNameStr() const override;
};

}
