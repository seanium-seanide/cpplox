#pragma once

/**
 * @file Lox.hpp
 *
 * @brief Application class for a Lox language interpreter.
 */

#include <string>
#include <string_view>
#include <vector>

class Lox
{
public:

  /**
   * @breif Constructor.
   *
   * Gets command-line arguments and executable name from arguments to main().
   */
  Lox(int argc, char **argv);

  /**
   * @breif Destructor.
   */
  ~Lox();

  /**
   * @brief Entry point to the Lox interpreter.
   *
   * @return An error code returned to the operation system upon conclusion of execution.
   */
  [[nodiscard]]
  int main() noexcept;

  /**
   * @brief Execute a Lox source file.
   *
   * @param[in] path Path to Lox source file.
   */
  void runFile(const std::string &path);

  /**
   * @brief Execute Lox code in interactive mode.
   */
  void runPrompt();

  /**
   * @brief Execute a Lox source string.
   *
   * @param[in] source A Lox language source string.
   */
  void run(const std::string &source);

private:

  std::string_view m_exeName;
  std::vector<std::string_view> m_args;
};
