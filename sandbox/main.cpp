#include <Campidoglio/Campidoglio.hpp>

#include <format>
#include <iostream>


struct StdTypesH : public Campidoglio::FileHeader
{
  virtual bool isUserDefined() const override { return true; }

  StdTypesH(const std::string& path = "") : Campidoglio::FileHeader(std::format("{}StdTypes.h", path)) {}

  virtual void content() override
  {
  }

};

struct StdTypesC : public Campidoglio::FileSource
{
  StdTypesH stdTypesH;

  StdTypesC(const std::string& path = "") : Campidoglio::FileSource(std::format("{}StdTypes.c", path))
  {
  }

  virtual void content() override
  {
    Campidoglio::PPDir::include(stdTypesH);
  }

};

int main()
{
  StdTypesH stdTypesH("./dbg/"); stdTypesH.generate();
  StdTypesC stdTypesC("./dbg/"); stdTypesC.generate();

  return 0;
}
