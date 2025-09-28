#include "Campidoglio/FileHeader.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"
#include "Campidoglio/FileHeaderGuardEnd.hpp"
#include "Campidoglio/FileHeaderGuardStart.hpp"

namespace Campidoglio
{

FileHeader::FileHeader(const std::filesystem::path& filePath)
  : File(filePath)
{
}

FileHeader::~FileHeader()
{
}

void FileHeader::generate()
{
  std::ofstream out(filePath_.string());

  if (!out.is_open())
  {
    throw std::runtime_error(std::format("Cannot open file: '{}'", filePath_.string()));
  }

  CampidoglioPrivate::setContext(*this, out);

  {
    FileHeaderGuardStart start; start.generate();
    content();
    FileHeaderGuardEnd end; end.generate();
  }

  out.close();
}

}