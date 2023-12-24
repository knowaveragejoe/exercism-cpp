#include <string>

namespace log_line {
  std::string message(std::string msg) {
    int colon = msg.find(" ");
    return msg.substr(colon + 1);
  }

  std::string log_level(std::string msg) {
    int bracket = msg.find("]");

    return msg.substr(1, bracket - 1);
  }

  std::string reformat(std::string msg) {
    return message(msg) + " (" + log_level(msg) + ")";
  }
} // namespace log_line
