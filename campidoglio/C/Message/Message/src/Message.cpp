#include "Campidoglio/Message.hpp"

namespace Campidoglio
{

std::string Message::cannotOpenFile(const std::string& filePathString, Message::ErrorLevel errorLevel)
{
  std::string errorLevelString = getErrorLevelAsString(errorLevel);
  std::string msg = std::format("{0} Cannot open file: {1}", errorLevelString, filePathString);
  return std::move(msg);
}

std::string Message::isNotUserDefinedClass(const std::string& functionContextString, Message::ErrorLevel errorLevel)
{
  std::string errorLevelString = getErrorLevelAsString(errorLevel);
  std::string msg = std::format("{0} Recevied object is not user defined! Function context: {1}", errorLevelString, functionContextString);
  return std::move(msg);
}

std::string Message::getErrorLevelAsString(Message::ErrorLevel errorLevel)
{
  std::string errorLevelString;

  switch (errorLevel)
  {
  case Message::ErrorLevel::DEBUG:
  {
    errorLevelString = "[DEBUG]";
  }
  case Message::ErrorLevel::INFO:
  {
    errorLevelString = "[INFO]";
  }
  case Message::ErrorLevel::WARNING:
  {
    errorLevelString = "[WARNING]";
  }
  case Message::ErrorLevel::ERROR:
  {
    errorLevelString = "[ERROR]";
  }
  }

  return std::move(errorLevelString);
}


}