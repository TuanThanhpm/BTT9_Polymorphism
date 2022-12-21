#pragma once
#include "IRule.h"
#include <ctime>

class AddCurrentMonthRule : public IRule {
public:
	string rename(string);
	string toString();
};