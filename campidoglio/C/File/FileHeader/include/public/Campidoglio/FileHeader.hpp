#pragma once

#include "Campidoglio/File.hpp"

namespace Campidoglio
{

class FileHeader : public Campidoglio::File
{
public:
  FileHeader(const std::filesystem::path& filePath);
  ~FileHeader();
  virtual void generate() override;
  virtual void content() = 0;

};

}
