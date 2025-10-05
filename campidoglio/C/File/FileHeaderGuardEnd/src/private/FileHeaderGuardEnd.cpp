#include "Campidoglio/FileHeaderGuardEnd.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"

namespace Campidoglio
{

FileHeaderGuardEnd::FileHeaderGuardEnd()
{
  std::ofstream& outputStreamRef = CampidoglioPrivate::getCurrentOutputStreamRef();
  std::string fileName = CampidoglioPrivate::getCurrentFileRef().getFileName();

  std::transform(fileName.begin(), fileName.end(), fileName.begin(),
    [](char c){ return std::toupper(c); });

  std::replace(fileName.begin(), fileName.end(), '.' , '_');

  outputStreamRef << std::format(
    "#endif // {0}\n"
    , fileName
  );

}

}

