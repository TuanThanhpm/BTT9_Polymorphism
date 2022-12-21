#pragma once
#include "IParsable.h"
#include "ProductEmployee.h"

class ProductEmployeeParser : public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};