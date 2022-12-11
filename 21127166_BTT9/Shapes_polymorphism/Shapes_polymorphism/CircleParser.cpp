#include <iostream>
#include <regex>
#include <exception>
#include "CircleParser.h"

using std::regex, std::regex_match, std::exception;

Object* CircleParser::parse(string data) {
	const regex pattern("^\w=\d+$");
	Object* result = NULL;
	if (regex_match(data, pattern)) {
		return result;
	}
	vector<string> token = Utils::String::split(data, "=");
	double radius = stod(token[1]);
	result = new Circle(radius);
	return result;
}