#pragma once
#include "IParsable.h"
#include "DailyEmployee.h"

class DailyEmployeeParser : public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};