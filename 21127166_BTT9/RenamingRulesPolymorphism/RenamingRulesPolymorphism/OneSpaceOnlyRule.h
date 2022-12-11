#pragma once
#include "IRule.h"

class OneSpaceOnlyRule :public IRule {
public:
	string rename(string);
	string toString();
};