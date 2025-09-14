#pragma once

/**
 * @file Scanner.hpp
 *
 * @brief Performs lexical analysis of Lox source strings
 */

#include <string>
#include <vector>
#include <unordered_map>
#include "Token.hpp"
#include "utilities.hpp"

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

  /**
   * @brief Look ahead one character in the source buffer, without updating the current position.
   *
   * @return The next character in the source buffer.
   */
  char peek();

  /**
   * @brief Look ahead two characters in the source buffer, without updating the current position.
   *
   * @return The character after the next in the source buffer.
   */
  char peekNext();

  /**
   * @brief Parse a string, starting from the current positon in the source buffer.
   */
  void string();

  /**
   * @brief Parse a number, starting from the current positon in the source buffer.
   */
  void number();

  /**
   * @brief Parse an identifier, starting from the current positon in the source buffer.
   */
  void identifier();

private:

  std::string m_source;
  std::vector<Token> m_tokens;

  size_t m_start;
  size_t m_current;
  size_t m_line;

  static const std::unordered_map<std::string, Token::TOKENTYPE> m_keywords;
};
