#pragma once
#include <vector>
#include <string>
#include <sstream>

using std::vector, std::string, std::stringstream;
namespace Utils {
    class String {
    public:
        static vector<string> split(string haystack, string needle);
    };
}