#pragma once

namespace utilities
{
  /**
   * @brief Determines whether a character is a digit.
   *
   * @param c The character to test.
   *
   * @return true if the character is a digit, false otherwise.
   */
  bool isDigit(char c);

  /**
   * @brief Determines whether a character is alphabetical, or an underscore.
   *
   * @param c The character to test.
   *
   * @return true if the character is either alphabetical or an underscore, false otherwise.
   */
  bool isAlpha(char c);

  /**
   * @brief Determines whether a character is alphanumeric.
   *
   * @param c The character to test.
   *
   * @return true if the character is alphanumeric, false otherwise.
   */
  bool isAlnum(char c);
}
