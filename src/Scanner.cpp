/**
 * @file Scanner.cpp
 *
 * @brief Class implementation
 */

#include "Scanner.hpp"

const std::unordered_map<std::string, Token::TOKENTYPE> m_keywords = {
    {"and", Token::TOKENTYPE::AND}
  , {"class", Token::TOKENTYPE::CLASS}
  , {"else", Token::TOKENTYPE::ELSE}
  , {"false", Token::TOKENTYPE::FALSE}
  , {"for", Token::TOKENTYPE::FOR}
  , {"fun", Token::TOKENTYPE::FUN}
  , {"if", Token::TOKENTYPE::IF}
  , {"nil", Token::TOKENTYPE::NIL}
  , {"or", Token::TOKENTYPE::OR}
  , {"print", Token::TOKENTYPE::PRINT}
  , {"return", Token::TOKENTYPE::RETURN}
  , {"super", Token::TOKENTYPE::SUPER}
  , {"this", Token::TOKENTYPE::THIS}
  , {"true", Token::TOKENTYPE::TRUE}
  , {"var", Token::TOKENTYPE::VAR}
  , {"while", Token::TOKENTYPE::WHILE}
};

Scanner::Scanner(std::string source)
: m_source(source)
, m_start(0)
, m_current(0)
, m_line(1)
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

char Scanner::peek()
{
  // Placeholder
  return 'a';
}

char Scanner::peekNext()
{
  // Placeholder
  return 'a';
}

void Scanner::string()
{
}

void Scanner::number()
{
}

void Scanner::identifier()
{
}
