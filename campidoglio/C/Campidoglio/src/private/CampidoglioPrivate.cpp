#include "Campidoglio/CampidoglioPrivate.hpp"

namespace Campidoglio
{

static std::unordered_map<std::thread::id, std::pair<File*, std::ofstream*>> contextStackMap;
static std::mutex mutexContextStackMap;

void CampidoglioPrivate::setContext(File& currentFile, std::ofstream& outputStream)
{
  std::lock_guard<std::mutex> lock(mutexContextStackMap);

  contextStackMap[std::this_thread::get_id()] = std::make_pair(&currentFile, &outputStream);
}

std::ofstream& CampidoglioPrivate::getCurrentOutputStreamRef()
{
  return *contextStackMap[std::this_thread::get_id()].second;
}

File& CampidoglioPrivate::getCurrentFileRef()
{
  return *contextStackMap[std::this_thread::get_id()].first;
}


}
