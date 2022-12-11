#include "AddPrefixParser.h"

Object* AddPrefixParser::parse(string data) {
	Object* result = new AddPrefixRule(data);
	return result;
}

string AddPrefixParser::parsedObjectName() {
	string result = "AddPrefix";
	return result;
}