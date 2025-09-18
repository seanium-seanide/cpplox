/**
 * @file Lox.cpp
 *
 * @brief Implementation of class Lox.
 */

#include "Lox.hpp"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fmt/core.h>
#include "utilities.hpp"

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
  // Read the file
  std::string source;
  utilities::readFile(source, path);

  // Run the file
  run(source);
}

void Lox::runPrompt()
{
  std::string line;

  while (std::getline(std::cin, line))
  {
    // Prompt
    fmt::print("> ");

    if (line == "")
    {
      break;
    }

    run(line);
  }
}

void Lox::run(const std::string &source)
{
}
