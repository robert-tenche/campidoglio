#pragma once

namespace Campidoglio
{

class Message
{
public:
  enum class ErrorLevel
  {
    DEBUG,
    INFO,
    WARNING,
    ERROR
  };

public:
  static std::string cannotOpenFile(const std::string& filePathString, Message::ErrorLevel errorLevel = Message::ErrorLevel::INFO);
  static std::string isNotUserDefinedClass(const std::string& functionContextString, Message::ErrorLevel errorLevel = Message::ErrorLevel::INFO);

private:
  static std::string getErrorLevelAsString(Message::ErrorLevel errorLevel);

};

}
