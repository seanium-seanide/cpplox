#pragma once

/**
 * @file ErrorReporter.hpp
 *
 * @brief Class for reporting errors.
 */

#include <string>
#include <fmt/core.h>

class ErrorReporter
{
public:

  ErrorReporter();
  ~ErrorReporter();

  /**
   * @brief Log an error message.
   *
   * @param[in] line Number of the line the error occurred on.
   * @param[in] message Error message for logging.
   */
  void error(int line, const std::string &message);

  /**
   * @brief Log an error message.
   *
   * @param[in] line Number of the line the error occured on.
   * @param[in] where.
   * @param[in] message Error message for logging.
   */
  void report(int line, const std::string &where, const std::string &message);

private:

  bool m_hadError;

};
