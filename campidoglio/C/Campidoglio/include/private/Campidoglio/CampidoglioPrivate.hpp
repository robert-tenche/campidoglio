#pragma once

#include "Campidoglio/File.hpp"

namespace Campidoglio
{

class CampidoglioPrivate
{
public:
  static void setFileAndOutputStreamContext(File* currentFile, std::ofstream& outputStream);
  static std::ofstream& getCurrentOutputStreamRef();
  static File& getCurrentFileRef();
};

}
