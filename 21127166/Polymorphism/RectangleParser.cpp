#include <iostream>
#include <exception>
#include <regex>
#include "RectangleParser.h"

using std::regex, std::regex_match, std::exception;

Object* RectangleParser::parse(string data) {
	const regex pattern("^\w=\d+,\w=\d+$");
	Object* result = NULL;
	if (regex_match(data, pattern)) {
		return result;
	}
	vector<string> token = Utils::String::split(data, ",");
	vector<string> tokenW = Utils::String::split(token[0], "=");
	vector<string> tokenH = Utils::String::split(token[1], "=");

	double width = stod(tokenW[1]);
	double length = stod(tokenH[1]);
	result = new Rectangle(length, width);
	return result;
}