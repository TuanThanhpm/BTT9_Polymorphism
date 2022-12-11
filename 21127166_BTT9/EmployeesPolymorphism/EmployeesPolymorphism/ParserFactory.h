#pragma once
#include "Object.h"
#include <map>
#include "DailyEmployeeParser.h"
#include "ProductEmployeeParser.h"
#include "ManagerParser.h"

using std::map;
class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;

public:
	void registerWith(IParsable* parser);
	IParsable* create(string type);
	string toString();
};

