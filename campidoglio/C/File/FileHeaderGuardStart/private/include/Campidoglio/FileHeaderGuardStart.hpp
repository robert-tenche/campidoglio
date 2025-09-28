#pragma once

#include "Campidoglio/FileHeaderGuard.hpp"

namespace Campidoglio
{

class FileHeaderGuardStart : public FileHeaderGuard
{
public:
  virtual void generate() override;
};


}