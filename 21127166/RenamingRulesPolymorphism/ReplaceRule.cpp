#include "ReplaceRule.h"
#include <sstream>

using std::stringstream;

ReplaceRule::ReplaceRule(string pattern, string replacement) {
    this->_pattern = pattern;
    this->_replacement = replacement;
}

string ReplaceRule::rename(string origin) {
    size_t index = 0;

    while ((index = origin.find(this->_pattern, index)) != string::npos) {
        origin.replace(index, this->_pattern.length(), this->_replacement);
        index += this->_replacement.length();
    }
    return origin;
}

string ReplaceRule::toString() {
    return "ReplaceRule";
}