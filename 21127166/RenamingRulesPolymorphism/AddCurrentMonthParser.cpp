#include "AddCurrentMonthParser.h"

Object* AddCurrentMonthParser::parse(string data) {
	if (data != "AddCurrentMonth")
		return NULL;
	Object* result = new AddCurrentMonthRule();
	return result;
}

string AddCurrentMonthParser::parsedObjectName() {
	string result = "AddCurrentMonthParser";
	return result;
}