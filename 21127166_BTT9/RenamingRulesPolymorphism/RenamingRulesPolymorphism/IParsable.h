#pragma once
#include "Object.h"
#include "Utils.h"

class IParsable {
public:
	virtual Object* parse(string) = 0;
	virtual string parsedObjectName() = 0;
};