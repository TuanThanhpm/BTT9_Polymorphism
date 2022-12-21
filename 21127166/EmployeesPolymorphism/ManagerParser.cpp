#include <iostream>
#include "ManagerParser.h"

Object* ManagerParser::parse(string data) {
	const regex pattern("^\w=\d+,\w=\d+$");
	Object* result = NULL;
	if (regex_match(data, pattern)) {
		return result;
	}
	vector<string> token = Utils::String::split(data, ", ");
	vector<string> tokenC = Utils::String::split(token[0], "=");
	vector<string> tokenP = Utils::String::split(token[1], "=");
	vector<string> tokenS = Utils::String::split(token[2], "=");
	int employee = stoi(tokenC[1]);
	int payment = stoi(tokenP[1]);
	int baseSalary = stoi(tokenS[1]);
	result = new Manager(employee, payment, baseSalary);
	return result;
}

string ManagerParser::parsedObjectName() {
	string result = "Manager";
	return result;
}