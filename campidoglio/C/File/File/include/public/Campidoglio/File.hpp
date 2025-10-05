#pragma once

namespace Campidoglio
{

class File
{
public:
  virtual void generate() = 0;
  std::string getFileName() const;

protected:
  File(const std::filesystem::path& filePath);
  virtual ~File();

protected:
  const std::filesystem::path filePath_;
  const std::string fileName_;

};

}


