#include "utilities.hpp"

#include <fstream>
#include <fmt/core.h>

bool utilities::isDigit(char c)
{
  // Placeholder
  return true;
}

bool utilities::isAlpha(char c)
{
  // Placeholder
  return true;
}

bool utilities::isAlnum(char c)
{
  // Placeholder
  return true;
}

// TODO: Complete implementation
//
// Candidate (simpler) solution
//
// Source: https://stackoverflow.com/questions/116038/how-do-i-read-an-entire-file-into-a-stdstring-in-c
//
//std::string slurp(std::ifstream& in) {
//    std::ostringstream sstr;
//    sstr << in.rdbuf();
//    return sstr.str();
//}
//
std::string utilities::readFile(const std::string &path)
{
  size_t bufferSize = 4096;

  std::ifstream istream;
  istream.open(path);
  if (!istream.is_open())
  {
    throw std::runtime_error(fmt::format("Failed to open file: {}.", path));
  }

  std::string readBuffer{bufferSize, '\0'}; // Read buffer
  std::string fileText{};                   // Text in file

  while (istream.read(&readBuffer[0], bufferSize)) // read bufferSize characters into readBuffer
  {
    // TODO: Figure out the best way to read the entire file, buffer-by-buffer
    //fileText.append(bufferSize, 0, istream.gcount());
  }

  //fileText.append(readBuffer, 0, istream.gcount());

  return fileText;
}
