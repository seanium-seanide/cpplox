/**
 * @file Lox.cpp
 *
 * @brief Implementation of class Lox.
 */

#include "Lox.hpp"

#include <fstream>
#include <cstdlib>
#include <fmt/core.h>

Lox::Lox(int argc, char **argv)
: m_exeName(argv[0])
{
  m_args.resize(argc - 1);

  for (size_t i = 1; i < static_cast<size_t>(argc); ++i)
  {
    m_args.emplace_back(argv[i]);
  }
}

Lox::~Lox()
{
}

int Lox::main() noexcept
{
  if (m_args.size() > 1)
  {
    // Invalid usage
    fmt::print("Usage: cpplox [script]");
    std::exit(64);  // command-line usage error
  }
  else if (m_args.size() == 1)
  {
    // Execute a file
    this->runFile(m_args[0].data());
  }
  else
  {
    // Run the REPL
    this->runPrompt();
  }

  return 0;
}

void Lox::runFile(const std::string &path)
{
  std::ifstream infile;
  infile.open(path);

  if (!infile.is_open())
  {
    throw std::runtime_error(fmt::format("Failed to open the file: {}", path));
  }

  infile.close();
}

void Lox::runPrompt()
{
}

void Lox::run(const std::string &source)
{
}
