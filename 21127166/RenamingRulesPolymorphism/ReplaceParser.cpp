#include "ReplaceParser.h"

Object* ReplaceParser::parse(string data) {

	vector<string> token = Utils::String::split(data, ", ");
	vector<string> tokenA = Utils::String::split(token[0], "=");
	vector<string> tokenB = Utils::String::split(token[1], "=");

	string pattern = tokenA[1];
	string replacement = tokenB[1];

	Object* result = new ReplaceRule(pattern, replacement);
	return result;
}

string ReplaceParser::parsedObjectName() {
	string result = "ReplaceParser";
	return result;
}