#include <iostream>
#include <regex>
#include "ProductEmployeeParser.h"

Object* ProductEmployeeParser::parse(string data) {
	const regex pattern("^\w=\d+,\w=\d+$");
	Object* result = NULL;
	if (regex_match(data, pattern)) {
		return result;
	}
	vector<string> token = Utils::String::split(data, ", ");
	vector<string> tokenC = Utils::String::split(token[0], "=");
	vector<string> tokenP = Utils::String::split(token[1], "=");
	int product = stoi(tokenC[1]);
	int payment = stoi(tokenP[1]);
	result = new ProductEmployee(product, payment);
	return result;
}

string ProductEmployeeParser::parsedObjectName() {
	string result = "ProductEmployee";
	return result;
}