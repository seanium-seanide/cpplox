/**
 * @file Scanner.cpp
 *
 * @brief Class implementation
 */

#include "Scanner.hpp"

Scanner::Scanner(std::string source)
: m_source(source)
{
}

Scanner::~Scanner()
{
}

void Scanner::scanTokens(std::vector<Token> &tokens)
{
}

void Scanner::scanToken()
{
}

char Scanner::advance()
{
  // Placeholder
  return 'a';
}

void Scanner::addToken(Token::TOKENTYPE type, void *literal)
{
}

void Scanner::match(char expected)
{
}

bool Scanner::isAtEnd()
{
  // Placeholder
  return true;
}
