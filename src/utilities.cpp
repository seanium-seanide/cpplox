#include "utilities.hpp"

#include <fstream>
#include <fmt/core.h>

bool utilities::isDigit(char c) noexcept
{
  // Placeholder
  return true;
}

bool utilities::isAlpha(char c) noexcept
{
  // Placeholder
  return true;
}

bool utilities::isAlnum(char c) noexcept
{
  // Placeholder
  return true;
}

// TODO: Complete implementation
void utilities::readFile(std::string &result, const std::string &path)
{
  // Open the input file in binary mode, and seek to the end of the stream
  std::ifstream infile(path, std::ios::binary | std::ios::ate);
  if (!infile.is_open())
  {
    throw std::runtime_error(fmt::format("Failed to open file: {}", path));
  }

  // Clear the output buffer
  result.clear();

  // Get the file size (position of the get pointer)
  std::streamsize fileSize = infile.tellg();

  // Seek the get pointer to offset 0 relative to the beginning of the file stream
  infile.seekg(0, std::ios::beg);

  // Read the file
  result.resize(fileSize, '\0');
  infile.read(result.data(), fileSize);

  // Close the input file
  infile.close();
}
