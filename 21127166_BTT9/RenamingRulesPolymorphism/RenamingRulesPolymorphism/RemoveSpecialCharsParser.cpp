#include "RemoveSpecialCharsParser.h"

Object* RemoveSpecialCharsParser::parse(string data) {
	vector<string> token = Utils::String::split(data, "=");
	vector<string> specialChars;

	for (auto& ch : token[1]) {
		stringstream builder;
		builder << ch;
		specialChars.push_back(builder.str());
	}
	Object* result = new RemoveSpecialCharsRule(specialChars);
	return result;
}

string RemoveSpecialCharsParser::parsedObjectName() {
	string result = "RemoveSpecialChars";
	return result;
}