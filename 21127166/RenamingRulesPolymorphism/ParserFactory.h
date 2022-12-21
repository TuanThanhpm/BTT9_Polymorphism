#pragma once
#include "Object.h"
#include <map>
#include "AddCurrentMonthParser.h"
#include "AddPrefixParser.h"
#include "OneSpaceOnlyParser.h"
#include "RemoveSpecialCharsParser.h"
#include "ReplaceParser.h"

using std::map;
class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;

public:
	void registerWith(IParsable* parser);
	IParsable* create(string type);
	string toString();
};

