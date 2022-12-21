#pragma once
#include "IParsable.h"
#include "AddCurrentMonthRule.h"

class AddCurrentMonthParser :public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};