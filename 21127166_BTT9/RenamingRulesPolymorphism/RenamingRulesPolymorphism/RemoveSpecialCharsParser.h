#pragma once
#include "IParsable.h"
#include "RemoveSpecialCharsRule.h"

class RemoveSpecialCharsParser :public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};