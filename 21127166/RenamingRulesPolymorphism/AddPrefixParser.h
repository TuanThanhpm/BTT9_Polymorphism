#pragma once
#include "IParsable.h"
#include "AddPrefixRule.h"

class AddPrefixParser :public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};