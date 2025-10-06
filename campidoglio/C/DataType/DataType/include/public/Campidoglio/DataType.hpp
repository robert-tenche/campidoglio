#pragma once

namespace Campidoglio
{

class DataType
{
public:
  DataType();
  virtual ~DataType();
  virtual std::string getTypeNameStr() const = 0;
};

}
