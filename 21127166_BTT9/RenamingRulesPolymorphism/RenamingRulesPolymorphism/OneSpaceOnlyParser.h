#pragma once
#include "IParsable.h"
#include "OneSpaceOnlyRule.h"

class OneSpaceOnlyParser :public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};