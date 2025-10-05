#include "Campidoglio/FileSource.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"

namespace Campidoglio
{

FileSource::FileSource(const std::filesystem::path& filePath)
  : File(filePath)
{
}

FileSource::~FileSource()
{
}

void FileSource::generate()
{
  std::ofstream out(filePath_.string());

  if (!out.is_open())
  {
    throw std::runtime_error(std::format("Cannot open file: '{}'", filePath_.string()));
  }

  CampidoglioPrivate::setFileAndOutputStreamContext(this, out);

  {
    content();
  }

  out.close();
}

}