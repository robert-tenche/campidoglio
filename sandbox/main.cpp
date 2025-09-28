#include "Campidoglio/Campidoglio.hpp"

#include <format>
#include <iostream>


struct StdTypesH : public Campidoglio::FileHeader
{
  StdTypesH(const std::string& path = "") : Campidoglio::FileHeader(std::format("{}StdTypes.h", path))
  {
  }

  virtual void content() override
  {
  }

};

int main()
{
  StdTypesH stdTypesH("./dbg/"); stdTypesH.generate();

  return 0;
}
