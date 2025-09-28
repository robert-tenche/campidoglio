#include "Campidoglio/FileHeaderGuardEnd.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"

namespace Campidoglio
{


void FileHeaderGuardEnd::generate()
{
  std::ofstream& outputStream = CampidoglioPrivate::getCurrentOutputStreamRef();

  outputStream << "#endif // <TEST>\n";
}


}

