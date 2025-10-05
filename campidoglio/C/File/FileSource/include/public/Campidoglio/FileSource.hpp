#pragma once

#include <Campidoglio/File.hpp>

namespace Campidoglio
{

class FileSource : public Campidoglio::File
{
public:
  FileSource(const std::filesystem::path& filePath);
  ~FileSource();
  virtual void generate() override;
  virtual void content() = 0;

};

}
