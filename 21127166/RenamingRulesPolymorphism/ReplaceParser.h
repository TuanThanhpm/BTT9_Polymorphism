#pragma once
#include "IParsable.h"
#include "ReplaceRule.h"

class ReplaceParser :public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};