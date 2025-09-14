/**
 * @file Lox.cpp
 *
 * @brief Implementation of class Lox.
 */

#include "Lox.hpp"

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

int Lox::main()
{
  fmt::print("Hello, world!\n");

  return 0;
}

void Lox::runFile(const std::string &path)
{
}

void Lox::runPrompt()
{
}

void Lox::run(const std::string &source)
{
}
