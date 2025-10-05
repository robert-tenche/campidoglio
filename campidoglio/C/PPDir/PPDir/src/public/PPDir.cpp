#include "Campidoglio/PPDir.hpp"
#include "Campidoglio/CampidoglioPrivate.hpp"
#include "Campidoglio/Message.hpp"

namespace Campidoglio
{

  void PPDir::include(Campidoglio::FileHeader& fileHeader)
  {
    if (!fileHeader.isUserDefined())
    {
      throw std::runtime_error(Message::isNotUserDefinedClass("PPDir::include", Message::ErrorLevel::ERROR));
    }

    std::ofstream& outputStreamRef = CampidoglioPrivate::getCurrentOutputStreamRef();
    std::string fileName = fileHeader.getFileName();

    outputStreamRef << std::format(
      "#include \"{0}\"\n"
      "\n"
      , fileName
    );
  }


  PPDir::PPDir()
  {
  }

  PPDir::~PPDir()
  {
  }

}
