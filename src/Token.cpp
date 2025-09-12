/**
 * @file Token.cpp
 *
 * @brief Class implementation
 */

#include "Token.hpp"

Token::Token(TOKENTYPE type, const std::string &lexeme, void *literal, int line)
: m_type(type)
, m_lexeme(lexeme)
, m_literal(literal)
, m_line(line)
{
  static_cast<void>(m_type);
  static_cast<void>(m_literal);
  static_cast<void>(m_line);
}

Token::~Token()
{
}

std::string Token::toString()
{
  // Placeholder
  return "";
}
