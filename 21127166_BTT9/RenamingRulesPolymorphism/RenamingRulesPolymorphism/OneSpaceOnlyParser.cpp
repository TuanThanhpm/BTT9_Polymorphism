#include "OneSpaceOnlyParser.h"

Object* OneSpaceOnlyParser::parse(string data) {
	if (data != "OneSpaceOnly")
		return NULL;
	Object* result = new OneSpaceOnlyRule();
	return result;
}

string OneSpaceOnlyParser::parsedObjectName() {
	string result = "OneSpaceOnly";
	return result;
}