#pragma once

#include "Campidoglio/FileHeaderGuard.hpp"

namespace Campidoglio
{

class FileHeaderGuardEnd : public FileHeaderGuard
{
public:
  virtual void generate() override;
};

}