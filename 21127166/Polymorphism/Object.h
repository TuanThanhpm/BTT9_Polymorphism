#pragma once
#include <string>
#include <sstream>

using std::string;

class Object {
public:
	virtual string toString() = 0;
};