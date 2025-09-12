#pragma once

/**
 * @file Scanner.hpp
 *
 * @brief Performs lexical analysis of Lox source strings
 */

#include <string>
#include <vector>
#include "Token.hpp"

class Scanner
{
public:

  /**
   * @brief Constructor
   */
  Scanner(std::string source);

  /**
   * @brief Destructor
   */
  ~Scanner();

  /**
   * @brief Perform lexical analysis on the source string.
   *
   * @param[out] tokens The list of tokens found in the source string by the scanner.
   */
  void scanTokens(std::vector<Token> &tokens);

  /**
   * @brief Scan the next token in the source string.
   */
  void scanToken();

  /**
   * @brief Consume and return the next character in the source string.
   *
   * @return The next character in the source string.
   */
  char advance();

  /**
   * @brief Create a new token from the current lexeme.
   *
   * @param[in] type The type of the token to be created from the current lexeme.
   * @param[in] literal The literal value of the token.
   */
  void addToken(Token::TOKENTYPE type, void *literal = nullptr);

  /**
   * @brief Check whether the next token matches the expected character.
   *
   * @param[in] expected The candidate for the next character.
   */
  void match(char expected);

  /**
   * @brief A predicate whose value is determined by whether the end of the source string has been reached.
   *
   * @return true if the end of the source string has been reached, false otherwise.
   */
  bool isAtEnd();

private:

  std::string m_source;
  std::vector<Token> m_tokens;

};
