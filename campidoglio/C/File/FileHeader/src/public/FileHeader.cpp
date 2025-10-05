#include "Campidoglio/FileHeader.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"
#include "Campidoglio/FileHeaderGuardEnd.hpp"
#include "Campidoglio/FileHeaderGuardStart.hpp"
#include "Campidoglio/Message.hpp"

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
    throw std::runtime_error(Message::cannotOpenFile(filePath_.string(), Message::ErrorLevel::ERROR));
  }

  CampidoglioPrivate::setFileAndOutputStreamContext(this, out);

  {
    FileHeaderGuardStart guardStart;
    content();
    FileHeaderGuardEnd guardEnd;
  }

  out.close();
}

}