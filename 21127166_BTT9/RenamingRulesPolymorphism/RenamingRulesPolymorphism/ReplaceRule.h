#pragma once
#include "IRule.h"

class ReplaceRule : public IRule {
private:
	string _pattern;
	string _replacement;

public:
	ReplaceRule(string, string);
public:
	string getPattern() { return this->_pattern; }
	string getReplacement() { return this->_replacement; }
	void setPattern(string pattern) { this->_pattern = pattern; }
	void setReplacement(string replacement) { this->_replacement = replacement; }

public:
	string rename(string);
	string toString();
};