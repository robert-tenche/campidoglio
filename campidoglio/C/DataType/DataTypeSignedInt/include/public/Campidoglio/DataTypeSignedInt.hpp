#pragma once

#include <Campidoglio/DataType.hpp>

namespace Campidoglio
{

class DataTypeSignedInt : public Campidoglio::DataType
{
public:
  DataTypeSignedInt();
  virtual ~DataTypeSignedInt();
  virtual std::string getTypeNameStr() const override;
};

}
