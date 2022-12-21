#pragma once
#include "IRule.h"

class AddPrefixRule :public IRule {
public:
	string _prefix;

public:
	AddPrefixRule() { this->_prefix = ""; }
	AddPrefixRule(string prefix) { this->_prefix = prefix; }

public:
	string getPrefix() { return this->_prefix; }
	void setPrefix(string prefix) { this->_prefix = prefix; }

public:
	string rename(string);
	string toString();
};