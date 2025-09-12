#pragma once

/**
 * @file Token.hpp
 *
 * @brief A container for a lexeme, and associated metadata
 */

#include <string>

class Token
{
public:

  enum class TOKENTYPE
  {
    // Single character
      LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE
    , COMMA, DOT, PLUS, SEMICOLON, SLASH, STAR

    // Single or double character
    , BANG, BANG_EQUAL, EQUAL, EQUAL_EQUAL
    , GREATER, GREATER_EQUAL, LESS, LESS_EQUAL

    // Literals
    , IDENTIFIER, STRING, NUMBER

    // Keywords
    , AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR
    , PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE

    // End of file
    , END_OF_FILE
  };

  /**
   * @brief Constructor.
   *
   * @param[in] type Type of the token.
   * @param[in] lexeme Lexeme corresponding to the token.
   * @param[in] literal Literal value of the token.
   * @param[in] line Number of the line on which the token occurred.
   */
  Token(TOKENTYPE type, const std::string &lexeme, void *literal, int line);

  /**
   * @brief Destructor
   */
  ~Token();

  /**
   * @breif Produce a string representation of the token.
   *
   * @return the string representation of the token.
   */
  std::string toString();

private:

  TOKENTYPE m_type;
  std::string m_lexeme;
  void *m_literal;
  int m_line;
};
