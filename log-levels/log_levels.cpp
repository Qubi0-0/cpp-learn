#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        return line.substr(line.find(":") + 2);
    }

    std::string log_level(std::string line) {
        // return the log level
        return line.substr(1,line.find(":")-2);
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return line.substr(line.find(":") + 2) + " (" + line.substr(1,line.find(":")-2) + ")";
    }
}
