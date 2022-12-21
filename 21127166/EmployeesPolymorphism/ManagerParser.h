#pragma once
#include "IParsable.h"
#include "Manager.h"

class ManagerParser : public IParsable {
public:
	Object* parse(string);
	string parsedObjectName();
};