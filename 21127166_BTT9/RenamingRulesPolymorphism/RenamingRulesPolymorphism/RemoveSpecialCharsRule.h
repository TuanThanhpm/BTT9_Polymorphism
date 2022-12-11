#pragma once
#include "IRule.h"
#include <vector>
#include <string>

using std::vector, std::string;

class RemoveSpecialCharsRule : public IRule {
private:
	vector<string> _specialChars;

public:
	RemoveSpecialCharsRule(vector<string>);

public:
	vector<string> specialChars() { return this->_specialChars; }
	void setSpecialChars(vector<string> temp) { this->_specialChars = temp; }
public:
	string rename(string);
	string toString();

};