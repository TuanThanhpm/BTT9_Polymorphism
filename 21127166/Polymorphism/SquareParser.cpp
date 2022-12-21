#include <iostream>
#include <regex>
#include <exception>
#include "SquareParser.h"

using std::regex, std::regex_match, std::exception;

Object* SquareParser::parse(string data) {
	const regex pattern("^\w=\d+$");
	Object* result = NULL;
	if (regex_match(data, pattern)) {
		return result;
	}
	vector<string> token = Utils::String::split(data, "=");
	double side = stod(token[1]);
	result = new Square(side);
	return result;
}
