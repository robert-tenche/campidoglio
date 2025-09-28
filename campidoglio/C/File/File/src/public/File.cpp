#include "Campidoglio/File.hpp"

namespace Campidoglio
{

std::string File::getFileName()
{
  return fileName_;
}


File::File(const std::filesystem::path& filePath)
  : filePath_(filePath), fileName_(filePath.filename().string())
{
}

File::~File()
{
}

}


