#pragma once

#include <string>

namespace utilities
{
  /**
   * @brief Determines whether a character is a digit.
   *
   * @param[in] c The character to test.
   *
   * @return true if the character is a digit, false otherwise.
   */
  bool isDigit(char c) noexcept;

  /**
   * @brief Determines whether a character is alphabetical, or an underscore.
   *
   * @param[in] c The character to test.
   *
   * @return true if the character is either alphabetical or an underscore, false otherwise.
   */
  bool isAlpha(char c) noexcept;

  /**
   * @brief Determines whether a character is alphanumeric.
   *
   * @param[in] c The character to test.
   *
   * @return true if the character is alphanumeric, false otherwise.
   */
  bool isAlnum(char c) noexcept;

  /**
   * @brief Read an entire text file into a string.
   *
   * @param[out] result A sequence of characters read from the file.
   * @param[in] path The path of the file to read.
   */
  void readFile(std::string &result, const std::string &path);
}
