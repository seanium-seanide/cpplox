/**
 * @file ErrorReporter.cpp
 *
 * @brief Implementation of class ErrorReporter.
 */

#include "ErrorReporter.hpp"

ErrorReporter::ErrorReporter()
: m_hadError(false)
{
  // TODO: Remove when used
  static_cast<void>(m_hadError);
}

ErrorReporter::~ErrorReporter()
{
}

void ErrorReporter::error(int line, const std::string &message)
{
}

void ErrorReporter::report(int line, const std::string &where, const std::string &message)
{
}
