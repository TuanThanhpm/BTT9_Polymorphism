#pragma once
#include "Object.h"
#include "Utils.h"
#include <regex>

using std::regex;

class IParsable {
public:
	virtual Object* parse(string) = 0;
	virtual string parsedObjectName() = 0;
};