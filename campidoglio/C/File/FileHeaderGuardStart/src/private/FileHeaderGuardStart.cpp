#include "Campidoglio/FileHeaderGuardStart.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"

namespace Campidoglio
{

void FileHeaderGuardStart::generate()
{
  std::ofstream& outputStreamRef = CampidoglioPrivate::getCurrentOutputStreamRef();
  std::string fileName = CampidoglioPrivate::getCurrentFileRef().getFileName();

  std::transform(fileName.begin(), fileName.end(), fileName.begin(),
    [](char c){ return std::toupper(c); });

  std::replace(fileName.begin(), fileName.end(), '.' , '_');

  outputStreamRef << std::format(
    "#ifndef {0}\n"
    "#define {0}\n"
    "\n"
    , fileName
  );

}

}