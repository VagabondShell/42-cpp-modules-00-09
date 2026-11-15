#include "Sed.hpp"
std::string change(const std::string& line, const std::string& s1, const std::string& s2) {
    std::string modifiedLine;
    size_t currentPos = 0;
    size_t foundPos;

    if (s1.empty()) { 
        return line; 
    }

    while ((foundPos = line.find(s1, currentPos)) != std::string::npos) {
        modifiedLine.append(line.substr(currentPos, foundPos - currentPos));
        modifiedLine.append(s2);
        currentPos = foundPos + s1.length();
    }
    modifiedLine.append(line.substr(currentPos));
    return modifiedLine;
}
