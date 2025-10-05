#pragma once

#include <Campidoglio/FileHeader.hpp>


namespace Campidoglio
{

class PPDir
{
public:
  static void include(Campidoglio::FileHeader& fileHeader);

protected:
  PPDir();
  ~PPDir();

};

}
