#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int x= line.find(":");
    return line.substr(x+2);
}

std::string log_level(std::string line) {
    // return the log level
    int y= line.find("]");
    int len = y-1;
    return line.substr(1,len);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line)+" ("+log_level(line)+")";
}
}  // namespace log_line
